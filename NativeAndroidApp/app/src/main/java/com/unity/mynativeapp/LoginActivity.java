package com.unity.mynativeapp;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.os.Looper;
import android.os.Handler;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

import com.airbnb.lottie.LottieAnimationView;


public class LoginActivity extends AppCompatActivity {
    EditText userIdLogin,userPwLogin;
    Button LoginButton;
    TextView userjoin;
    public void onCreate(Bundle savedInstanceState){
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_login);
        userIdLogin = findViewById(R.id.userIdLogin);
        userPwLogin = findViewById(R.id.userPwLogin);
        LoginButton = findViewById(R.id.LoginButton);
        userjoin = findViewById(R.id.userjoin);
        LoginButton.setOnClickListener(new View.OnClickListener(){

            @Override
            public void onClick(View v) {
                    Intent intent = new Intent(getApplicationContext(),MainActivity.class);
                    startActivity(intent);
            }
        });
        userjoin.setOnClickListener(new View.OnClickListener(){

            @Override
            public void onClick(View v) {
                Intent intent = new Intent(getApplicationContext(),JoinActivity.class);
                startActivity(intent);
            }
        });
    }


}
