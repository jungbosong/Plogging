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
import androidx.fragment.app.FragmentManager;
import androidx.fragment.app.FragmentTransaction;

import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.auth.FirebaseUser;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.unity.mynativeapp.BackPressedListener;
import com.unity.mynativeapp.POJO.Trashcan;
import com.unity.mynativeapp.R;
import com.unity.mynativeapp.activity.SetLocationActivity;

import java.util.HashMap;
import java.util.Map;
import java.util.Objects;

public class FragmentTrashcanRegister extends Fragment implements BackPressedListener {

    private DatabaseReference mDatabase = FirebaseDatabase.getInstance().getReference();
    private FirebaseUser firebaseUser;

    public static final int REQUEST_CODE = 100;
    EditText trashcanName;
    Button locationchoose, trashcanRegister;

    String tid, name;
    double latitude = 0.0;
    double longitude = 0.0;

    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {
        View view = inflater.inflate(R.layout.fragment_trashcan_register, container, false);

        // firebaseAuth의 인스턴스를 가져옴
        firebaseUser =  FirebaseAuth.getInstance().getCurrentUser();
        String uid = firebaseUser.getUid();     // 현재 사용자의 uid 가져오기

        // 쓰레기통 이름 EditText
        trashcanName = (EditText) view.findViewById(R.id.trashcanName);

        // 수정 중인 경우 - 내가 등록한 쓰레기통 선택에서 넘어온 경우 (FragmentTrashcanAdapter)
        Bundle bundle = getArguments();
        if(bundle != null){
            tid = bundle.getString("tid");
            name = bundle.getString("name");
            latitude = bundle.getDouble("latitude");
            longitude = bundle.getDouble("longitude");
            trashcanName.setText(name);
        }

        // 쓰레기통 위치 선택 버튼
        locationchoose = view.findViewById(R.id.locationchoose);
        locationchoose.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                name = trashcanName.getText().toString();
                if(!(name == null || name.length() == 0)){
                    // 위치 선택 지도 이동
                    Intent intent = new Intent(getActivity(), SetLocationActivity.class);
                    if(bundle != null) {    // 수정 중인 경우
                        intent.putExtra("latitude", latitude);
                        intent.putExtra("longitude", longitude);
                        intent.putExtra("check", true);
                    }
                    else{
                        intent.putExtra("check", false);
                    }
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
        // DB에 쓰레기통 데이터 추가
        trashcanRegister.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                if(latitude != 0.0){
                    Map<String, Object> childUpdates = new HashMap<>();     // update할 child(경로+값)
                    Map<String, Object> postValues = null;                  // child 값을 저장할 HashMap

                    // 수정 중인 경우
                    if(bundle != null)
                        name = trashcanName.getText().toString();   // name만 변경하는 경우 name 다시 가져오기
                    else // 등록 중인 경우
                        tid = mDatabase.child("Trashcan").push().getKey();      // tid 랜덤 생성, 빈 쓰레기통 목록 추가

                    Trashcan post = new Trashcan(tid, uid, name, latitude, longitude, 0);  // 입력된 trashcan 정보로 객체 생성
                    postValues = post.TrashcantoMap();                      // 객체에 저장된 정보를 HashMap으로 전환

                    childUpdates.put("/Trashcan/" + tid, postValues);       // tid를 key로 하여 경로와 업데이트 할 값을 childUpdates에 저장(업데이트)
                    mDatabase.updateChildren(childUpdates);                 // childUpdates(경로, 업데이트값)를 DB에 전달

                    // 내가만든 쓰레기통 화면 이동
                    FragmentTransaction transaction = getActivity().getSupportFragmentManager().beginTransaction();
                    transaction.replace(R.id.frame_container, new FragmentTrashcanList()).commit();    // fragment 변경
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
            Toast.makeText(getActivity(), "(반환) 핀 위치 : " + latitude + ", \n" + longitude, Toast.LENGTH_SHORT).show();
        }
    }

    // 백버튼 클릭 시
    @Override
    public void onBackPressed() {
        // FragmentRecycle로 이동
        FragmentManager fragmentManager = Objects.requireNonNull(getActivity()).getSupportFragmentManager();
        fragmentManager.beginTransaction().replace(R.id.frame_container,new FragmentRecycle()).commit();
    }
}
