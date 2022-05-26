package com.unity.mynativeapp.POJO.pedestrianPath;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.annotation.Generated;

import com.google.gson.annotations.Expose;
import com.google.gson.annotations.SerializedName;

// Plain Old Java Object
// 재사용을 위한 오브젝트(api에 요청한 데이터 모델)
// 전체 경로 데이터(각 feature 접근 가능)

/*
@SerialzedName : JSON으로 serialize 될 때 매칭되는 이름을 명시하는 목적으로 사용
@Expose : object 중 해당 값이 null일 경우, json으로 만들 필드를 자동 생략
 */

/*
{
    "type": "FeatureCollection",
    "features": [

        {"type": "Feature",
            "geometry": {
                    "type": "Point",
                    "coordinates": [126.92364104902308,37.556759264185274 ]
            },
            "properties":{
                "index": 1,
                "pointIndex": 1,
                "name": "",
                "guidePointName": "",
                "description": "양화로 을 따라 양화로 방면으로 6m 이동",
                "direction": "",
                "intersectionName": "",
                "nearPoiName": "",
                "nearPoiX": "0.0",
                "nearPoiY": "0.0",
                "crossName": "",
                "turnType": 200,
                "pointType": "SP"
            }
        },
        {"type": "Feature",
            "geometry":
                    {
                    "type": "LineString",
                    "coordinates": [
                        [126.92364104902308,37.556759264185274 ],
                        [126.92359383142113,37.55672315696065 ]
                        ]
            },
            "properties":{
                "index": 2,
                "lineIndex": 1,
                "name": "양화로",
                "roadName": "양화로",
                "description": "양화로, 6m",
                "distance": 6,
                "time": 5,
                "roadType": 23,
                "categoryRoadType": 0,
                "facilityType": 17,
                "facilityName": "일반보행자도로"
            }
        },
        ...(생략)
    ]
}
 */

@Generated("jsonschema2pojo")
public class Route {

    @SerializedName("type")
    @Expose
    private String type;
    @SerializedName("features")
    @Expose
    private List<Feature> features = null;

    public String getType() {
        return type;
    }

    public List<Feature> getFeatures() {
        return features;
    }

    // 원하는 타입 입력받아 feature hashmap으로 반환
    public List<Map<String, Object>> getTypeFeatures(String type) {
        // 반환할 Feature list
        List<Map<String, Object>> features_hash = new ArrayList<>();
        int hash_i = 0;

        // type과 일치하는 Feature 저장
        for(Feature feature : features){
            if(feature.getGeometry().getType().equals(type)){
                features_hash.add(new HashMap<>());
                // 공통
                features_hash.get(hash_i).put("coordinates", feature.getGeometry().getCoordinates());
                features_hash.get(hash_i).put("index", feature.getProperties().getIndex());
                features_hash.get(hash_i).put("description", feature.getProperties().getDescription());

                // type=Point
                if(type.equals("Point")){
                    features_hash.get(hash_i).put("point_index", feature.getProperties().getPointIndex());
                    features_hash.get(hash_i).put("turn_type", feature.getProperties().getTurnType());
                    features_hash.get(hash_i).put("point_type", feature.getProperties().getPointType());
                }
                // type=LineString
                else if (type.equals("LineString")){
                    features_hash.get(hash_i).put("line_index", feature.getProperties().getLineIndex());
                    features_hash.get(hash_i).put("distance", feature.getProperties().getDistance());
                    features_hash.get(hash_i).put("time", feature.getProperties().getTime());
                }
                hash_i++;
            }
        }
        return features_hash;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        //sb.append(Route.class.getName()).append('@').append(Integer.toHexString(System.identityHashCode(this))).append('[');
        sb.append("[type");
        sb.append('=');
        sb.append(((this.type == null)?"<null>":this.type));
        sb.append(',');
        sb.append(System.getProperty("line.separator"));
        sb.append("features");
        sb.append('=');
        sb.append(((this.features == null)?"<null>":this.features));
        sb.append(',');
        if (sb.charAt((sb.length()- 1)) == ',') {
            sb.setCharAt((sb.length()- 1), ']');
        } else {
            sb.append(']');
        }
        return sb.toString();
    }

}

