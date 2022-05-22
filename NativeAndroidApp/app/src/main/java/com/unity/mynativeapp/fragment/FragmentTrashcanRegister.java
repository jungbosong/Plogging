package com.unity.mynativeapp.fragment;

import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.EditText;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;

import com.unity.mynativeapp.R;

public class FragmentTrashcanRegister extends Fragment {
    EditText trashcanName;
    Button locationchoose, trashcanRegister;
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {
        View view = inflater.inflate(R.layout.fragment_trashcan_register, container, false);

        //쓰레기통 위치 선택
        locationchoose = view.findViewById(R.id.locationchoose);
        locationchoose.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {

            }
        });
        // 쓰레기통 등록 버튼
        trashcanRegister = view.findViewById(R.id.trashcanRegister);
        trashcanRegister.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {

            }
        });
        return view;
    }
}
