package com.unity.mynativeapp.activity;

import android.content.Intent;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.Toast;

import androidx.annotation.NonNull;
import androidx.appcompat.app.ActionBarDrawerToggle;
import androidx.appcompat.app.AppCompatActivity;
import androidx.appcompat.widget.Toolbar;
import androidx.drawerlayout.widget.DrawerLayout;
import androidx.fragment.app.Fragment;

import com.google.android.material.navigation.NavigationView;
import com.google.android.material.tabs.TabLayout;
import com.google.firebase.auth.FirebaseAuth;
import com.unity.mynativeapp.BackPressedListener;
import com.unity.mynativeapp.R;
import com.unity.mynativeapp.fragment.FragmentJoinModify;
import com.unity.mynativeapp.fragment.FragmentRecycle;
import com.unity.mynativeapp.fragment.FragmentTrashcanList;
import com.unity.mynativeapp.fragment.FragmentTrashcanRegister;

import java.util.List;

public class MainActivity extends AppCompatActivity {

    private long lastTimeBackPressed;

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
                        getSupportFragmentManager().beginTransaction().replace(R.id.frame_container,new FragmentTrashcanRegister()).commit();
                        break;
                    case R.id.mytrashcan:
                        getSupportFragmentManager().beginTransaction().replace(R.id.frame_container,new FragmentTrashcanList()).commit();
                        break;
                    case R.id.logout:
                        // 파이어베이스 계정 로그아웃
                        FirebaseAuth.getInstance().signOut();
                        // 로그인 화면으로 이동
                        Intent intent = new Intent(getApplicationContext(), LoginActivity.class);
                        startActivity(intent);
                        break;
                    case R.id.joinmodify:
                        getSupportFragmentManager().beginTransaction().replace(R.id.frame_container,new FragmentJoinModify()).commit();
                        break;
                    case R.id.recycle:
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
                Intent intent = new Intent(getApplicationContext(), TmapActivity.class);
                startActivity(intent);
                break;
        }
        return super.onOptionsItemSelected(item);
    }

    // 백버튼 클릭 이벤트 함수 생성
    // 프래그먼트에서 백버튼 클릭 시 이전 프래그먼트 자동 이동 불가능. 인터페이스 사용 필요
    @Override
    public void onBackPressed() {

        //프래그먼트 BackPressedListener사용
        List<Fragment> fragmentList = getSupportFragmentManager().getFragments();
        for(Fragment fragment : fragmentList){
            if(fragment instanceof BackPressedListener){
                ((BackPressedListener)fragment).onBackPressed();
                return;
            }
        }

        //두 번 클릭시 어플 종료
        if(System.currentTimeMillis() - lastTimeBackPressed < 1500){
            moveTaskToBack(true);   // 현재 테스크를 백그라운드로 즉시 이동
            finish();   // 현재 액티비티 종료
            android.os.Process.killProcess(android.os.Process.myPid()); // 프로세스 강제 종료
        }

        lastTimeBackPressed = System.currentTimeMillis();
        Toast.makeText(this,"'뒤로' 버튼을 한 번 더 누르면 종료됩니다.",Toast.LENGTH_SHORT).show();
    }


}//MainActivity class..