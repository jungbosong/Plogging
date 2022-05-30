package com.unity.mynativeapp.tmapAPI;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Context;
import android.os.Bundle;
import android.util.Log;

import com.unity.mynativeapp.R;
import com.unity.mynativeapp.POJO.pedestrianPath.Route;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;


public class CallRetrofitActivity extends AppCompatActivity{

    String TAG = "REST API TEST";

    // feature 반환을 위한 빈 객체
    List<Map<String, Object>> features;

    // 고정 data
    String appKey = "l7xx6eef69fa1aad46c19eb598ba67dfc0b8";
    int angle = 1;
    int speed = 4;
    String startName = "출발지";
    String endName = "도착지";

    public List<Map<String, Object>> GetFeatures(double startX, double startY, double endX, double endY, String type) {

        // Retrofit 인스턴스로 인터페이스 객체 구현
        RetrofitInterface service1 = RetrofitClient.getInterface();

        // 사용할 메소드 선언
        Call<Route> call = service1.getroute(appKey, startX, startY, angle, speed, endX, endY, startName, endName);
        call.enqueue(new Callback<Route>() {
            @Override
            public void onResponse(Call<Route> call, Response<Route> response){
                Log.e(TAG, "log test");
                if(response.isSuccessful()){    // 정상적으로 통신이 성공 된 경우
                    // 통신 결과 데이터(보행자 경로) 저장
                    Route result = response.body();
                    // Log.d(TAG, "onResponse: 성공, 결과\n"+ result.toString());

                    // 객체에 Route 클래스의 getTypeFeatures(type) 메소드 반환값 저장
                    features = result.getTypeFeatures(type);
                    // Log.d(TAG, "onResponse: 성공, 결과\n" + features.get(0).get("description"));

                } else {    // 통신이 실패한 경우(응답코드 3xx, 4xx 등)
                    Log.d(TAG, "onResponse: 실패");
                }
            }

            @Override
            public void onFailure(Call<Route> call, Throwable t) {
                // 통신 실패(인터넷 끊김, 예외 발생 등 시스템적인 이유)
                Log.e(TAG, "onFailure: "+t.getMessage());
            }

        });

        return features;
    }


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_callretrofit);
    }

}
