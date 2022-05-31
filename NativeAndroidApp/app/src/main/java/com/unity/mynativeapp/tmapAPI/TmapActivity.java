package com.unity.mynativeapp.tmapAPI;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;
import androidx.fragment.app.Fragment;

import android.Manifest;
import android.content.Intent;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.location.Location;
import android.os.Build;
import android.os.Bundle;

import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.Toast;

import com.google.firebase.database.DataSnapshot;
import com.google.firebase.database.DatabaseError;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.google.firebase.database.ValueEventListener;
import com.skt.Tmap.TMapMarkerItem;
import com.skt.Tmap.TMapPoint;
import com.skt.Tmap.TMapView;
import com.skt.Tmap.TMapGpsManager;
import com.unity.mynativeapp.POJO.Trashcan;
import com.unity.mynativeapp.POJO.pedestrianPath.Route;
import com.unity.mynativeapp.R;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Map;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;


public class TmapActivity extends AppCompatActivity implements TMapGpsManager.onLocationChangedCallback {
    //onLocationChangedCallback은 위치값을 지속적으로 갱신하기 위한 함수.

    TMapView tMapView = null;       // T Map View
    TMapGpsManager tMapGPS = null;  // T Map GPS
    List<TMapMarkerItem> markerList = null;

    private final DatabaseReference databaseReference = FirebaseDatabase.getInstance().getReference();

    Intent intentMap;   // navigation 지도 Activity
    Intent intentList;  // 쓰레기통 목록 Activity
    Button button;      // 쓰레기통 목록 버튼

    // REST API - 고정 data
    String api_key = "l7xx9a6a0f893c67471099e573946a28c3c7";    // 발급받은 TMAP API Key
    int angle = 1;
    int speed = 4;
    String start_name = "출발지";
    String end_name = "도착지";

    List<Trashcan> trashcans = new ArrayList<>();        // 전체 쓰레기통 목록
    List<Trashcan> trashcanList = new ArrayList<>();    // 근처 쓰레기통 목록(+ 이동 거리/시간)
    double latitude, longitude;             // 현재위치 위도, 경도 임시저장


    // 두 좌표 직선거리 계산
    private static double getDistance(double lat1, double lon1, double lat2, double lon2) {
        double theta = lon1 - lon2;
        double dist = Math.sin(deg2rad(lat1)) * Math.sin(deg2rad(lat2)) + Math.cos(deg2rad(lat1)) * Math.cos(deg2rad(lat2)) * Math.cos(deg2rad(theta));

        dist = Math.acos(dist);
        dist = rad2deg(dist);
        dist = dist * 60 * 1.1515 * 1609.344;
        return (dist);
    }

    // This function converts decimal degrees to radians
    private static double deg2rad(double deg) { return (deg * Math.PI / 180.0); }

    // This function converts radians to decimal degrees
    private static double rad2deg(double rad) { return (rad * 180 / Math.PI); }


    // 근처 쓰레기통 검색 및 저장
    public void getTrashcanList () {

        // 근처 쓰레기통 검색
        for(Trashcan trashcan: trashcans){  // 전체 쓰레기통 중
            if(1000 >= getDistance(latitude, longitude, trashcan.getLatitude(), trashcan.getLongitude())){
                // 반경 1km 이내 쓰레기통만 list에 추가
                trashcanList.add(trashcan);
            }
        }
        //test
        Log.e("SEARCH TEST", "First Trashcan Info \n");
        Log.d("SEARCH TEST", trashcanList.get(0).toString());
    }


    // 마커 생성 및 충선 뷰 구성
    public void addMarketMarker() {

        // Marker img -> bitmap
        Bitmap bitmap = BitmapFactory.decodeResource(getResources(), R.drawable.marker_pin);
        Bitmap bitmap_i = BitmapFactory.decodeResource(getResources(), R.drawable.marker_arrow);
        markerList = new ArrayList<TMapMarkerItem>();
        double lat, lon;
        int m_index = 0;

        for (Trashcan trashcan : trashcanList) {

            lat =  trashcan.getLatitude();    // 위도
            lon =  trashcan.getLongitude();    // 경도
            int distance = (int) Math.round(getDistance(latitude, longitude, lat, lon));   // 쓰레기통 거리

            // TMapPoint
            TMapPoint tMapPoint = new TMapPoint(lat, lon);

            // TMapMarkerItem
            // Marker Initial Settings
            markerList.add(new TMapMarkerItem());
            markerList.get(m_index).setIcon(bitmap);                 // bitmap를 Marker icon으로 사용
            markerList.get(m_index).setPosition(0.5f, 1.0f);  // Marker img의 position
            markerList.get(m_index).setTMapPoint(tMapPoint);         // Marker의 위치

            // 풍선 뷰 안의 항목에 글 지정
            // 상세정보(이름, 거리, 시간) + 시작버튼
            markerList.get(m_index).setCalloutTitle(trashcan.getName());
            markerList.get(m_index).setCalloutSubTitle(String.valueOf(distance)+" m");
            markerList.get(m_index).setCalloutRightButtonImage(bitmap_i);
            markerList.get(m_index).setCanShowCallout(true);

            // add Marker on T Map View
            // tid로 Marker을 식별
            tMapView.addMarkerItem(trashcan.getTid(), markerList.get(m_index));

            m_index++;
        }
        //test
        Log.e("MARKER TEST", "MARKER ID \n");
        Log.d("MARKER TEST", markerList.get(0).getID());
    }


    // <summery>
    // 쓰레기통 경로 데이터 요청 및 전달 (경로 안내 Activity로)
    // <param> 목표 쓰레기통 위치 (위도/경도)
    // </summery>
    public void getRouteData(double end_latitude, double end_longitude) {

        // Retrofit 인스턴스로 인터페이스 객체 구현
        RetrofitInterface service = RetrofitClient.getInterface();

        // 사용할 메소드 선언
        Call<Route> call = service.getroute(api_key, longitude, latitude, angle, speed, end_longitude, end_latitude, start_name, end_name);
        call.enqueue(new Callback<Route>() {
            @Override
            public void onResponse(Call<Route> call, Response<Route> response){
                if(response.isSuccessful()){    // 정상적으로 통신이 성공 된 경우
                    // 통신 결과 데이터(보행자 경로) 저장
                    Route result = response.body();

                    /*
                    // Activity로 데이터 전달, Activity 이동 - 지연
                    intentMap = new Intent(TMapActivity.this, TmapNavigationActivity.class);  // TmapNavigationActivity intent 생성
                    intentMap.putExtra("start_lat", latitude);         // 현재 위치(double)
                    intentMap.putExtra("start_lon", longitude);
                    intentMap.putExtra("end_lat", end_latitude);       // 쓰레기통 위치(double)
                    intentMap.putExtra("end_lon", end_longitude);
                    intentMap.putExtra("Route", result);               // 경로 데이터(Route)
                    startActivity(intentMap);  // Activity 이동
                    */

                    //test
                    Log.e("REST API TEST", "onResponse: 성공 \n");
                    Log.d("REST API TEST", result.toString());

                } else {    // 통신이 실패한 경우(응답코드 3xx, 4xx 등)
                    Log.d("REST API TEST", "onResponse: 실패");
                }
            }
            @Override
            public void onFailure(Call<Route> call, Throwable t) {
                // 통신 실패(인터넷 끊김, 예외 발생 등 시스템적인 이유)
                Log.e("REST API TEST", "onFailure: "+t.getMessage());
            }
        });
    }


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_tmap);

        tMapView = new TMapView(this);  // T Map View
        tMapView.setSKTMapApiKey(api_key);      // API Key

        // Initial Setting
        tMapView.setZoomLevel(17);
        tMapView.setIconVisibility(true);
        tMapView.setMapType(TMapView.MAPTYPE_STANDARD);
        tMapView.setLanguage(TMapView.LANGUAGE_KOREAN);
        tMapView.setTrackingMode(true);

        // T Map View Using Linear Layout
        LinearLayout linearLayoutTmap = (LinearLayout)findViewById(R.id.linearLayoutTmap);
        linearLayoutTmap.addView(tMapView);
        button = (Button)findViewById(R.id.move_list_btn);

        // Request For GPS permission
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            requestPermissions(new String[] {Manifest.permission.ACCESS_FINE_LOCATION}, 1);
        }

        // GPS using T Map
        tMapGPS = new TMapGpsManager(this);

        // Initial Setting
        tMapGPS.setMinTime(1000);
        tMapGPS.setMinDistance(10);
        tMapGPS.setProvider(tMapGPS.GPS_PROVIDER);

        //tMapGPS.OpenGps();    // 실제 device 사용
        latitude = 35.153759;   // 애뮬 사용
        longitude = 128.098837;

        tMapView.setLocationPoint(longitude, latitude);     // 지도 현재위치 지정
        tMapView.setCenterPoint(longitude, latitude, false);   // 지도 중심좌표 이동


        // 쓰레기통 정보 한 번 읽어오기
        databaseReference.child("Trashcan").addListenerForSingleValueEvent(new ValueEventListener() {
            @Override
            public void onDataChange(@NonNull DataSnapshot snapshot) {
                
                // 지정한 위치의 데이터를 포함하는 DataSnapshot을 수신한다
                for (DataSnapshot postSnapshot: snapshot.getChildren()){
                    Trashcan trashcan = postSnapshot.getValue(Trashcan.class);
                    trashcans.add(trashcan);
                }
                // getValue를 통해 tid의 하부 child인 name, region, latitude, longitude, report, tid에 대한 데이터를 받아와
                // Trashcan.class를 통해 옮겨담는다.

                Log.e("GET TRASHCAN LIST TEST", " trashcan info\n");
                Log.d("GET TRASHCAN LIST TEST", " Latitude: " + trashcans.get(0).getLatitude() + ", "+ trashcans.get(0).getLongitude());

                // 근처 쓰레기통 검색 및 저장
                getTrashcanList();

                // 쓰레기통 위치에 핀 생성
                addMarketMarker();

                // 핀/ 풍선뷰 우측 버튼 클릭
                tMapView.setOnCalloutRightButtonClickListener(new TMapView.OnCalloutRightButtonClickCallback() {
                    @Override
                    public void onCalloutRightButton(TMapMarkerItem tMapMarkerItem) {
                        for(Trashcan trashcan : trashcanList){
                            if(trashcan.getTid().equals(tMapMarkerItem.getID())){
                                // 쓰레기통 경로 데이터 요청 및 전달 (경로 안내 Activity로)
                                getRouteData(trashcan.getLatitude(), trashcan.getLongitude());
                            }
                        }
                    }
                });

                // 쓰레기통 목록 버튼 클릭
                button.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public void onClick(View v) {
                        
                        // 쓰레기통까지 거리 저장
                        for(Trashcan trashcan: trashcanList){
                            int distance = (int) Math.round(getDistance(latitude, longitude, trashcan.getLatitude(), trashcan.getLongitude()));
                            trashcan.setDistance(distance);
                        }
                        Collections.sort(trashcanList); // distance 기준 근처 쓰레기통 목록 오름차순 정렬
                        Log.e("BUTTON TEST",String.valueOf(trashcanList.get(0).getDistance()));

                        /*
                        // Activity로 데이터 전달, Activity 이동
                        intentList = new Intent(TMapActivity.this, TrashcanfloatingActivity.class);  // TrashcanfloatingActivity intent 생성
                        intentList.putExtra("trashcanList", trashcanList);   // 쓰레기통 목록
                        intentList.putExtra("start_lat", latitude);          // 현재 위치(double)
                        intentList.putExtra("start_lon", longitude);
                        startActivity(intentList);  // Activity 이동
                        */
                    }
                });

            }

            @Override
            public void onCancelled(@NonNull DatabaseError error) {
                Log.w("TmapActivity","loadPost:onCancelled", error.toException());
            }
        });
    }

    
    @Override
    public void onLocationChange(Location location) {
        latitude = location.getLatitude();
        longitude = location.getLongitude();

        tMapView.setLocationPoint(longitude, latitude);                 // 지도 현재위치 지정
        tMapView.setCenterPoint(longitude, latitude, true);   // 지도 중심좌표 이동

        // 현재위치 확인 test
        Toast.makeText(getApplicationContext(), "longitude: "+longitude+"\nlatitude: "+latitude , Toast.LENGTH_LONG).show();
    }

}

