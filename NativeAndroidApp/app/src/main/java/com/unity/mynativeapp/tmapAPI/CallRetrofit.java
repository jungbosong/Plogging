package com.unity.mynativeapp.tmapAPI;

import android.util.Log;

import retrofit2.Retrofit;
import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class CallRetrofit {
/*
    //test data (t map 지도연결 후 관련데이터 수집)
    private String appKey = "l7xx6eef69fa1aad46c19eb598ba67dfc0b8";
    private double startX = 126.92365493654832;
    private double startY = 37.556770374096615;
    private int angle = 1;
    private int speed = 60;
    private String endPoiId = "334852";
    private double endX = 126.92432158129688;
    private double endY = 37.55279861528311;
    private String passList = "126.92774822,37.55395475";
    private String startName = "%EC%B6%9C%EB%B0%9C";
    private String endName = "%EB%B3%B8%EC%82%AC";
    private int searchOption = 0;
    private String resCoordType = "WGS84GEO";

    // Retrofit 인스턴스로 인터페이스 객체 구현
    RetrofitInterface service1 = RetrofitClient.getInterface();
    // 사용할 메소드 선언
    Call<Route> call = service1.getfeatures(appKey, startX, startY, angle, speed, endPoiId, endX, endY, passList, startName, endName, searchOption, resCoordType);

    String TAG = "myTAG";

        call.enqueue(new Callback<Route>() {
        @Override
        public void onResponse(Call<Route> call, Response<Route> response){
            if(response.isSuccessful()){
                // 정상적으로 통신이 성공 된 경우
                Route result = response.body();
                Log.d(TAG, "onResponse: 성공, 결과\n"+ result.toString());
            } else {
                // 통신이 실패한 경우(응답코드 3xx, 4xx 등)
                Log.d(TAG, "onResponse: 실패");
            }
        }

        @Override
        public void onFailure(Call<Route> call, Throwable t) {
            // 통신 실패(인터넷 끊김, 예외 발생 등 시스템적인 이유
            Log.d(TAG, "onFailure: "+t.getMessage());
        }

    });
*/
}

