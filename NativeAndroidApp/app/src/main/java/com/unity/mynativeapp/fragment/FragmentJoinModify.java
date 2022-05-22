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

public class FragmentJoinModify extends Fragment {
    EditText userpw,userPwChecks,userNickName,userEmail;
    Button user_modify;
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {
        View view = inflater.inflate(R.layout.fragment_join_modify, container, false);
        
        //회원정보 수정 버튼
        user_modify = view.findViewById(R.id.user_modify);
        user_modify.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                
            }
        });
        return view;
    }
}


