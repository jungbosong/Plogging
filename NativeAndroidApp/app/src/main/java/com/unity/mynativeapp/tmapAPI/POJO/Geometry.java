package com.unity.mynativeapp.tmapAPI.POJO;

import java.util.ArrayList;
import java.util.List;
import javax.annotation.Generated;
import com.google.gson.annotations.Expose;
import com.google.gson.annotations.SerializedName;

/*
@SerialzedName : JSON으로 serialize 될 때 매칭되는 이름을 명시하는 목적으로 사용
@Expose : object 중 해당 값이 null일 경우, json으로 만들 필드를 자동 생략
 */

@Generated("jsonschema2pojo")
public class Geometry {

    @SerializedName("type")
    @Expose
    private String type;
    @SerializedName("coordinates")
    @Expose
    private ArrayList coordinates = null;

    public String getType() {
        return type;
    }

    public void setType(String type) {
        this.type = type;
    }

    public ArrayList getCoordinates() {
        return coordinates;
    }

    public void setCoordinates(ArrayList coordinates) {
        this.coordinates = coordinates;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        //sb.append(Geometry.class.getName()).append('@').append(Integer.toHexString(System.identityHashCode(this))).append('[');
        sb.append("[type");
        sb.append('=');
        sb.append(((this.type == null)?"<null>":this.type));
        sb.append(',');
        sb.append(System.getProperty("line.separator"));
        sb.append("coordinates");
        sb.append('=');
        sb.append(((this.coordinates == null)?"<null>":this.coordinates));
        sb.append(',');
        if (sb.charAt((sb.length()- 1)) == ',') {
            sb.setCharAt((sb.length()- 1), ']');
        } else {
            sb.append(']');
        }
        return sb.toString();
    }

}
