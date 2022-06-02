package com.unity.mynativeapp.fragment;


import android.os.Bundle;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ListView;
import android.widget.Toast;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.ListFragment;
import androidx.recyclerview.widget.RecyclerView;

import com.google.firebase.database.DataSnapshot;
import com.google.firebase.database.DatabaseError;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.google.firebase.database.Query;
import com.google.firebase.database.ValueEventListener;
import com.unity.mynativeapp.POJO.Trashcan;
import com.unity.mynativeapp.R;
import com.unity.mynativeapp.fragment.FragmentAdapter;


import java.util.ArrayList;
import java.util.List;

public class FragmentTrashcanList extends Fragment {
    RecyclerView recyclerview;
    RecyclerView.LayoutManager layoutManager;
    FragmentAdapter fragmentAdapter;
    ArrayList<FragmentAdapter> certificationBoards;
    ArrayList<String> contentIdList;



    private final DatabaseReference databaseReference = FirebaseDatabase.getInstance().getReference();

    ListView listView;
    ArrayList<Trashcan> trashcanList = new ArrayList<>();
    private static FragmentTrashcanAdapter adapter;



    @Nullable
    @Override
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {
        View view = inflater.inflate(R.layout.fragment_trashcan_list, container, false);

        String uid = "uid1";  // 로그인 구현 전 uid 임시생성!!!

        // 로그인한 user가 등록한 쓰레기통 DB에서 가져오기
        databaseReference.child("Trashcan")
                .orderByChild("creator").equalTo(uid)
                .addListenerForSingleValueEvent(new ValueEventListener() {

            @Override
            public void onDataChange(@NonNull DataSnapshot snapshot) {
                for (DataSnapshot postSnapshot: snapshot.getChildren()) {
                    Trashcan trashcan = postSnapshot.getValue(Trashcan.class);
                    trashcanList.add(trashcan);
                }
                Log.e("GET USER TRASHCAN LIST TEST", " trashcan info\n");
                listView = view.findViewById(R.id.list);
                adapter = new FragmentTrashcanAdapter(getContext(),trashcanList);
                listView.setAdapter(adapter);


            }

            @Override
            public void onCancelled(@NonNull DatabaseError error) {
                Log.w("GET USER TRASHCAN LIST TEST","Error", error.toException());
            }
        });

        return view;
    }


}
