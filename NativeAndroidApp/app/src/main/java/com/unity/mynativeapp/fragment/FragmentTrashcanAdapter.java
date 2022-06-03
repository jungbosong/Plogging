
package com.unity.mynativeapp.fragment;

import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;

import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentTransaction;

import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.unity.mynativeapp.POJO.Trashcan;
import com.unity.mynativeapp.R;
import com.unity.mynativeapp.tmapAPI.ShowLocationActivity;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;


public class FragmentTrashcanAdapter extends BaseAdapter {

    private DatabaseReference reference = FirebaseDatabase.getInstance().getReference();

    private Context context;
    private ArrayList list;
    private Fragment fragment;

    // adapter에 추가된 데이터를 저장하기 위한  ArrayList

    class ViewHolder {
        public TextView titleView;
        public TextView subtitleView;
        public ImageView modify;
        public ImageView delete;
        public LinearLayout cmdArea;
    }

    //TrashcanAdapter
    public FragmentTrashcanAdapter(Context context, ArrayList<Trashcan> list, Fragment fragment){
        super();
        this.context = context;
        this.list = list;
        this.fragment = fragment;
    }

    @Override
    public int getCount() {
        return list.size();
    }

    @Override
    public Object getItem(int position) {
        return list.get(position);
    }

    @Override
    public long getItemId(int position) {
        return position;
    }

    @Override
    public View getView(int position, View convertView, ViewGroup parent) {

        final int pos = position;
        final Context context = parent.getContext();
        final ViewHolder viewHolder;
        final Trashcan trash = (Trashcan) list.get(position);
        if(convertView == null){
            LayoutInflater layoutInflater = LayoutInflater.from(parent.getContext());
            convertView = layoutInflater.inflate(R.layout.trashcan_myitem,parent,false);
        }

        String tid = trash.getTid();
        String name = trash.getName();
        double latitude = trash.getLatitude();
        double longitude = trash.getLongitude();

        viewHolder = new ViewHolder();
        viewHolder.titleView = convertView.findViewById(R.id.TrashcanName);
        viewHolder.subtitleView = convertView.findViewById(R.id.TrashcanDistance);
        viewHolder.modify = convertView.findViewById(R.id.modify);
        viewHolder.delete = convertView.findViewById(R.id.delete);
        viewHolder.cmdArea = convertView.findViewById(R.id.cmdArea);
        viewHolder.titleView.setText(trash.getName());
        viewHolder.subtitleView.setText("신고 횟수 : "+ trash.getReport()+" 회");

        // 지도 이동 버튼
        viewHolder.cmdArea.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(fragment.getActivity(), ShowLocationActivity.class);
                intent.putExtra("latitude", latitude);      // 위치정보 전달
                intent.putExtra("longitude", longitude);
                intent.addFlags(Intent.FLAG_ACTIVITY_NO_ANIMATION);
                fragment.startActivity(intent);
            }
        });

        // modify 버튼
        viewHolder.modify.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                DialogModify(tid, name, latitude, longitude);
            }
        });

        // delete 버튼
        viewHolder.delete.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                DialogDelete(tid, name);
            }
        });
        return convertView;
    }

    // dialog modify 띄우기
    public void DialogModify(String tid, String name, double latitude, double longitude){
        AlertDialog.Builder builder = new AlertDialog.Builder(context);
        builder.setTitle(name + "");
        builder.setMessage("수정하시겠습니까?");
        builder.setPositiveButton("확인", new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which) {
                // adapter에서 fragment로 데이터를 전달할 경우
                // adapter 파라미터로 fragmnet를 받아와 bundle을 사용한다.
                FragmentTransaction transaction = fragment.getFragmentManager().beginTransaction();
                FragmentTrashcanRegister fragmentTrashcanRegister = new FragmentTrashcanRegister();
                Bundle bundle = new Bundle();
                bundle.putString("tid", tid);
                bundle.putString("name", name);
                bundle.putDouble("latitude", latitude);
                bundle.putDouble("longitude", longitude);
                fragmentTrashcanRegister.setArguments(bundle);
                transaction.replace(R.id.frame_container, fragmentTrashcanRegister);
                transaction.commit();
            }
        });
        builder.setNegativeButton("취소", new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which) {
                dialog.dismiss();
            }
        });
        AlertDialog alertDialog = builder.create();
        alertDialog.show();
    }

    // dialog delete 띄우기
    public void DialogDelete(String tid, String name){
        AlertDialog.Builder builder = new AlertDialog.Builder(context);
        builder.setTitle(name + "");
        builder.setMessage("삭제하시겠습니까?");
        builder.setPositiveButton("확인", new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which) {
                // 선택된 쓰레기통 정보 DB에서 삭제
                Map<String, Object> childUpdates = new HashMap<>();
                childUpdates.put("/Trashcan/" + tid, null);
                reference.updateChildren(childUpdates);

                // 화면 새로고침
                FragmentTransaction transaction = fragment.getFragmentManager().beginTransaction();
                transaction.detach(fragment).attach(fragment).commit();
            }
        });
        builder.setNegativeButton("취소", new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which) {
                dialog.dismiss();
            }
        });
        AlertDialog alertDialog = builder.create();
        alertDialog.show();
    }

}
