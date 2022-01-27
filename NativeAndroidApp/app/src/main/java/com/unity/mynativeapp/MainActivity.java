package com.unity.mynativeapp;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.os.Looper;
import android.os.Handler;
import com.airbnb.lottie.LottieAnimationView;

public class MainActivity extends Activity {
    LottieAnimationView lottieAnimationView;
    public void onCreate(Bundle savedInstanceState){
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        lottieAnimationView - findViewById(R.id.lottie);
        Handler handler = new Handler(Looper.myLooper());

        handler.postDelayed(new Runnable() {
            @Override
            public void run() {
                Intent intent = new Intent(getBaseContext(),UnityActivity.class);
                startActivity(intent);
                finish();
            }

        },4400);
    }


}
