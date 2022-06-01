package com.unity.mynativeapp.tmapAPI;

import android.content.Intent;
import android.os.Bundle;
import android.provider.ContactsContract;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ListView;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

import com.unity.mynativeapp.POJO.Trashcan;
import com.unity.mynativeapp.R;

import java.util.ArrayList;
import java.util.List;

public class TrashcanfloatingActivity extends AppCompatActivity {

    private ListView listView;
    private TrashcanAdapter adapter;

    ArrayList<Trashcan> DataList;
    String title;
    int subtitle;
    Double latitude ;
    Double longitude ;
    int report;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_trashcan_list);

        adapter = new TrashcanAdapter(TrashcanfloatingActivity.this);

        listView = findViewById(R.id.trashcanlist);
        listView.setAdapter(adapter);
        DataList = (ArrayList<Trashcan>) getIntent().getSerializableExtra("trashcanList");


        for (int i = 0; i<DataList.size();i++){
            title = DataList.get(i).getName();
            subtitle = DataList.get(i).getDistance();
            latitude = DataList.get(i).getLatitude();
            longitude = DataList.get(i).getLongitude();
            report = DataList.get(i).getReport();
            adapter.addItem(title,subtitle,latitude,longitude,report);
        }


    }




}