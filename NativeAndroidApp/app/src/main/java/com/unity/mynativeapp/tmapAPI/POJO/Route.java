package com.unity.mynativeapp.tmapAPI.POJO;

import java.util.List;
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

    public void setType(String type) {
        this.type = type;
    }

    public List<Feature> getFeatures() {
        return features;
    }

    public void setFeatures(List<Feature> features) {
        this.features = features;
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

