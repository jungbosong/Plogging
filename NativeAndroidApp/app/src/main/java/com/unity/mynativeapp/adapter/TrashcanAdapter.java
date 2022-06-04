package com.unity.mynativeapp.adapter;

import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;

import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.unity.mynativeapp.POJO.Trashcan;
import com.unity.mynativeapp.POJO.Route;
import com.unity.mynativeapp.R;
import com.unity.mynativeapp.api.RetrofitClient;
import com.unity.mynativeapp.api.RetrofitInterface;
import com.unity.mynativeapp.activity.TmapNavigationActivity;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;


public class TrashcanAdapter extends BaseAdapter {

    private DatabaseReference reference = FirebaseDatabase.getInstance().getReference();

    // REST API 요청 파라미터 - 고정 data
    String api_key = "l7xx9a6a0f893c67471099e573946a28c3c7";    // 발급받은 TMAP API Key
    int angle = 1;
    int speed = 4;
    String start_name = "출발지";
    String end_name = "도착지";
    double start_longitude, start_latitude;

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

        // 선택 쓰레기통 정보
        String tid = listViewItemList.get(pos).getTid();
        String title = listViewItemList.get(pos).getName();
        int num_report = listViewItemList.get(pos).getReport();
        double longitude = listViewItemList.get(pos).getLongitude();
        double latitude = listViewItemList.get(pos).getLatitude();

        
        // 쓰레기통 목록 클릭
        cmdArea.setOnClickListener(new View.OnClickListener(){
            public void onClick(View v){
                
                // Retrofit 인스턴스로 인터페이스 객체 구현
                RetrofitInterface service = RetrofitClient.getInterface();

                // 사용할 메소드 선언
                Call<Route> call = service.getroute(api_key, start_longitude, start_latitude, angle, speed, longitude, latitude, start_name, end_name);
                call.enqueue(new Callback<Route>() {
                    @Override
                    public void onResponse(Call<Route> call, Response<Route> response){
                        if(response.isSuccessful()){    // 정상적으로 통신이 성공 된 경우

                            // 통신 결과 데이터(보행자 경로) 저장
                            Route result = response.body();
                            Intent intentMap = new Intent(context, TmapNavigationActivity.class);
                            intentMap.putExtra("start_lat", start_latitude);   // 현재 위치(double)
                            intentMap.putExtra("start_lon", start_longitude);
                            intentMap.putExtra("end_lat", latitude);           // 쓰레기통 위치(double)
                            intentMap.putExtra("end_lon", longitude);
                            intentMap.putExtra("Route", result);               // 경로 데이터(Route)
                            context.startActivity(intentMap);  // Activity 이동
                            //test
                            Log.e("TrashcanAdapter", " REST API TEST - onResponse: 성공 \n");
                            Log.e("REST API TEST", "first feature" + result.getFeatures().get(0).toString());

                        } else {    // 통신이 실패한 경우(응답코드 3xx, 4xx 등)
                            Log.d("TrashcanAdapter", "REST API TEST - onResponse: 실패");
                        }
                    }
                    @Override
                    public void onFailure(Call<Route> call, Throwable t) {
                        // 통신 실패(인터넷 끊김, 예외 발생 등 시스템적인 이유)
                        Log.e("TrashcanAdapter", "onFailure: "+t.getMessage());
                    }
                });
            }
        });

        // 신고 버튼 클릭
        report.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                DialogReport(tid, title, num_report);
            }
        });


        return convertView;
    }

    private void DialogReport(String tid, String title, int report) {
        AlertDialog.Builder builder = new AlertDialog.Builder(context);
        builder.setTitle(title + "");
        builder.setMessage("허위 위치로 신고하겠습니까?");

        // 확인 버튼 클릭
        builder.setPositiveButton("확인", new DialogInterface.OnClickListener() {
            @Override 
            public void onClick(DialogInterface dialog, int which) {
                Map<String, Object> childUpdates = new HashMap<>();
                if(report<3) // 누적 신고횟수 3 이하(신고값 +1)
                    childUpdates.put("/Trashcan/" + tid + "/report", report+1);
                reference.updateChildren(childUpdates);
            }
        });
        // 취소 버튼 클릭
        builder.setNegativeButton("취소", new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which) { dialog.dismiss(); }
        });
        AlertDialog alertDialog = builder.create();
        alertDialog.show();
    }


    public void addItem(String tid, String creator, String title, int distance, Double latitude, Double longitude, int report){
        Trashcan item = new Trashcan();
        item.setTid(tid);
        item.setCreator(creator);
        item.setName(title);
        item.setDistance(distance);
        item.setLatitude(latitude);
        item.setLongitude(longitude);
        item.setReport(report);
        listViewItemList.add(item);
    }

    public void addStartData(double start_lat, double start_lon){
        start_latitude = start_lat;
        start_longitude = start_lon;
    }
}
