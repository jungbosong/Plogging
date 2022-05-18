package com.unity.mynativeapp.tmapAPI.POJO;

import javax.annotation.Generated;
import com.google.gson.annotations.Expose;
import com.google.gson.annotations.SerializedName;

// Plain Old Java Object
// 재사용을 위한 오브젝트(api에 요청한 데이터 모델)
// feature

/*
@SerialzedName : JSON으로 serialize 될 때 매칭되는 이름을 명시하는 목적으로 사용
@Expose : object 중 해당 값이 null일 경우, json으로 만들 필드를 자동 생략
 */

/*
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
}
 */

@Generated("jsonschema2pojo")
public class Feature {

    @SerializedName("type")
    @Expose
    private String type;
    @SerializedName("geometry")
    @Expose
    private Geometry geometry;
    @SerializedName("properties")
    @Expose
    private Properties properties;

    public String getType() {
        return type;
    }

    public void setType(String type) {
        this.type = type;
    }

    public Geometry getGeometry() {
        return geometry;
    }

    public void setGeometry(Geometry geometry) {
        this.geometry = geometry;
    }

    public Properties getProperties() {
        return properties;
    }

    public void setProperties(Properties properties) {
        this.properties = properties;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append(System.getProperty("line.separator"));
        //sb.append(Feature.class.getName()).append('@').append(Integer.toHexString(System.identityHashCode(this))).append('[');
        sb.append("[type");
        sb.append('=');
        sb.append(((this.type == null)?"<null>":this.type));
        sb.append(',');
        sb.append(System.getProperty("line.separator"));
        sb.append("geometry");
        sb.append('=');
        sb.append(((this.geometry == null)?"<null>":this.geometry));
        sb.append(',');
        sb.append(System.getProperty("line.separator"));
        sb.append("properties");
        sb.append('=');
        sb.append(((this.properties == null)?"<null>":this.properties));
        sb.append(',');
        if (sb.charAt((sb.length()- 1)) == ',') {
            sb.setCharAt((sb.length()- 1), ']');
        } else {
            sb.append(']');
        }
        return sb.toString();
    }

}

