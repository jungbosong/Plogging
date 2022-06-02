
package com.unity.mynativeapp.fragment;

import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;

import com.unity.mynativeapp.POJO.Trashcan;
import com.unity.mynativeapp.R;

import java.util.ArrayList;
import java.util.List;


public class FragmentTrashcanAdapter extends BaseAdapter {


    private Context context;
    private ArrayList list;

    // adapter에 추가된 데이터를 저장하기 위한  ArrayList

    class ViewHolder {
        public TextView titleView;
        public TextView subtitleView;
        public ImageView modify;
        public ImageView delete;
        public LinearLayout cmdArea;

    }
    //TrashcanAdapter
    public FragmentTrashcanAdapter(Context context, ArrayList<Trashcan> list){
        super();
        this.context = context;
        this.list = list;
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
        if(convertView == null){
            LayoutInflater layoutInflater = LayoutInflater.from(parent.getContext());
            convertView = layoutInflater.inflate(R.layout.trashcan_myitem,parent,false);
        }
        viewHolder = new ViewHolder();
        viewHolder.titleView = convertView.findViewById(R.id.TrashcanName);
        viewHolder.subtitleView = convertView.findViewById(R.id.TrashcanDistance);
        viewHolder.modify = convertView.findViewById(R.id.modify);
        viewHolder.delete = convertView.findViewById(R.id.delete);
        viewHolder.cmdArea = convertView.findViewById(R.id.cmdArea);
        final Trashcan trash = (Trashcan) list.get(position);
        viewHolder.titleView.setText(trash.getName());
        viewHolder.subtitleView.setText("신고 횟수 : "+ trash.getReport()+" 회");

        // 지도 이동 버튼
        viewHolder.cmdArea.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                System.out.println(trash.getLatitude());
                System.out.println(trash.getLongitude());

            }


        });



        // delte 버튼
        viewHolder.delete.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                System.out.println(trash.getName());
                DialogDelete(trash.getName());
            }


        });
        // modify 버튼
        viewHolder.modify.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                System.out.println(trash.getName());
                DialogModify(trash.getName());
            }


        });


        return convertView;
    }

    // dialog delete 띄우기
    public void DialogDelete(String name){
        AlertDialog.Builder builder = new AlertDialog.Builder(context);
        builder.setTitle(name + "");
        builder.setMessage("삭제하시겠습니까?");
        builder.setPositiveButton("확인", new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which) {
                System.out.println("확인 버튼 ");
            }
        });
        builder.setNegativeButton("취소", new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which) {
                System.out.println("취소 버튼 ");
            }
        });
        AlertDialog alertDialog = builder.create();
        alertDialog.show();
    }

    // dialog modift 띄우기
    public void DialogModify(String name){
        AlertDialog.Builder builder = new AlertDialog.Builder(context);
        builder.setTitle(name + "");
        builder.setMessage("수정하시겠습니까?");
        builder.setPositiveButton("확인", new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which) {
                System.out.println("확인 버튼 ");
            }
        });
        builder.setNegativeButton("취소", new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which) {
                System.out.println("취소 버튼 ");
            }
        });
        AlertDialog alertDialog = builder.create();
        alertDialog.show();
    }


}
