package com.unity.mynativeapp;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.os.Looper;
import android.os.Handler;
import com.airbnb.lottie.LottieAnimationView;


public class SplishActivity extends Activity {
    LottieAnimationView lottieAnimationView;
    public void onCreate(Bundle savedInstanceState){
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Handler handler = new Handler(Looper.myLooper());
        lottieAnimationView = findViewById(R.id.lottie);
        lottieAnimationView.animate().translationY((3000)).setDuration(1000).setStartDelay(5000);
        handler.postDelayed(new Runnable() {
            @Override
            public void run() {
                Intent intent = new Intent(getBaseContext(), LoginActivity.class);
                startActivity(intent);
                finish();
            }

        },1000);
    }


}
