package com.unity.mynativeapp.fragment;

import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;

import com.google.android.material.floatingactionbutton.FloatingActionButton;
import com.unity.mynativeapp.R;

public class FragmentHome extends Fragment {

    private Button moveTmap_btn;
    private Button moveDB_btn;
    private Button moveRetrofit_btn;
    private FloatingActionButton locationHere;

    @Nullable
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {
        View v=inflater.inflate(R.layout.fragment_home,container,false);

        locationHere = v.findViewById(R.id.locationHere);
        locationHere.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View view){

            }
        });

        return v;
    }

}
