package com.unity.mynativeapp.activity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import com.google.firebase.auth.AuthResult;
import com.google.firebase.auth.FirebaseAuth;
import com.unity.mynativeapp.R;
import com.unity.mynativeapp.SetPwDialog;


public class LoginActivity extends AppCompatActivity {
    private FirebaseAuth firebaseAuth;

    EditText userEmailLogin, userPwLogin;
    Button LoginButton;
    TextView userjoin, findPW;

    public void onCreate(Bundle savedInstanceState){
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_login);

        firebaseAuth = FirebaseAuth.getInstance(); // firebaseAuth의 인스턴스를 가져옴

        userEmailLogin = (EditText) findViewById(R.id.userEmailLogin);
        userPwLogin = (EditText) findViewById(R.id.userPwLogin);
        LoginButton = (Button) findViewById(R.id.LoginButton);
        userjoin = (TextView) findViewById(R.id.userjoin);
        findPW = (TextView) findViewById(R.id.findPw);

        // 로그인 버튼
        LoginButton.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v) {
                
                // 입력받은 이메일, 비밀번호 가져오기
                String email = userEmailLogin.getText().toString().trim();
                String pw = userPwLogin.getText().toString().trim();

                if( !(email.isEmpty() | email.length() == 0) )
                {
                    // 로그인 시도
                    firebaseAuth.signInWithEmailAndPassword(email, pw).addOnCompleteListener(LoginActivity.this, new OnCompleteListener<AuthResult>() {
                        @Override
                        public void onComplete(@NonNull Task<AuthResult> task) {
                            // 로그인 성공
                            if(task.isSuccessful()){
                                Intent intent = new Intent(getApplicationContext(), MainActivity.class);
                                startActivity(intent);
                                Toast.makeText(LoginActivity.this, "로그인 성공", Toast.LENGTH_SHORT).show();
                            }
                            else{ // 로그인 실패
                                Toast.makeText(LoginActivity.this, "로그인 오류", Toast.LENGTH_SHORT).show();
                            }
                        }
                    });
                }
                else
                {
                    Toast.makeText(LoginActivity.this, "로그인 정보를 입력하세요", Toast.LENGTH_SHORT).show();
                }
            }
        });


        // 회원가입 버튼
        userjoin.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v) {
                // 회원가입 화면 이동 (JoinActivity)
                Intent intent = new Intent(getApplicationContext(), JoinActivity.class);
                startActivity(intent);
            }
        });


        // 비밀번호 찾기(비밀번호 재설정 메일 발송)
        findPW.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                SetPwDialog dialog = new SetPwDialog(LoginActivity.this);
                dialog.show();
            }
        });
    }

    /*@Override
    public void onStart() {
        super.onStart();
        // Check if user is signed in (non-null) and update UI accordingly.
        FirebaseUser currentUser = firebaseAuth.getCurrentUser();
        if(currentUser != null){
            currentUser.reload();
        }
    }*/
}
