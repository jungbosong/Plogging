package com.unity.mynativeapp.tmapAPI;

import androidx.appcompat.app.AppCompatActivity;

import android.app.Activity;
import android.content.Intent;
import android.graphics.Color;
import android.location.Location;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.LinearLayout;
import android.widget.Toast;

import com.skt.Tmap.TMapGpsManager;
import com.skt.Tmap.TMapPoint;
import com.skt.Tmap.TMapPolyLine;
import com.skt.Tmap.TMapView;

import com.unity.mynativeapp.POJO.pedestrianPath.Feature;
import com.unity.mynativeapp.POJO.pedestrianPath.Route;
import com.unity.mynativeapp.R;
import com.unity.mynativeapp.Unity.ArActivity;
import com.unity.mynativeapp.Unity.UnityViewActivity;
import com.unity3d.player.UnityPlayer;

import java.util.ArrayList;
import java.util.List;
import java.util.Map;

public class TmapNavigationActivity extends AppCompatActivity implements TMapGpsManager.onLocationChangedCallback {
    boolean isUnityLoaded = false;
    TMapView tMapView = null;       // T Map View
    TMapPoint tMapPoint = null;     // T Map Point
    TMapGpsManager tMapGPS = null;  // T Map GPS
    String api_key = "l7xx9a6a0f893c67471099e573946a28c3c7";    // 발급받은 TMAP API Key
    Route route;
    String latitudes, longitudes;

    //protected UnityPlayer mUnityPlayer;
    //Integer pointCount = 0;

    double latitude, longitude;             // 현재위치 위도, 경도 임시저장

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_tmap_navigation);

        tMapView = new TMapView(this);  // T Map View
        tMapView.setSKTMapApiKey(api_key);      // API Key
        Intent intent = getIntent();
        route = (Route)intent.getSerializableExtra("Route");

        // Initial Setting
        tMapView.setZoomLevel(17);
        tMapView.setIconVisibility(true);
        tMapView.setMapType(TMapView.MAPTYPE_STANDARD);
        tMapView.setLanguage(TMapView.LANGUAGE_KOREAN);
        tMapView.setTrackingMode(true);

        LinearLayout tmapPathView = (LinearLayout)findViewById(R.id.tmapPathView);
        tmapPathView.addView(tMapView);

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

        drawPath(route);

       // mUnityPlayer = new UnityPlayer(this);
        /*
        int glesMode = mUnityPlayer.getSettings().getInt("gles_mode", 1);
        boolean tureColor888 = false;
        mUnityPlayer.init(glesMode, tureColor888);
        */
    }

    public String makeLatitudes(String latitudes, double latitude)
    {
        return latitudes + "," + latitude;
    }

    public String makeLongitude(String longitudes, double longitude)
    {
        return longitudes + "," + longitude;
    }

    // 경로 그리는 함수
    public void drawPath(Route route)
    {
        ArrayList<TMapPoint> alTMapPoint = new ArrayList<TMapPoint>();

        // 경로 데이터 얻어오기
        //List<Map<String, Object>> features = route.getTypeFeatures("Point");
        List<Feature> features = route.getFeatures();
        int featureCount = features.size();
        for(int i = 0; i < featureCount; i++)
        {
            double latitude, longitude;
            ArrayList coordinates;

            //Log.e("Load Route Test","featureGeometryType: " + features.get(i).getGeometry().getType() + "\n");

            if(features.get(i).getGeometry().getType().equals("Point"))
            {
                //pointCount++;

                coordinates = features.get(i).getGeometry().getCoordinates();
                longitude = Double.parseDouble(coordinates.get(0).toString());
                latitude = Double.parseDouble(coordinates.get(1).toString());

                latitudes = makeLatitudes(latitudes, latitude);
                longitudes = makeLongitude(longitudes, longitude);

                Log.e("Load Route Test", "Point Count: " + features.get(i).getProperties().getPointIndex() + "\n");
                Log.e("Load Route Test","coordinates: " + coordinates.get(0).toString() + "\t" + coordinates.get(1).toString() + "\n");
                Log.e("Load Route Test","latitude: " + latitude + "\t" + "longitude: " + longitude + "\n");
                alTMapPoint.add( new TMapPoint(latitude, longitude));
            }
        }

        TMapPolyLine tMapPolyLine = new TMapPolyLine();
        tMapPolyLine.setLineColor(Color.RED);
        tMapPolyLine.setLineWidth(5);
        Log.e("Load Route Test", "alTMapPoint.size: " + alTMapPoint.size() + "\n");
        for(int i=0; i<alTMapPoint.size(); i++) {
            tMapPolyLine.addLinePoint( alTMapPoint.get(i) );
            Log.e("Load Route Test","alTMapPoint: " + alTMapPoint.get(i) + "\n");
       }
        tMapView.addTMapPolyLine("Line1", tMapPolyLine);

    }

    public void clickLoadUnity(View v) {
        isUnityLoaded = true;

        //mUnityPlayer.UnitySendMessage("RouteManager", "PrintPointCount", pointCount.toString());

        Intent intent = new Intent(this, UnityViewActivity.class);
        intent.putExtra("Route", route);
        intent.putExtra("Latitudes", latitudes);
        intent.putExtra("Longitudes", longitudes);

        intent.setFlags(Intent.FLAG_ACTIVITY_REORDER_TO_FRONT);
        startActivityForResult(intent, 1);
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (requestCode == 1) isUnityLoaded = false;
    }
    public void unloadUnity(Boolean doShowToast) {
        if(isUnityLoaded) {
            Intent intent = new Intent(this, UnityViewActivity.class);
            intent.setFlags(Intent.FLAG_ACTIVITY_REORDER_TO_FRONT);
            intent.putExtra("doQuit", true);
            startActivity(intent);
            isUnityLoaded = false;
        }
        else if(doShowToast) showToast("Show Unity First");
    }

    public void btnUnloadUnity(View v) {
        unloadUnity(true);
    }

    public void showToast(String message) {
        CharSequence text = message;
        int duration = Toast.LENGTH_SHORT;
        Toast toast = Toast.makeText(getApplicationContext(), text, duration);
        toast.show();
    }

    @Override
    public void onBackPressed() {
        super.onBackPressed();
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