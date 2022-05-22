package com.unity.mynativeapp.fragment;


import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;
import androidx.recyclerview.widget.RecyclerView;
import com.unity.mynativeapp.R;
import com.unity.mynativeapp.fragment.FragmentAdapter;


import java.util.ArrayList;

public class FragmentTrashcanList extends Fragment {
    RecyclerView recyclerview;
    RecyclerView.LayoutManager layoutManager;
    FragmentAdapter fragmentAdapter;
    ArrayList<FragmentAdapter> certificationBoards;
    ArrayList<String> contentIdList;

    @Nullable
    @Override
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {
        View view = inflater.inflate(R.layout.fragment_trashcan_list, container, false);

        return view;
    }

}
