package com.unity.mynativeapp.fragment;

import android.content.Intent;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;

import com.unity.mynativeapp.R;
import com.unity.mynativeapp.realtimedb.DatabaseActivity;

public class FragmentHome extends Fragment {

    private Button test_btn;

    @Nullable
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {
        View v=inflater.inflate(R.layout.fragment_home,container,false);

        // 버튼 클릭 시 TestDatabaseActivity 액티비티로 이동
        test_btn = (Button) v.findViewById(R.id.databasebtn);
        test_btn.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View view){
                Intent intent = new Intent(getActivity(), DatabaseActivity.class);
                intent.addFlags(Intent.FLAG_ACTIVITY_NO_ANIMATION);
                startActivity(intent);
            }
        });

        return v;
    }
}
