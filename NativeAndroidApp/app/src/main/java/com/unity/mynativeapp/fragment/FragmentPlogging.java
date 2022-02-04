package com.unity.mynativeapp.fragment;

import android.app.Activity;
import android.content.Intent;
import android.graphics.Color;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;

import com.unity.mynativeapp.MainActivity;
import com.unity.mynativeapp.R;
import com.unity.mynativeapp.Unity.UnityActivity;

public class FragmentPlogging extends Fragment {
    Button ShowTest;
    @Nullable
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {
        View view = inflater.inflate(R.layout.fragement_plogging, container, false);

        ShowTest = view.findViewById(R.id.ShowTest);
        ShowTest.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                Intent intent = new Intent(getActivity(), UnityActivity.class);
                startActivity(intent);
            }
        });

        return view;
    }

}
