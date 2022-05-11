package com.unity.mynativeapp;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

import androidx.appcompat.app.AppCompatActivity;

import com.unity.mynativeapp.fragment.FragmentUserinfo;

public class TrashcanregisterActivity extends AppCompatActivity {
    EditText trashcanName;
    Button trashcanRegister,locationchoose;
    public void onCreate(Bundle savedInstanceState){
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_trashcan_register);

        trashcanRegister = findViewById(R.id.trashcanRegister);
        trashcanRegister.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(getApplicationContext(), FragmentUserinfo.class);
                startActivity(intent);
            }
        });
    }


}