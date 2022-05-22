package com.unity.mynativeapp.fragment;

import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentActivity;

import com.google.android.material.floatingactionbutton.FloatingActionButton;
import com.unity.mynativeapp.MainActivity;
import com.unity.mynativeapp.R;
import com.unity.mynativeapp.TmapActivity;
import com.unity.mynativeapp.realtimedb.DatabaseActivity;
import com.unity.mynativeapp.tmapAPI.CallRetrofitActivity;

public class FragmentHome extends Fragment {

    private Button moveTmap_btn;
    private Button moveDB_btn;
    private Button moveRetrofit_btn;
    private FloatingActionButton locationHere;

    @Nullable
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {
        View v=inflater.inflate(R.layout.fragment_home,container,false);
        // 상단 버튼 클릭 시 TestActivity로 이동
        moveRetrofit_btn = (Button) v.findViewById(R.id.retrofit_btn);
        moveRetrofit_btn.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View view){
                Intent intent = new Intent(getActivity(), CallRetrofitActivity.class);
                intent.addFlags(Intent.FLAG_ACTIVITY_NO_ANIMATION);
                startActivity(intent);
            }
        });


        // 중간 버튼 클릭 시 TmapActivity로 이동
        moveTmap_btn = (Button) v.findViewById(R.id.tmap_btn);
        moveTmap_btn.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View view){
                Intent intent = new Intent(getActivity(), TmapActivity.class);
                intent.addFlags(Intent.FLAG_ACTIVITY_NO_ANIMATION);
                startActivity(intent);
            }
        });


        // 아래 버튼 클릭 시 DatabaseActivity로 이동
        moveDB_btn = (Button) v.findViewById(R.id.database_btn);
        moveDB_btn.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View view){
                Intent intent = new Intent(getActivity(), DatabaseActivity.class);
                intent.addFlags(Intent.FLAG_ACTIVITY_NO_ANIMATION);
                startActivity(intent);
            }
        });

        locationHere = v.findViewById(R.id.locationHere);
        locationHere.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View view){

            }
        });

        return v;
    }

}
