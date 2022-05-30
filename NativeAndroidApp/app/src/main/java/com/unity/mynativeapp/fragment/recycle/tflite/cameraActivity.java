package com.unity.mynativeapp.fragment.recycle.tflite;


import android.Manifest;
import android.app.Activity;
import android.app.AlertDialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.graphics.Bitmap;
import android.graphics.ImageDecoder;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Environment;
import android.provider.MediaStore;
import android.util.Log;
import android.util.Pair;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import android.widget.Toast;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;
import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;
import androidx.core.content.FileProvider;

import com.unity.mynativeapp.R;
import java.io.File;
import java.io.IOException;

import com.unity.mynativeapp.fragment.recycle.bagActivity;
import com.unity.mynativeapp.fragment.recycle.canActivity;
import com.unity.mynativeapp.fragment.recycle.clothActivity;
import com.unity.mynativeapp.fragment.recycle.glassActivity;
import com.unity.mynativeapp.fragment.recycle.umbrellaActivity;

public class cameraActivity extends AppCompatActivity {
    public static final String TAG = "[IC]CameraActivity";
    public static final int CAMERA_IMAGE_REQUEST_CODE = 1;
    private static final String KEY_SELECTED_URI = "KEY_SELECTED_URI";
    public int value = 10;
    public String Title = "";
    public String Text = "";
    LinearLayout imagebutton;
    private ClassifierWithModel cls;
    private Labelclass label = new Labelclass();
    private ImageView imageView;
    private TextView textView;
    LinearLayout container;
    Uri selectedImageUri;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_camera);
        container = findViewById(R.id.container); // 메인 xml에 빈 컨테이너
        Button takeBtn = findViewById(R.id.takeBtn);
        takeBtn.setOnClickListener(v -> getImageFromCamera());

        int permissionCheck = ContextCompat.checkSelfPermission(cameraActivity.this, Manifest.permission.CAMERA);
        if(permissionCheck== PackageManager.PERMISSION_DENIED){
            // 권한 없음
            ActivityCompat.requestPermissions(cameraActivity.this,new String[]{Manifest.permission.CAMERA},0);
            //Toast.makeText(getApplicationContext(),"권한없음",Toast.LENGTH_SHORT).show();
        }else{
            imageView = findViewById(R.id.imageView);
            textView = findViewById(R.id.textView);

            cls = new ClassifierWithModel(this);
            try {
                cls.init();
            } catch (IOException ioe) {
                ioe.printStackTrace();
            }

            if(savedInstanceState != null) {
                Uri uri = savedInstanceState.getParcelable(KEY_SELECTED_URI);
                if (uri != null)
                    selectedImageUri = uri;
            }
        }


    }

    @Override
    protected void onSaveInstanceState(@NonNull Bundle outState) {
        super.onSaveInstanceState(outState);

        outState.putParcelable(KEY_SELECTED_URI, selectedImageUri);
    }

    private void getImageFromCamera(){

        File file = new File(getExternalFilesDir(Environment.DIRECTORY_PICTURES), "picture.jpg");
        selectedImageUri = FileProvider.getUriForFile(this, getPackageName(), file);

        Intent intent = new Intent(MediaStore.ACTION_IMAGE_CAPTURE);
        intent.putExtra(MediaStore.EXTRA_OUTPUT, selectedImageUri);
        startActivityForResult(intent, CAMERA_IMAGE_REQUEST_CODE);
    }


    @Override
    public void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);

        if (resultCode == Activity.RESULT_OK &&
                requestCode == CAMERA_IMAGE_REQUEST_CODE) {

            Bitmap bitmap = null;
            try {
                if(Build.VERSION.SDK_INT >= 29) {
                    ImageDecoder.Source src = ImageDecoder.createSource(
                            getContentResolver(), selectedImageUri);
                    bitmap = ImageDecoder.decodeBitmap(src);
                } else {
                    bitmap = MediaStore.Images.Media.getBitmap(
                            getContentResolver(), selectedImageUri);
                }
            } catch (IOException ioe) {
                Log.e(TAG, "Failed to read Image", ioe);
            }

            String resultStr ="test";
            double persent = 0.0;
            // 이미지 출력
            if(bitmap != null) {
                Pair<String, Float> output = cls.classify(bitmap);
                resultStr = output.first;
                imageView.setImageBitmap(bitmap);
                textView.setText(resultStr);

                value = label.Labelclass_function(resultStr);

            }

        }
    }

    public void DialogClick(View view) {
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setTitle("탐지 불가").setMessage("이미지를 넣고 다시 버튼을 클릭해 주세요");

        if(value == 1 || value == 2 ){
            builder.setTitle("의류입니다.").setMessage("분리수거 화면으로 가겠습니까?");
            builder.setPositiveButton("확인", new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialog, int which) {
                    Intent intent = new Intent(getApplicationContext(), clothActivity.class);
                    startActivity(intent);
                }
            });
            builder.setNegativeButton("취소", new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialog, int which) {
                    
                }
            });
        }
        else if (value == 3) {
            builder.setTitle("유리입니다.").setMessage("분리수거 화면으로 가겠습니까?");
            builder.setPositiveButton("확인", new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialog, int which) {
                    Intent intent = new Intent(getApplicationContext(), glassActivity.class);
                    startActivity(intent);
                }
            });
            builder.setNegativeButton("취소", new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialog, int which) {

                }
            });
        }
        else if (value == 4) {
            builder.setTitle("도자기입니다.").setMessage("분리수거 화면으로 가겠습니까?");
            builder.setPositiveButton("확인", new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialog, int which) {
                    Intent intent = new Intent(getApplicationContext(), glassActivity.class);
                    startActivity(intent);
                }
            });
            builder.setNegativeButton("취소", new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialog, int which) {

                }
            });
        }
        else if (value == 5) {
            builder.setTitle("금속입니다.").setMessage("분리수거 화면으로 가겠습니까?");
            builder.setPositiveButton("확인", new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialog, int which) {
                    Intent intent = new Intent(getApplicationContext(),canActivity.class);
                    startActivity(intent);
                    
                }
            });
            builder.setNegativeButton("취소", new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialog, int which) {

                }
            });
        }
        else if (value == 6) {
            builder.setTitle("비닐입니다.").setMessage("분리수거 화면으로 가겠습니까?");
            builder.setPositiveButton("확인", new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialog, int which) {
                    Intent intent = new Intent(getApplicationContext(), bagActivity.class);
                    startActivity(intent);
                }
            });
            builder.setNegativeButton("취소", new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialog, int which) {

                }
            });
        }
        else if (value == 7) {
            builder.setTitle("우산입니다.").setMessage("분리수거 화면으로 가겠습니까?");
            builder.setPositiveButton("확인", new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialog, int which) {
                    Intent intent = new Intent(getApplicationContext(), umbrellaActivity.class);
                    startActivity(intent);
                }
            });
            builder.setNegativeButton("취소", new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialog, int which) {

                }
            });
        }
        else if (value == 8) {
            builder.setTitle("화장지입니다.").setMessage("종량제 봉투에 버리시면 됩니다.");
        }
        else if(value == 9){
            builder.setTitle("탐지 불가").setMessage("분리수거할 목록인지 확인을 못했습니다.");
        }

        AlertDialog alertDialog = builder.create();
        alertDialog.show();
    }
    @Override
    protected void onDestroy() {
        cls.finish();
        super.onDestroy();
    }

    @Override
    public void onRequestPermissionsResult(int requestCode, @NonNull String[] permissions, @NonNull int[] grantResults) {
        if(requestCode==0){
            if(grantResults[0]==0){
                Toast.makeText(this,"카메라 권한이 승인됨",Toast.LENGTH_SHORT).show();
            }else{
                //권한 거절된 경우
                Toast.makeText(this,"카메라 권한이 거절 되었습니다.카메라를 이용하려면 권한을 승낙하여야 합니다.",Toast.LENGTH_SHORT).show();
            }
        }
    }
}
