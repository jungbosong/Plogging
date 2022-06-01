package com.unity.mynativeapp.tmapAPI;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Adapter;
import android.widget.BaseAdapter;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;

import com.unity.mynativeapp.POJO.Trashcan;
import com.unity.mynativeapp.R;
import com.unity.mynativeapp.fragment.recycle.clothActivity;
import com.unity.mynativeapp.fragment.recycle.umbrellaActivity;

import java.util.ArrayList;


public class TrashcanAdapter extends BaseAdapter {
    Context context;
    private TextView titleView;
    private TextView distanceView;
    LayoutInflater inflater;
    // adapter에 추가된 데이터를 저장하기 위한  ArrayList
    private ArrayList<Trashcan> listViewItemList = new ArrayList<Trashcan>();

    //TrashcanAdapter
    public TrashcanAdapter(Context context){
        this.context = context;
        this.inflater = (LayoutInflater) context.getSystemService(Context.LAYOUT_INFLATER_SERVICE);

    }

    @Override
    public int getCount() {
        return listViewItemList.size();
    }

    @Override
    public Object getItem(int position) {
        return listViewItemList.get(position);
    }

    @Override
    public long getItemId(int position) {
        return position;
    }

    @Override
    public View getView(int position, View convertView, ViewGroup parent) {
        final int pos = position;
        final Context context = parent.getContext();

        if(convertView == null){
            LayoutInflater inflater = (LayoutInflater) context.getSystemService(Context.LAYOUT_INFLATER_SERVICE);
            convertView = inflater.inflate(R.layout.trashcan_item,parent,false);
        }


        Trashcan listViewItem = listViewItemList.get(position);
        LinearLayout cmdArea = convertView.findViewById(R.id.cmdArea);
        ImageView report = convertView.findViewById(R.id.report);
        titleView = convertView.findViewById(R.id.TrashcanName);
        distanceView = convertView.findViewById(R.id.TrashcanDistance);
        titleView.setText(listViewItem.getName());
        distanceView.setText("이동거리 : " + listViewItem.getDistance() + " m ");

        //click event
        cmdArea.setOnClickListener(new View.OnClickListener(){
            public void onClick(View v){
                System.out.println(listViewItemList.get(pos).getLongitude());
                System.out.println(listViewItemList.get(pos).getLatitude());
            }
        });
        report.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                System.out.println(listViewItemList.get(pos).getReport());
                DialogReport(listViewItemList.get(pos).getReport(),listViewItemList.get(pos).getName());
            }
        });


        return convertView;
    }

    private void DialogReport(int report, String title) {
        AlertDialog.Builder builder = new AlertDialog.Builder(context);
        builder.setTitle(title + "");
        builder.setMessage("허위 위치로 신고하겠습니까?");
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


    public void addItem(String title, int distance, Double latitude, Double longitude, int report){
        Trashcan item = new Trashcan();

        item.setName(title);
        item.setDistance(distance);
        item.setLatitude(latitude);
        item.setLongitude(longitude);
        item.setReport(report);
        listViewItemList.add(item);
    }

}
