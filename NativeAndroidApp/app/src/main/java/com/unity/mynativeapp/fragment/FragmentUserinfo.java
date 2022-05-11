package com.unity.mynativeapp.fragment;

import android.content.Intent;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;

import com.unity.mynativeapp.JoinModifyActivity;
import com.unity.mynativeapp.MainActivity;
import com.unity.mynativeapp.R;
import com.unity.mynativeapp.TrashcanregisterActivity;
import com.unity.mynativeapp.Unity.UnityActivity;

public class FragmentUserinfo extends Fragment {
    @Nullable
    TextView userinfoNickName,userinfoEmail,userinfoLogout;
    TextView userregister,usertrashcan,userinforeset;
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {
        View view =inflater.inflate(R.layout.fragment_userinfo,container,false);
        //로그아웃
        userinfoLogout = view.findViewById(R.id.userinfoLogout);
        userinfoLogout.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                Intent intent = new Intent(getActivity(), MainActivity.class);
                startActivity(intent);
            }
        });
        //쓰레기통 등록
        userregister = view.findViewById(R.id.userregister);
        userregister.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                Intent intent = new Intent(getActivity(), TrashcanregisterActivity.class);
                startActivity(intent);
            }
        });


        //회원정보 수정
        userinforeset = view.findViewById(R.id.userinforeset);
        userinforeset.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                Intent intent = new Intent(getActivity(), JoinModifyActivity.class);
                startActivity(intent);
            }
        });
        return view;

    }
}
