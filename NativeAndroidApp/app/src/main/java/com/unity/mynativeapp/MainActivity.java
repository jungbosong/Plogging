package com.unity.mynativeapp;

import androidx.annotation.NonNull;
import androidx.appcompat.app.ActionBarDrawerToggle;
import androidx.appcompat.app.AppCompatActivity;
import androidx.appcompat.widget.Toolbar;
import androidx.drawerlayout.widget.DrawerLayout;

import android.content.Intent;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.Toast;

import com.google.android.material.floatingactionbutton.FloatingActionButton;
import com.google.android.material.navigation.NavigationView;
import com.google.android.material.tabs.TabLayout;
import com.unity.mynativeapp.fragment.FragmentRecycle;
import com.unity.mynativeapp.fragment.FragmentJoinModify;
import com.unity.mynativeapp.fragment.FragmentTrashcanList;
import com.unity.mynativeapp.fragment.FragmentTrashcanRegister;

public class MainActivity extends AppCompatActivity {

    NavigationView navigationView;
    DrawerLayout  drawerLayout;
    ActionBarDrawerToggle drawerToggle;

    TabLayout tabLayout;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.drawer_test);

        //Toolbar를 액션 바로 대체하기
        Toolbar  toolbar= findViewById(R.id.toolbar);
        setSupportActionBar(toolbar);

        navigationView=findViewById(R.id.nav);
        navigationView.setItemIconTintList(null);// 사이드 메뉴에 아이콘 색깔을 원래 아이콘 색으로

        drawerLayout=findViewById(R.id.layout_drawer);
        drawerToggle=new ActionBarDrawerToggle(this, drawerLayout,toolbar,R.string.app_name,R.string.app_name);
        drawerLayout.addDrawerListener(drawerToggle);//누를때마다 아이콘이 팽그르 돈다.
        drawerToggle.syncState();// 삼선 메뉴 추가

        //첫번째 화면 보여줌
        getSupportFragmentManager().beginTransaction().replace(R.id.frame_container,new FragmentRecycle()).commit();
        //네비게이션뷰에 아이템선택 리스너 추가
        navigationView.setNavigationItemSelectedListener(new NavigationView.OnNavigationItemSelectedListener() {
            @Override
            public boolean onNavigationItemSelected(@NonNull MenuItem item) {
                switch (item.getItemId()){
                    case R.id.trashcanRegister:
                        Toast.makeText(MainActivity.this, "trasjcanRegister", Toast.LENGTH_SHORT).show();
                        getSupportFragmentManager().beginTransaction().replace(R.id.frame_container,new FragmentTrashcanRegister()).commit();
                        break;
                    case R.id.mytrashcan:
                        Toast.makeText(MainActivity.this, "mytrashcan", Toast.LENGTH_SHORT).show();
                        getSupportFragmentManager().beginTransaction().replace(R.id.frame_container,new FragmentTrashcanList()).commit();
                        break;
                    case R.id.logout:
                        Toast.makeText(MainActivity.this, "logout", Toast.LENGTH_SHORT).show();
                        break;
                    case R.id.joinmodify:
                        Toast.makeText(MainActivity.this, "joinmodify", Toast.LENGTH_SHORT).show();
                        getSupportFragmentManager().beginTransaction().replace(R.id.frame_container,new FragmentJoinModify()).commit();
                        break;
                    case R.id.recycle:
                        Toast.makeText(MainActivity.this, "recycle", Toast.LENGTH_SHORT).show();
                        getSupportFragmentManager().beginTransaction().replace(R.id.frame_container,new FragmentRecycle()).commit();
                        break;
                }

                //Drawer Nav 닫기
                drawerLayout.closeDrawer(navigationView);
                return false;
            }
        });

    }//onCreate()..

    //옵션메뉴 만들어주는 메소드
    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        getMenuInflater().inflate(R.menu.option, menu);
        return super.onCreateOptionsMenu(menu);
    }

    @Override
    public boolean onOptionsItemSelected(@NonNull MenuItem item) {
        //여기에 옵션이 클릭됐을 때 하는 동작을 기재
        switch(item.getItemId()){
            case R.id.menu_search:
                Intent intent = new Intent(getApplicationContext(),TmapActivity.class);
                startActivity(intent);
                break;
        }
        return super.onOptionsItemSelected(item);
    }
}//MainActivity class..