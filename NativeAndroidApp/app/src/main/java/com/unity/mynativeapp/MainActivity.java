package com.unity.mynativeapp;
import androidx.annotation.NonNull;
import androidx.appcompat.app.ActionBar;
import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;

import com.google.android.material.bottomnavigation.BottomNavigationView;
import com.unity.mynativeapp.fragment.FragmentHome;
import com.unity.mynativeapp.fragment.FragmentRecycle;
import com.unity.mynativeapp.fragment.FragmentUserinfo;

public class MainActivity extends AppCompatActivity {
    private static final String TAG = "Main_Activity";
    private BottomNavigationView mBottomNavigationView;
    Menu menu;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_fragment);
        mBottomNavigationView=findViewById(R.id.bottom_navigation);
        menu = mBottomNavigationView.getMenu();
        //첫 화면 띄우기
        getSupportFragmentManager().beginTransaction().add(R.id.frame_container,new FragmentRecycle()).commit();
        //case 함수를 통해 클릭 받을 때마다 화면 변경하기
        mBottomNavigationView.setOnNavigationItemSelectedListener(new BottomNavigationView.OnNavigationItemSelectedListener() {
            @Override
            public boolean onNavigationItemSelected(@NonNull MenuItem item) {
                switch (item.getItemId()){
                    case R.id.nav_home :
                        getSupportFragmentManager().beginTransaction().replace(R.id.frame_container,new FragmentHome()).commit();
                        break;
                    case R.id.nav_recycle:
                        getSupportFragmentManager().beginTransaction().replace(R.id.frame_container,new FragmentRecycle()).commit();
                        break;
                    case R.id.nav_userinfo:
                        getSupportFragmentManager().beginTransaction().replace(R.id.frame_container,new FragmentUserinfo()).commit();
                        break;

                }
                return true;
            }
        });

    }
    public void setActionBarTitle(String title) {
        ActionBar actionBar = getSupportActionBar();
        if (actionBar != null) {
            actionBar.setTitle(title);
        }
    }
}