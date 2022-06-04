package com.unity.mynativeapp.fragment;


import android.os.Bundle;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ListView;
import android.widget.Toast;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentManager;
import androidx.recyclerview.widget.RecyclerView;

import com.google.firebase.auth.FirebaseAuth;
import com.google.firebase.auth.FirebaseUser;
import com.google.firebase.database.DataSnapshot;
import com.google.firebase.database.DatabaseError;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.google.firebase.database.ValueEventListener;
import com.unity.mynativeapp.BackPressedListener;
import com.unity.mynativeapp.POJO.Trashcan;
import com.unity.mynativeapp.R;
import com.unity.mynativeapp.adapter.FragmentTrashcanAdapter;

import java.util.ArrayList;
import java.util.Objects;

public class FragmentTrashcanList extends Fragment implements BackPressedListener {
    RecyclerView recyclerview;
    RecyclerView.LayoutManager layoutManager;
    ArrayList<String> contentIdList;

    private final DatabaseReference databaseReference = FirebaseDatabase.getInstance().getReference();
    private FirebaseUser firebaseUser;

    ListView listView;
    ArrayList<Trashcan> trashcanList = new ArrayList<>();
    private static FragmentTrashcanAdapter adapter;

    @Nullable
    @Override
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {
        View view = inflater.inflate(R.layout.fragment_trashcan_list, container, false);

        trashcanList.clear();

        // firebaseAuth의 인스턴스를 가져옴
        firebaseUser =  FirebaseAuth.getInstance().getCurrentUser();
        String uid = firebaseUser.getUid();     // 현재 사용자의 uid 가져오기

        // 로그인한 user가 등록한 쓰레기통만 DB에서 가져오기
        databaseReference.child("Trashcan")
                .orderByChild("creator").equalTo(uid)
                .addListenerForSingleValueEvent(new ValueEventListener() {

            @Override
            public void onDataChange(@NonNull DataSnapshot snapshot) {
                for (DataSnapshot postSnapshot: snapshot.getChildren()) {
                    Trashcan trashcan = postSnapshot.getValue(Trashcan.class);
                    trashcanList.add(trashcan);
                }
                Log.e("FragmentTrashcanList", "GET USER TRASHCAN LIST TEST");
                Log.d("GET USER TRASHCAN LIST TEST", "first trashcan name: " + trashcanList.get(0).getName());
                listView = view.findViewById(R.id.list);
                adapter = new FragmentTrashcanAdapter(getContext(),trashcanList, FragmentTrashcanList.this);
                listView.setAdapter(adapter);
            }

            @Override
            public void onCancelled(@NonNull DatabaseError error) {
                Log.w("GET USER TRASHCAN LIST TEST","Error", error.toException());
                Toast.makeText(getActivity(), "등록한 쓰레기통이 없습니다.", Toast.LENGTH_SHORT).show();
            }
        });

        return view;
    }

    @Override
    public void onBackPressed() {
        // FragmentRecycle로 이동
        FragmentManager fragmentManager = Objects.requireNonNull(getActivity()).getSupportFragmentManager();
        fragmentManager.beginTransaction().replace(R.id.frame_container,new FragmentRecycle()).commit();
    }
}
