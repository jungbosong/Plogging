package com.unity.mynativeapp.tmapAPI;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;

import retrofit2.Retrofit;
import retrofit2.converter.gson.GsonConverterFactory;
import retrofit2.converter.scalars.ScalarsConverterFactory;

// api 접근 클래스
// api 클래스를 Retrofit.class에 연결시키는 역할

public class RetrofitClient {
    private static final String BASE_URL = "https://apis.openapi.sk.com/tmap/routes/";

    public static RetrofitInterface getInterface(){
        return getInstance().create(RetrofitInterface.class);
    }

    private static Retrofit getInstance(){
        Gson gson = new GsonBuilder().setLenient().create();
        return new Retrofit.Builder()
                .baseUrl(BASE_URL)
                .addConverterFactory(ScalarsConverterFactory.create())
                .addConverterFactory(GsonConverterFactory.create(gson))
                .build();
    }

}

