package com.unity.mynativeapp.tmapAPI;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.os.Bundle;
import android.widget.LinearLayout;

import androidx.appcompat.app.AppCompatActivity;

import com.skt.Tmap.TMapMarkerItem;
import com.skt.Tmap.TMapPoint;
import com.skt.Tmap.TMapView;
import com.unity.mynativeapp.R;

public class ShowLocationActivity extends AppCompatActivity {

    String api_key ="l7xx9a6a0f893c67471099e573946a28c3c7";
    TMapView tMapView = null;
    TMapPoint tMapPoint = null;
    TMapMarkerItem markerItem = null;
    double latitude, longitude;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_show_location);

        tMapView = new TMapView(this);
        tMapView.setSKTMapApiKey(api_key);

        // Initial Setting
        tMapView.setZoomLevel(17);
        tMapView.setIconVisibility(true);
        tMapView.setMapType(TMapView.MAPTYPE_STANDARD);
        tMapView.setLanguage(TMapView.LANGUAGE_KOREAN);

        LinearLayout linearLayoutTmap = (LinearLayout)findViewById(R.id.linearLayoutShowTmap);
        linearLayoutTmap.addView(tMapView);
        
        // 전달받은 위치정보 저장
        latitude = getIntent().getDoubleExtra("latitude", 0.0);
        longitude = getIntent().getDoubleExtra("longitude", 0.0);
        tMapPoint = new TMapPoint(latitude, longitude);

        // 지도 중심위치 지정
        tMapView.setCenterPoint(longitude, latitude);

        // 마커 추가
        tMapView.removeAllMarkerItem();
        Bitmap bitmap = BitmapFactory.decodeResource(getResources(), R.drawable.marker_pin);
        markerItem = new TMapMarkerItem();
        markerItem.setIcon(bitmap);                         // bitmap를 Marker icon으로 사용
        markerItem.setPosition(0.5f, 1.0f);         // Marker img의 position
        markerItem.setTMapPoint(tMapPoint);                     // Marker 위치 지정
        tMapView.addMarkerItem("set_marker", markerItem);   // 지도에 마커 추가
    }
}