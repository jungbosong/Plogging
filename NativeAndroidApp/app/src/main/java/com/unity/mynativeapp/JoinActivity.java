package com.unity.mynativeapp;

import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import com.google.firebase.auth.AuthResult;
import com.google.firebase.auth.FirebaseAuth;


public class JoinActivity extends AppCompatActivity {

    EditText userEmail, userPw, userPwCheck;
    Button userjoin;
    private static final String TAG = "JoinActivity";
    private FirebaseAuth firebaseAuth;

    
    public void onCreate(Bundle savedInstanceState){
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_join);

        // firebaseAuth의 인스턴스를 가져옴
        firebaseAuth = FirebaseAuth.getInstance();

        userEmail = findViewById(R.id.userEmail);
        userPw = findViewById(R.id.userPw);
        userPwCheck = findViewById(R.id.userPwCheck);
        userjoin = findViewById(R.id.userjoin);
        
        // 회원가입 버튼 클릭 이벤트
        userjoin.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v) {

                // 가입 정보 가져오기
                String email = userEmail.getText().toString().trim();
                String pw = userPw.getText().toString().trim();
                String pw_check = userPwCheck.getText().toString().trim();

                // 두 비밀번호 입력 값이 같고
                if(pw.equals(pw_check)){
                    // 비밀번호가 6자 이상일 때
                    if(pw.length()>5){
                        Log.d(TAG, "등록 버튼 : " + email + " , " + pw);

                        // 파이어베이스에 신규 계정 등록
                        firebaseAuth.createUserWithEmailAndPassword(email, pw).addOnCompleteListener(JoinActivity.this, new OnCompleteListener<AuthResult>() {
                            @Override
                            public void onComplete(@NonNull Task<AuthResult> task) {
                                //가입 성공 시
                                if(task.isSuccessful()){
                                    //가입 완료 후 로그인 화면 이동
                                    Intent intent = new Intent(getApplicationContext(),LoginActivity.class);
                                    startActivity(intent);
                                    Toast.makeText(JoinActivity.this, "회원가입에 성공하였습니다.", Toast.LENGTH_SHORT).show();
                                }
                                else{
                                    Log.e(TAG, "createUserWithEmail:failure", task.getException());
                                    Toast.makeText(JoinActivity.this, "이미 존재하는 계정입니다.", Toast.LENGTH_SHORT).show();
                                    return; // 메소드 진행 멈추고 빠져나감
                                }
                            }
                        });
                    }
                    else{
                        Toast.makeText(JoinActivity.this, "비밀번호를 6자 이상 입력해주세요.", Toast.LENGTH_SHORT).show();
                        return;
                    }
                                    }
                else{   // 비밀번호 오류 시
                    Toast.makeText(JoinActivity.this, "비밀번호가 틀렸습니다. 다시 입력해 주세요.", Toast.LENGTH_SHORT).show();
                    return;
                }
                
            }
        });


    }
}
