package com.unity.mynativeapp.realtimedb;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.ListView;

import com.google.firebase.database.DataSnapshot;
import com.google.firebase.database.DatabaseError;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.google.firebase.database.Query;
import com.google.firebase.database.ValueEventListener;
import com.unity.mynativeapp.R;

import java.util.HashMap;
import java.util.Map;

//Firebase DB 데이터 입출력 파일
public class DatabaseActivity extends AppCompatActivity {

    private DatabaseReference mPostReference;   // firebase 실시간 DB의 데이터 사용을 위한 객체
    ArrayAdapter<String> arrayAdapter;

    String uid;         // user id
    String pw;          // user pw
    String nickname;    // user nickname
    String email;       // user email address
    String tid;         // trashcan id
    String name;        // trashcan 이름
    String region;      // trashcan 지역
    Double latitude;    // trashcan location : 위도
    Double longitude;   // trashcan location : 경도
    String sort;        // 데이터 정렬 기준 child


    // Firebase DB에서 User 데이터 저장/업데이트/삭제
    // 매개변수 add (false:삭제, true:저장/업데이트)
    public void PostUserDatabase(boolean add){
        mPostReference = FirebaseDatabase.getInstance().getReference();     // Database 인스턴스

        // update할 child(경로+값)와 해당 child의 값을 저장할 HashMap
        Map<String, Object> childUpdates = new HashMap<>();
        Map<String, Object> postValues = null;

        if (add){
            UserInfo post = new UserInfo(uid, pw, nickname, email);     // 입력된 user 정보로 객체 생성
            postValues = post.UsertoMap();                              // 객체에 저장된 정보를 HashMap으로 전환
        }
        childUpdates.put("/User/" + uid, postValues);   // uid를 key로 하여 경로와 업데이트 할 값을 childUpdates에 저장
        mPostReference.updateChildren(childUpdates);    // childUpdates(경로, 업데이트값)를 DB에 전달

        // add의 값이 false이면 postValues가 null을 가진다.
        // 따라서 현재 uid key와 연결된 value 또한 null이 되므로 기존 데이터를 삭제하게 된다.
        // add의 값이 true이면 postValues에 user 정보가 담긴다.
        // 여기서 동일한 uid가 존재하는 경우는 업데이트가 되며, uid가 없는 경우 새로운 데이터가 저장된다.
    }


    // Firebase DB에서 Trashcan 데이터 저장/업데이트/삭제
    // 부가 설명은 PostUserDatabase 함수와 동일
    public void PostTrashcanDatabase(boolean add){
        mPostReference = FirebaseDatabase.getInstance().getReference();

        Map<String, Object> childUpdates = new HashMap<>();
        Map<String, Object> postValues = null;

        if (add){
            TrashcanInfo post = new TrashcanInfo(tid, name, region, latitude, longitude);
            postValues = post.TrashcantoMap();
        }

        childUpdates.put("/Trashcan/" + tid, postValues);
        mPostReference.updateChildren(childUpdates);
    }


    // Firebase DB에서 User 데이터 검색
    public void GetUserDatabase(){
        sort = "uid";
        ValueEventListener postListener = new ValueEventListener() {
            @Override
            public void onDataChange(@NonNull DataSnapshot snapshot) {
                Log.e("GetUserDatabase", "key: " + snapshot.getChildrenCount());    //snapshot의 직계자식 수 반환
                for (DataSnapshot postSnapshot: snapshot.getChildren()) {   // child 개수만큼 반복
                    String key = postSnapshot.getKey();
                    UserInfo get = postSnapshot.getValue(UserInfo.class);
                    String[] user_info = {get.uid, get.pw, get.nickname, get.email};
                    Log.d("GetUserDatabase", "key: " + key);
                    Log.d("GetUserDatabase", "info: " + user_info[0] +", "+ user_info[1] +", "+ user_info[2] +", "+ user_info[3]);
                }
                // getKey() API를 통해 해당 children의 key인 uid를 가져오고
                // getValue를 통해 uid의 하부 child인 uid, pw, nickname, email에 대한 데이터를 받아와
                // UserInfo.class를 통해 옮겨담는다.
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


    // Firebase DB에서 Trashcan 데이터 검색/정렬
    public void GetTrashcanDatabase(){
        sort = "region";

        // 지정한 위치의 데이터를 포함하는 DataSnapshot 수신한다.
        ValueEventListener postListener = new ValueEventListener() {
            @Override
            public void onDataChange(@NonNull DataSnapshot snapshot) {
                Log.e("GetTrashcanDatabase", "key: " + snapshot.getChildrenCount());    //snapshot의 직계자식 수 반환(총 쓰레기통 개수)
                for (DataSnapshot postSnapshot: snapshot.getChildren()) {   // child 개수만큼 반복
                    String key = postSnapshot.getKey();
                    TrashcanInfo get = postSnapshot.getValue(TrashcanInfo.class);
                    String[] t_info = {get.name, get.region, String.valueOf(get.latitude), String.valueOf(get.longitude)};
                    Log.d("GetTrashcanDatabase", "key: " + key);
                    Log.d("GetTrashcanDatabase", "info: " + t_info[0] +", "+ t_info[1] +", "+ t_info[2] +", "+ t_info[3]);
                }
                // getKey() API를 통해 해당 children의 key인 tid를 가져오고
                // getValue를 통해 tid의 하부 child인 name, region, latitude, longitude에 대한 데이터를 받아와
                // TrashcanInfo.class를 통해 옮겨담는다.
            }

            @Override
            public void onCancelled(@NonNull DatabaseError error) {
                Log.w("GetTrashcanDatabase","loadPost:onCancelled", error.toException());
            }
        };

        // 지정된 하위 키(sort)에 따라 가져온 데이터를 정렬한다. 여기서는 지역 이름순서로.
        Query sortbyAge = FirebaseDatabase.getInstance().getReference().child("Trashcan").orderByChild(sort);
        // addListenerForSingleValueEvent : 이벤트를 한 번만 받도록 리스너를 등록하는 API.
        // 콜백을 삭제하지 않는 한 지정한 위치의 하부에 존재하는 값들이 변경될 때 마다 리스너 호출
        sortbyAge.addListenerForSingleValueEvent(postListener);
    }


    // 테스트 함수 : 정보 저장/업데이트/삭제
    public void TestSave(View view){
        uid = "test12345";
        pw = "12345";
        nickname = "12345n";
        email = "12345@gmail.com";
        tid = "test12345";
        name = "12345n";
        region = "12345r";
        latitude = 12345.0;
        longitude = 12345.1;
        PostUserDatabase(true);
        PostTrashcanDatabase(true);
    }

    public void TestUpdate(View view){
        uid = "test12345";
        pw = "update12345";
        nickname = "update12345n";
        email = "update12345@gmail.com";
        tid = "test12345";
        name = "update12345n";
        region = "update12345r";
        latitude = 12345.2;
        longitude = 12345.3;
        PostUserDatabase(true);
        PostTrashcanDatabase(true);
    }

    public void TestDelete(View view){
        uid = "test12345";
        tid = "test12345";
        PostUserDatabase(false);
        PostTrashcanDatabase(false);
    }

    // 테스트 함수 : 정보 검색
    public void TestGet(View view){
        // logcat 확인.
        GetUserDatabase();
        GetTrashcanDatabase();
        // 추가 확인용 view 사용 필요
    }


    // 사용자 위치 받아서 근처 휴지통 검색
    public void GetTrashcanInfo(){

//        필요한 기능 : 사용자 위치 지역 검색, 지역별 휴지통 정보 필터링, 휴지통 거리계산
//        필요한 정보 : 사용자 위치 지역, 사용자 위치(위도경도)

//        입력받은 선택 지역 내 휴지통 필터링
//        -> 일정 위치(300m) 내 휴지통 검색 (현재 위치에서 각 휴지통 까지 거리계산)
//        -> 휴지통 가까운 순으로 정렬
//        -> 화면에 리스트뷰로 보여주기
    }


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_database);
    }
}