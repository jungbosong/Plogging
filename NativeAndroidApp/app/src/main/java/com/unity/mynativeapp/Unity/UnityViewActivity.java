package com.unity.mynativeapp.Unity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.FrameLayout;

import com.company.product.OverrideArActivity;
import com.company.product.OverrideUnityActivity;
import com.unity.mynativeapp.POJO.pedestrianPath.Feature;
import com.unity.mynativeapp.POJO.pedestrianPath.Route;
import com.unity3d.player.UnityPlayer;

import java.util.List;

public class UnityViewActivity extends OverrideUnityActivity {
    Route route;
    Integer pointCount = 0;
    String latitudes, longitudes;
    //protected UnityPlayer mUnityPlayer;

    // Setup activity layout
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        addControlsToUnityFrame();
        Intent intent = getIntent();
        handleIntent(intent);
        route = (Route)intent.getSerializableExtra("Route");
        latitudes = (String)intent.getSerializableExtra("Latitudes");
        longitudes = (String)intent.getSerializableExtra("Longitudes");

        List<Feature> features = route.getFeatures();
        int featureCount = features.size();

        for(int i = 0; i < featureCount; i++)
        {
            if(features.get(i).getGeometry().getType().equals("Point"))
            {
                pointCount++;
            }
        }

       // mUnityPlayer = new UnityPlayer(this);

    }


    @Override
    protected void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        handleIntent(intent);
        setIntent(intent);
    }

    void handleIntent(Intent intent) {
        if(intent == null || intent.getExtras() == null) return;

        if(intent.getExtras().containsKey("doQuit"))
            if(mUnityPlayer != null) {
                finish();
            }
    }

    @Override
    protected void showMainActivity(String setToColor) {
        Intent intent = new Intent(this, UnityActivity.class);
        intent.setFlags(Intent.FLAG_ACTIVITY_REORDER_TO_FRONT | Intent.FLAG_ACTIVITY_SINGLE_TOP);
        intent.putExtra("setColor", setToColor);
        startActivity(intent);
    }

    @Override
    protected String getPointCount()
    {
        String pointCountString = pointCount.toString();
        //mUnityPlayer.UnitySendMessage("RouteManager", "PrintPointCount", pointCountString);
        return pointCountString;
    }

    @Override
    protected String getLatitudes()
    {
        return latitudes;
    }

    @Override
    protected String getLongitudes()
    {
        return longitudes;
    }

    @Override public void onUnityPlayerUnloaded() {
        showMainActivity("");
    }

    public void addControlsToUnityFrame() {
        FrameLayout layout = mUnityPlayer;

        /*{
            Button myButton = new Button(this);
            myButton.setText("Show Main");
            myButton.setX(10);
            myButton.setY(500);

            myButton.setOnClickListener(new View.OnClickListener() {
                public void onClick(View v) {
                    showMainActivity("");
                }
            });
            layout.addView(myButton, 300, 200);
        }

        {
            Button myButton = new Button(this);
            myButton.setText("Send Msg");
            myButton.setX(320);
            myButton.setY(500);
            myButton.setOnClickListener( new View.OnClickListener() {
                public void onClick(View v) {
                    mUnityPlayer.UnitySendMessage("Cube", "ChangeColor", "yellow");
                }
            });
            layout.addView(myButton, 300, 200);
        }

        {
            Button myButton = new Button(this);
            myButton.setText("Unload");
            myButton.setX(630);
            myButton.setY(500);

            myButton.setOnClickListener(new View.OnClickListener() {
                public void onClick(View v) {
                    mUnityPlayer.unload();
                }
            });
            layout.addView(myButton, 300, 200);
        }*/

        {
            Button myButton = new Button(this);
            myButton.setText("Finish");
            myButton.setX(630);
            myButton.setY(800);

            myButton.setOnClickListener(new View.OnClickListener() {
                public void onClick(View v) {
                    finish();
                }
            });
            layout.addView(myButton, 300, 200);
        }
    }

}
