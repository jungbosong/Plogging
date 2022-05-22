package com.unity.mynativeapp.fragment;

import android.content.Intent;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.ImageButton;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentActivity;

import com.unity.mynativeapp.MainActivity;
import com.unity.mynativeapp.R;
import com.unity.mynativeapp.fragment.recycle.bagActivity;
import com.unity.mynativeapp.fragment.recycle.canActivity;
import com.unity.mynativeapp.fragment.recycle.clothActivity;
import com.unity.mynativeapp.fragment.recycle.glassActivity;
import com.unity.mynativeapp.fragment.recycle.lightActivity;
import com.unity.mynativeapp.fragment.recycle.paperActivity;
import com.unity.mynativeapp.fragment.recycle.plasticActivity;
import com.unity.mynativeapp.fragment.recycle.pomActivity;
import com.unity.mynativeapp.fragment.recycle.tflite.cameraActivity;
import com.unity.mynativeapp.fragment.recycle.tflite.galleryActivity;

public class FragmentRecycle extends Fragment {
    ImageButton plastic,bag,glass,can,paper,pom,cloth,light;
    Button camera,gallery;
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {
        View view =inflater.inflate(R.layout.fragment_recycle,container,false);
        plastic = view.findViewById(R.id.plastic);
        bag = view.findViewById(R.id.bag);
        glass = view.findViewById(R.id.glass);
        paper = view.findViewById(R.id.paper);
        can = view.findViewById(R.id.can);
        pom = view.findViewById(R.id.pom);
        cloth = view.findViewById(R.id.cloth);
        light = view.findViewById(R.id.light);
        camera = view.findViewById(R.id.camera_layout);
        gallery = view.findViewById(R.id.gallery_layout);
        camera.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                Intent intent = new Intent(getActivity(), cameraActivity.class);
                startActivity(intent);
            }
        });
        gallery.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                Intent intent = new Intent(getActivity(), galleryActivity.class);
                startActivity(intent);
            }
        });
        plastic.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                Intent intent = new Intent(getActivity(), plasticActivity.class);
                startActivity(intent);
            }
        });

        bag.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                Intent intent = new Intent(getActivity(), bagActivity.class);
                startActivity(intent);
            }
        });
        glass.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                Intent intent = new Intent(getActivity(), glassActivity.class);
                startActivity(intent);
            }
        });
        can.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                Intent intent = new Intent(getActivity(), canActivity.class);
                startActivity(intent);
            }
        });

        paper.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                Intent intent = new Intent(getActivity(), paperActivity.class);
                startActivity(intent);
            }
        });
        pom.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                Intent intent = new Intent(getActivity(), pomActivity.class);
                startActivity(intent);
            }
        });
        cloth.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                Intent intent = new Intent(getActivity(), clothActivity.class);
                startActivity(intent);
            }
        });
        light.setOnClickListener(new View.OnClickListener() {
            public void onClick(View view) {
                Intent intent = new Intent(getActivity(), lightActivity.class);
                startActivity(intent);
            }
        });

        return view;

    }

}
