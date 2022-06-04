package com.unity.mynativeapp.api;

import com.unity.mynativeapp.POJO.Route;

import retrofit2.Call;
import retrofit2.http.GET;
import retrofit2.http.Header;
import retrofit2.http.Query;

public interface RetrofitInterface {

    @GET("pedestrian")
    Call<Route> getroute(@Header("appKey") String appkey,
                         @Query("startX") double startX,
                         @Query("startY") double startY,
                         @Query("angle") int angle,
                         @Query("speed") int speed,
                         @Query("endX") double endX,
                         @Query("endY") double endY,
                         @Query("startName") String startName,
                         @Query("endName") String endName);

}

/*
https://apis.openapi.sk.com/tmap/routes/pedestrian?
appKey=l7xx6eef69fa1aad46c19eb598ba67dfc0b8
(여기부턴 샘플파라미터)
startX=126.92365493654832
startY=37.556770374096615
angle=1
speed=4
endX=126.92432158129688
endY=37.55279861528311
startName=%EC%B6%9C%EB%B0%9C
endName=%EB%B3%B8%EC%82%AC
searchOption=0
resCoordType=WGS84GEO

전체 url
https://apis.openapi.sk.com/tmap/routes/pedestrian?version=1&format=json&appKey=l7xx6eef69fa1aad46c19eb598ba67dfc0b8&startX=126.92365493654832&startY=37.556770374096615&angle=1&speed=60&endPoiId=334852&endX=126.92432158129688&endY=37.55279861528311&passList=126.92774822,37.55395475&reqCoordType=WGS84GEO&startName=%EC%B6%9C%EB%B0%9C&endName=%EB%B3%B8%EC%82%AC&searchOption=0&resCoordType=WGS84GEO

 */

