
package com.unity.mynativeapp.fragment;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.ImageView;
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

        final Trashcan trash = (Trashcan) list.get(position);
        viewHolder.titleView.setText(trash.getName());
        viewHolder.subtitleView.setText("신고 횟수 : "+ trash.getReport()+" 회");




        return convertView;
    }





}
