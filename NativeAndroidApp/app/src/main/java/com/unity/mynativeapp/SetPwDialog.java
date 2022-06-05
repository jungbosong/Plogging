package com.unity.mynativeapp;

import android.app.Dialog;
import android.content.Context;
import android.graphics.Color;
import android.graphics.drawable.ColorDrawable;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import androidx.annotation.NonNull;

import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import com.google.firebase.auth.FirebaseAuth;

import java.util.Objects;

public class SetPwDialog extends Dialog {
    private FirebaseAuth firebaseAuth;
    private EditText et_text;
    private final Context mContext;
    Button saveButton, cancelButton;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.dialog_set_pw);

        // Dialog 배경 투명으로 지정
        Objects.requireNonNull(getWindow()).setBackgroundDrawable(new ColorDrawable(Color.TRANSPARENT));

        et_text = (EditText) findViewById(R.id.put_text);
        saveButton = (Button) findViewById(R.id.btnSave);
        cancelButton = (Button) findViewById(R.id.btnCancle);

        // 확인 버튼 클릭 시
        saveButton.setOnClickListener(new Button.OnClickListener() {
            @Override
            public void onClick(View view) {
                String email = et_text.getText().toString().trim();
                firebaseAuth = FirebaseAuth.getInstance();
                firebaseAuth.sendPasswordResetEmail(email).addOnCompleteListener(new OnCompleteListener<Void>() {
                    @Override
                    public void onComplete(@NonNull Task<Void> task) {
                        if(task.isSuccessful()){
                            Toast.makeText(mContext, "재설정 이메일 발송", Toast.LENGTH_SHORT).show();
                            dismiss();  // Custom Dialog 종료
                        }
                        else
                        {
                            Toast.makeText(mContext, "계정 없음", Toast.LENGTH_SHORT).show();
                        }
                    }
                });
            }
        });
        // 취소 버튼 클릭 시
        cancelButton.setOnClickListener(new Button.OnClickListener() {
            @Override
            public void onClick(View view) {
                dismiss();
            }
        });
    }

    public SetPwDialog(Context mContext) {
        super(mContext);
        this.mContext = mContext;
    }
}