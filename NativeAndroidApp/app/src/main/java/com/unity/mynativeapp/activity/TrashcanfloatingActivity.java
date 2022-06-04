package com.unity.mynativeapp.activity;

import android.os.Bundle;
import android.widget.ListView;

import androidx.appcompat.app.AppCompatActivity;

import com.unity.mynativeapp.POJO.Trashcan;
import com.unity.mynativeapp.R;
import com.unity.mynativeapp.adapter.TrashcanAdapter;

import java.util.ArrayList;

public class TrashcanfloatingActivity extends AppCompatActivity {

    private ListView listView;
    private TrashcanAdapter adapter;

    ArrayList<Trashcan> DataList;
    String tid, creator;
    String title;
    int subtitle;
    Double latitude ;
    Double longitude ;
    double start_latitude;
    double start_longitude;
    int report;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_trashcan_list);

        adapter = new TrashcanAdapter(TrashcanfloatingActivity.this);

        listView = findViewById(R.id.trashcanlist);
        listView.setAdapter(adapter);
        DataList = (ArrayList<Trashcan>) getIntent().getSerializableExtra("trashcanList");
        
        start_latitude = (double) getIntent().getSerializableExtra("start_lat");    // 현재위치 - 위도
        start_longitude = (double) getIntent().getSerializableExtra("start_lon");   // 현재위치 - 경도

        // 현재위치 전달
        adapter.addStartData(start_latitude, start_longitude);

        // 쓰레기통 정보 전달
        for (int i = 0; i<DataList.size();i++){
            tid = DataList.get(i).getTid();
            creator = DataList.get(i).getCreator();
            title = DataList.get(i).getName();
            subtitle = DataList.get(i).getDistance();
            latitude = DataList.get(i).getLatitude();
            longitude = DataList.get(i).getLongitude();
            report = DataList.get(i).getReport();
            adapter.addItem(tid, creator, title, subtitle, latitude, longitude, report);
        }
    }
}