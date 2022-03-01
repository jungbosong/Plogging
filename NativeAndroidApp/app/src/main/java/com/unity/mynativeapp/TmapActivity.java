package com.unity.mynativeapp;

import androidx.appcompat.app.AppCompatActivity;

import android.Manifest;
import android.location.Location;
import android.os.Build;
import android.os.Bundle;

import android.widget.LinearLayout;
import android.widget.Toast;

import com.skt.Tmap.TMapView;
import com.skt.Tmap.TMapGpsManager;


public class TmapActivity extends AppCompatActivity implements TMapGpsManager.onLocationChangedCallback {

    // 발급받은 API Key
    String API_Key = "l7xx9a6a0f893c67471099e573946a28c3c7";

    // 위도, 경도 임시저장
    double longitude, latitude;

    // T Map View
    TMapView tMapView = null;

    // T Map GPS
    TMapGpsManager tMapGPS = null;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_tmap);

        // T Map View
        tMapView = new TMapView(this);

        // API Key
        tMapView.setSKTMapApiKey(API_Key);

        // Initial Setting
        tMapView.setZoomLevel(17);
        tMapView.setIconVisibility(true);
        tMapView.setMapType(TMapView.MAPTYPE_STANDARD);
        tMapView.setLanguage(TMapView.LANGUAGE_KOREAN);


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
        tMapGPS.setProvider(tMapGPS.NETWORK_PROVIDER);
        //tMapGPS.setProvider(tMapGPS.GPS_PROVIDER);

        tMapGPS.OpenGps();
    }

    @Override
    public void onLocationChange(Location location) {
        longitude = location.getLongitude();
        latitude = location.getLatitude();

        tMapView.setLocationPoint(longitude, latitude);
        tMapView.setCenterPoint(longitude, latitude);

        // 현재위치 확인 test
        Toast.makeText(getApplicationContext(), "longitude: "+longitude+"\nlatitude: "+latitude , Toast.LENGTH_LONG).show();
    }
}