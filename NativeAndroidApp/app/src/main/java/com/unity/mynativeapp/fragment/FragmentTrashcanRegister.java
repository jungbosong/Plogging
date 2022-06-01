package com.unity.mynativeapp.fragment;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentTransaction;

import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.unity.mynativeapp.POJO.Trashcan;
import com.unity.mynativeapp.R;
import com.unity.mynativeapp.tmapAPI.SetLocationActivity;

import java.util.HashMap;
import java.util.Map;
import java.util.Random;

public class FragmentTrashcanRegister extends Fragment {

    private DatabaseReference mDatabase = FirebaseDatabase.getInstance().getReference();

    public static final int REQUEST_CODE = 100;
    EditText trashcanName;
    Button locationchoose, trashcanRegister;

    Random random = new Random();
    String tid, name;
    double latitude = 0.0;
    double longitude = 0.0;

    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {
        View view = inflater.inflate(R.layout.fragment_trashcan_register, container, false);
        
        // 쓰레기통 이름 EditText
        trashcanName = (EditText) view.findViewById(R.id.trashcanName);

        // 쓰레기통 위치 선택 버튼
        locationchoose = view.findViewById(R.id.locationchoose);
        locationchoose.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                name = trashcanName.getText().toString();
                if(!(name == null || name.length() == 0)){
                    // 위치 선택 지도 이동
                    Intent intent = new Intent(getActivity(), SetLocationActivity.class);
                    intent.putExtra("name", name);
                    intent.addFlags(Intent.FLAG_ACTIVITY_NO_ANIMATION);
                    startActivityForResult(intent, REQUEST_CODE);
                }
                else{
                    Toast.makeText(getActivity(), "쓰레기통 이름을 입력하세요", Toast.LENGTH_SHORT).show();
                }
            }
        });

        // 쓰레기통 등록 버튼
        trashcanRegister = view.findViewById(R.id.trashcanRegister);
        trashcanRegister.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                if(latitude != 0.0){
                    String test_uid = "test_uid";  // 로그인 구현 전 uid 임시생성!!!

                    // DB에 쓰레기통 데이터 추가
                    Map<String, Object> childUpdates = new HashMap<>();     // update할 child(경로+값)
                    Map<String, Object> postValues = null;                  // child 값을 저장할 HashMap

                    tid = mDatabase.child("Trashcan").push().getKey();      // tid 랜덤 생성, 빈 쓰레기통 목록 추가
                    Trashcan post = new Trashcan(tid, test_uid, name, latitude, longitude, 0);  // 입력된 trashcan 정보로 객체 생성
                    postValues = post.TrashcantoMap();                      // 객체에 저장된 정보를 HashMap으로 전환

                    childUpdates.put("/Trashcan/" + tid, postValues);       // tid를 key로 하여 경로와 업데이트 할 값을 childUpdates에 저장(업데이트)
                    mDatabase.updateChildren(childUpdates);                 // childUpdates(경로, 업데이트값)를 DB에 전달

                    // 일단 홈 화면 이동 - 내가만든 쓰레기통 완성 후 여기로 이동
                    FragmentTransaction transaction = getActivity().getSupportFragmentManager().beginTransaction();
                    FragmentRecycle fragmentRecycle = new FragmentRecycle();
                    transaction.replace(R.id.frame_container, fragmentRecycle);    // fragment 변경
                    transaction.commit();   // 저장
                }
                else {
                    Toast.makeText(getActivity(), "쓰레기통 위치를 선택하세요", Toast.LENGTH_SHORT).show();
                }
            }
        });
        return view;
    }

    @Override
    public void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);

        if (requestCode == REQUEST_CODE) {
            if (resultCode != Activity.RESULT_OK) {
                return;
            }
            // 쓰레기통 위치, 이름 반환받기
            name = data.getExtras().getString("name");
            latitude = data.getExtras().getDouble("latitude");
            longitude = data.getExtras().getDouble("longitude");
            Toast.makeText(getActivity(), "(반환) 핀 위치 : " + latitude + ", " + longitude, Toast.LENGTH_SHORT).show();
        }
    }
}
