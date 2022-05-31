package com.unity.mynativeapp.realtimedb;

import androidx.annotation.NonNull;

import android.util.Log;
import android.view.View;
import android.widget.Toast;

import com.google.firebase.database.DataSnapshot;
import com.google.firebase.database.DatabaseError;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.google.firebase.database.Query;
import com.google.firebase.database.ValueEventListener;
import com.unity.mynativeapp.POJO.Trashcan;
import com.unity.mynativeapp.POJO.User;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class DatabaseInfo {

    private DatabaseReference mPostReference;   // firebase 실시간 DB의 데이터 사용을 위한 객체
    String sort;        // 데이터 정렬 기준 child


    // <summery>
    // Firebase DB에서 User 데이터 저장/업데이트/삭제
    // <param> boolean add (false:삭제, true:저장/업데이트), user 정보
    // </summery>
    public void SetUserDatabase(boolean add, String uid, String pw, String nickname, String email){
        mPostReference = FirebaseDatabase.getInstance().getReference();     // Database 인스턴스

        // update할 child(경로+값)와 해당 child의 값을 저장할 HashMap
        Map<String, Object> childUpdates = new HashMap<>();
        Map<String, Object> postValues = null;

        if (add){
            User post = new User(uid, pw, nickname, email);     // 입력된 user 정보로 객체 생성
            postValues = post.UsertoMap();                      // 객체에 저장된 정보를 HashMap으로 전환
        }
        childUpdates.put("/User/" + uid, postValues);   // uid를 key로 하여 경로와 업데이트 할 값을 childUpdates에 저장
        mPostReference.updateChildren(childUpdates);    // childUpdates(경로, 업데이트값)를 DB에 전달

        // add의 값이 false이면 postValues가 null을 가진다.
        // 따라서 현재 uid key와 연결된 value 또한 null이 되므로 기존 데이터를 삭제하게 된다.
        // add의 값이 true이면 postValues에 user 정보가 담긴다.
        // 여기서 동일한 uid가 존재하는 경우는 업데이트가 되며, uid가 없는 경우 새로운 데이터가 저장된다.
    }



    // <summery>
    // Firebase DB에서 Trashcan 데이터 저장/업데이트/삭제
    // <param> boolean add (false:삭제, true:저장/업데이트), Trashcan 정보
    // </summery>
    public void SetTrashcanDatabase(boolean add, String tid, String creator, String name, double latitude, double longitude, int report){
        mPostReference = FirebaseDatabase.getInstance().getReference();

        Map<String, Object> childUpdates = new HashMap<>();     // update할 child(경로+값)
        Map<String, Object> postValues = null;                  // child 값을 저장할 HashMap
        if (add){
            //저장일 경우만 tid 생성
            //tid = mPostReference.child("Trashcan").push().getKey(); // tid 랜덤 생성, 빈 쓰레기통 목록 추가
            Trashcan post = new Trashcan(tid, creator, name, latitude, longitude, report);  // 입력된 trashcan 정보로 객체 생성
            postValues = post.TrashcantoMap();                  // 객체에 저장된 정보를 HashMap으로 전환
        }
        childUpdates.put("/Trashcan/" + tid, postValues);       // tid를 key로 하여 경로와 업데이트 할 값을 childUpdates에 저장(업데이트)
        mPostReference.updateChildren(childUpdates);            // childUpdates(경로, 업데이트값)를 DB에 전달
    }

    // <summery>
    // Firebase DB에서 모든 User 데이터 검색
    // </summery>
    public void GetUserDatabase(){
        sort = "uid";
        ValueEventListener postListener = new ValueEventListener() {
            @Override
            public void onDataChange(@NonNull DataSnapshot snapshot) {
                Log.e("GetUserDatabase", "key: " + snapshot.getChildrenCount());    //snapshot의 직계자식 수 반환
                for (DataSnapshot postSnapshot: snapshot.getChildren()) {   // child 개수만큼 반복
                    String key = postSnapshot.getKey();
                    User get = postSnapshot.getValue(User.class);
                    String[] user_info = {get.getUid(), get.getPw(), get.getNickname(), get.getEmail()};
                    Log.d("GetUserDatabase", "key: " + key);
                    Log.d("GetUserDatabase", "info: " + user_info[0] +", "+ user_info[1] +", "+ user_info[2] +", "+ user_info[3]);
                }
                // getKey() API를 통해 해당 children의 key인 uid를 가져오고
                // getValue를 통해 uid의 하부 child인 uid, pw, nickname, email에 대한 데이터를 받아와
                // User.class를 통해 옮겨담는다.
            }

            @Override
            public void onCancelled(@NonNull DatabaseError error) {
                Log.w("GetUserDatabase","loadPost:onCancelled", error.toException());
            }
        };
        // 지정된 하위 키(sort)에 따라 가져온 데이터를 정렬한다. 여기서는 지역 uid 순서로.
        Query sortbyAge = FirebaseDatabase.getInstance().getReference().child("User").orderByChild(sort);
        // addListenerForSingleValueEvent : 이벤트를 한 번만 받도록 리스너를 등록하는 API.
        // 콜백을 삭제하지 않는 한 지정한 위치의 하부에 존재하는 값들이 변경될 때 마다 리스너 호출
        sortbyAge.addListenerForSingleValueEvent(postListener);
    }



    // <summery>
    // Firebase DB에서 모든 Trashcan 데이터 검색/정렬
    // </summery>
    public void GetTrashcanDatabase(){
        sort = "region";

        // 지정한 위치의 데이터를 포함하는 DataSnapshot 수신한다.
        ValueEventListener postListener = new ValueEventListener() {
            @Override
            public void onDataChange(@NonNull DataSnapshot snapshot) {
                Log.e("GetTrashcanDatabase", "key: " + snapshot.getChildrenCount());    //snapshot의 직계자식 수 반환(총 쓰레기통 개수)
                for (DataSnapshot postSnapshot: snapshot.getChildren()) {   // child 개수만큼 반복
                    String key = postSnapshot.getKey();
                    Trashcan get = postSnapshot.getValue(Trashcan.class);
                    String[] t_info = {get.getName(), String.valueOf(get.getLatitude()), String.valueOf(get.getLongitude()), String.valueOf(get.getReport())};
                    Log.d("GetTrashcanDatabase", "key: " + key);
                    Log.d("GetTrashcanDatabase", "info: " + t_info[0] +", "+ t_info[1] +", "+ t_info[2] +", "+ t_info[3] +", "+ t_info[4]);
                }
                // getKey() API를 통해 해당 children의 key인 tid를 가져오고
                // getValue를 통해 tid의 하부 child의 데이터를 받아와
                // Trashcan.class를 통해 옮겨담는다.
            }

            @Override
            public void onCancelled(@NonNull DatabaseError error) {
                Log.w("GetTrashcanDatabase","loadPost:onCancelled", error.toException());
            }
        };

        // 지정된 하위 키(sort)에 따라 가져온 데이터를 정렬한다. 여기서는 지역 이름순서로.
        Query sortbyAge = FirebaseDatabase.getInstance().getReference().child("Trashcan").orderByChild(sort);
        // addListenerForSingleValueEvent : 이벤트를 한 번만 받도록 리스너를 등록하는 API.
        sortbyAge.addListenerForSingleValueEvent(postListener);
    }

}
