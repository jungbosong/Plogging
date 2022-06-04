package com.unity.mynativeapp.Unity;

import android.content.Intent;
import android.os.Bundle;

import com.company.product.OverrideArActivity;
import com.unity.mynativeapp.POJO.pedestrianPath.Feature;
import com.unity.mynativeapp.POJO.pedestrianPath.Route;
import com.unity.mynativeapp.R;

import java.util.List;

public class ArActivity extends OverrideArActivity {

    Route route;
    Integer pointCount = 0;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        Intent intent = getIntent();
        handleIntent(intent);

        route = (Route)intent.getSerializableExtra("Route");

        List<Feature> features = route.getFeatures();
        int featureCount = features.size();

        for(int i = 0; i < featureCount; i++)
        {
            if(features.get(i).getGeometry().getType().equals("Point"))
            {
                pointCount++;
            }
        }
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
    protected Integer GetPointCount()
    {
        return pointCount;
    }
}