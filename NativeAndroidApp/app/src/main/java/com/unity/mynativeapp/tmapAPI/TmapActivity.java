package com.unity.mynativeapp.tmapAPI;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import android.Manifest;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.location.Location;
import android.os.Build;
import android.os.Bundle;

import android.util.Log;
import android.widget.LinearLayout;
import android.widget.Toast;

import com.google.firebase.database.ChildEventListener;
import com.google.firebase.database.DataSnapshot;
import com.google.firebase.database.DatabaseError;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.google.firebase.database.Query;
import com.google.firebase.database.ValueEventListener;
import com.skt.Tmap.TMapMarkerItem;
import com.skt.Tmap.TMapPoint;
import com.skt.Tmap.TMapView;
import com.skt.Tmap.TMapGpsManager;
import com.unity.mynativeapp.POJO.Trashcan;
import com.unity.mynativeapp.POJO.pedestrianPath.Route;
import com.unity.mynativeapp.R;
import com.unity.mynativeapp.realtimedb.DatabaseInfo;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;


public class TmapActivity extends AppCompatActivity implements TMapGpsManager.onLocationChangedCallback {
    //onLocationChangedCallback은 위치값을 지속적으로 갱신하기 위한 함수.

    String API_Key = "l7xx9a6a0f893c67471099e573946a28c3c7";    // 발급받은 API Key
    TMapView tMapView = null;       // T Map View
    TMapGpsManager tMapGPS = null;  // T Map GPS
    TMapPoint tMapPoint = null;     // T Map Point

    // REST API - 고정 data
    String appKey = "l7xx6eef69fa1aad46c19eb598ba67dfc0b8";
    int angle = 1;
    int speed = 4;
    String startName = "출발지";
    String endName = "도착지";
    double startX, startY;   // 현재위치(경도, 위도)
    Double endX, endY;       // 도착위치(경도, 위도)

    private final FirebaseDatabase database = FirebaseDatabase.getInstance();
    private final DatabaseReference databaseReference = database.getReference();

    List<Trashcan> trashcans = new ArrayList<>();                   // 근처 쓰레기통 목록
    List<Map<String, Object>> trashcan_list = new ArrayList<>();    // 근처 쓰레기통 정보(목록+경로데이터)
    double latitude, longitude;             // 위도, 경도 임시저장


    // 두 좌표 직선거리 계산
    private static double distance(double lat1, double lon1, double lat2, double lon2) {
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

    // 마커 생성
    public void addMarketMarker() {

        // Marker img -> bitmap
        Bitmap bitmap = BitmapFactory.decodeResource(getResources(), R.drawable.markerline_yellow);
        double lat, lon;

        for (int i = 0; i < trashcan_list.size(); i++) {

            lat = (Double) trashcan_list.get(i).get("latitude");      // 위도
            lon = (Double) trashcan_list.get(i).get("longitude");     // 경도

            // TMapPoint
            TMapPoint tMapPoint = new TMapPoint(lat, lon);

            // TMapMarkerItem
            // Marker Initial Settings
            TMapMarkerItem tMapMarkerItem = new TMapMarkerItem();
            tMapMarkerItem.setIcon(bitmap);                 // bitmap를 Marker icon으로 사용
            tMapMarkerItem.setPosition(0.5f, 1.0f);  // Marker img의 position
            tMapMarkerItem.setTMapPoint(tMapPoint);         // Marker의 위치

            // add Marker on T Map View
            // id로 Marker을 식별
            tMapView.addMarkerItem("marketLocation" + i, tMapMarkerItem);
        }
    }
    
    // <summery>
    // 근처 쓰레기통 검색 및 저장
    // 각 쓰레기통 별 경로 데이터 저장
    // </summery>
    public void getTrashcanList () {

        startX = longitude;
        startY = latitude;
        int index = 0;

        // 근처 쓰레기통 검색
        for(Trashcan trashcan: trashcans){  // 전체 쓰레기통 중
            if(1000 >= distance(latitude, longitude, trashcan.getLatitude(), trashcan.getLongitude())){
                // 반경 1km 이내 쓰레기통만 list에 추가
                trashcan_list.add(trashcan.TrashcantoMap());
            }
        }
        //test
        Log.e("SEARCH TEST", "SEARCH TEST");
        Log.d("SEARCH TEST", trashcan_list.get(0).toString());


        // 각 쓰레기통 별 경로 데이터 요청 - 총 거리, 총 소요 시간 / 쓰레기통 데이터와 병합
        RetrofitInterface service = RetrofitClient.getInterface(); // Retrofit 인스턴스로 인터페이스 객체 구현
        for(Map<String, Object> trashcan: trashcan_list){   // 쓰레기통별 총 거리, 총 소요시간 저장
            endX = (Double) trashcan.get("longitude");
            endY = (Double) trashcan.get("latitude");

            // 사용할 메소드 선언
            Call<Route> call = service.getroute(appKey, startX, startY, angle, speed, endX.doubleValue(), endY.doubleValue(), startName, endName);
            call.enqueue(new Callback<Route>() {

                @Override
                public void onResponse(Call<Route> call, Response<Route> response){
                    if(response.isSuccessful()){    // 정상적으로 통신이 성공 된 경우
                        // 통신 결과 데이터(보행자 경로) 저장
                        Route result = response.body();
                        trashcan.put("totalDistance", result.getFeatures().get(0).getProperties().getTotalDistance());  // 총 거리
                        trashcan.put("totalTime", result.getFeatures().get(0).getProperties().getTotalTime());          // 총 소요시간

                        if(trashcan.get("tid").equals(trashcan_list.get(trashcan_list.size()-1).get("tid"))){
                            // 지도 clear, 근처 쓰레기통 위치에 핀 생성
                            addMarketMarker();
                        }
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
    }


    // 상세정보+버튼 띄우기



    // 핀 버튼 터치 시 쓰레기통 정보 + 경로 데이터 전달 - 길안내 Activity(지연)



    @Override
    public void onLocationChange(Location location) {
        latitude = location.getLatitude();
        longitude = location.getLongitude();

        tMapView.setLocationPoint(longitude, latitude);     // 지도 현재위치 지정
        tMapView.setCenterPoint(longitude, latitude, true);   // 지도 중심좌표 이동

        // 현재위치 확인 test
        Toast.makeText(getApplicationContext(), "longitude: "+longitude+"\nlatitude: "+latitude , Toast.LENGTH_LONG).show();

        // 근처 쓰레기통 목록 update, 핀 생성
        getTrashcanList();
    }

    
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_tmap);

        tMapView = new TMapView(this);  // T Map View
        tMapView.setSKTMapApiKey(API_Key);      // API Key

        // Initial Setting
        tMapView.setZoomLevel(17);
        tMapView.setIconVisibility(true);
        tMapView.setMapType(TMapView.MAPTYPE_STANDARD);
        tMapView.setLanguage(TMapView.LANGUAGE_KOREAN);
        tMapView.setTrackingMode(true);

        // T Map View Using Linear Layout
        LinearLayout linearLayoutTmap = (LinearLayout)findViewById(R.id.linearLayoutTmap);
        linearLayoutTmap.addView(tMapView);

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
        //tMapGPS.setProvider(tMapGPS.NETWORK_PROVIDER);

        tMapGPS.OpenGps();

        //애뮬 테스트(휴대폰 연결 안할 때)
        /*latitude = 35.153759;
        longitude = 128.098837;
        tMapView.setLocationPoint(longitude, latitude);     // 지도 현재위치 지정
        tMapView.setCenterPoint(longitude, latitude, true);   // 지도 중심좌표 이동*/

        // 쓰레기통 정보 변동 시 전체 쓰레기통 목록 자동 update
        databaseReference.child("Trashcan").addListenerForSingleValueEvent(new ValueEventListener() {
            @Override
            public void onDataChange(@NonNull DataSnapshot snapshot) {
                // 지정한 위치의 데이터를 포함하는 DataSnapshot을 수신한다
                for (DataSnapshot postSnapshot: snapshot.getChildren()){
                    Trashcan trashcan = postSnapshot.getValue(Trashcan.class);
                    trashcans.add(trashcan);
                }
                Log.e("GET TRASHCAN LIST TEST", " trashcan list\n");
                Log.d("GET TRASHCAN LIST TEST", " Latitude: " + trashcans.get(0).getLatitude() + ", "+ trashcans.get(0).getLongitude());

                // 근처 쓰레기통 검색 및 저장, 총 거리 및 소요시간 저장
                getTrashcanList();
            }
            // getKey() API를 통해 해당 children의 key인 tid를 가져오고
            // getValue를 통해 tid의 하부 child인 name, region, latitude, longitude에 대한 데이터를 받아와
            // Trashcan.class를 통해 옮겨담는다.
            @Override
            public void onCancelled(@NonNull DatabaseError error) {
                Log.w("GetTrashcanDatabase","loadPost:onCancelled", error.toException());
            }
        });

        // 쓰레기통 목록 + 경로 데이터(총 거리, 총 소요시간) 전달 - TrashcanList Fragment(채연)
        
    }

}