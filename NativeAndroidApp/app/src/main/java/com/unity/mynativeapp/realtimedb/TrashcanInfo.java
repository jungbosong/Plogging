package com.unity.mynativeapp.realtimedb;

import com.google.firebase.database.Exclude;
import java.util.HashMap;
import java.util.Map;


//각 trashcan 정보를 임시저장하는 자바 객체
public class TrashcanInfo
{
    public String tid;       //trashcan 고유 id
    public String name;      //trashcan 이름
    public String region;    //trashcan 지역
    public Double latitude;  //trashcan location : 위도
    public Double longitude; //trashcan location : 경도

    public TrashcanInfo() {

    }

    //TrashcanInfo 객체 생성 시 매개변수 값을 객체에 저장
    public TrashcanInfo(String tid, String name, String region, Double latitude, Double longitude) {
        this.tid = tid;
        this.name = name;
        this.region = region;
        this.latitude = latitude;
        this.longitude = longitude;
    }

    // 객체에 저장된 정보를 HashMap 형태로 저장
    @Exclude
    public Map<String, Object> TrashcantoMap(){
        HashMap<String, Object> result = new HashMap<>();
        result.put("tid", tid);
        result.put("name", name);
        result.put("region", region);
        result.put("latitude", latitude);
        result.put("longitude", longitude);
        return result;
    }

    /*
    public String getName() { return name; }
    public void setName(String name) { this.name = name; }
    public String getRegion() { return region; }
    public void setRegion(String region) { this.region = region; }
    public Double getLatitude() { return latitude; }
    public void setLatitude(Double latitude) { this.latitude = latitude; }
    public Double getLongitude() { return longitude; }
    public void setLongitude(Double longitude) { this.longitude = longitude; }
     */

}

