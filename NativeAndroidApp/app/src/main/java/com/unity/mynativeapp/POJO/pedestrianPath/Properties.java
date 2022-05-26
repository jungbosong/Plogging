package com.unity.mynativeapp.POJO.pedestrianPath;

import javax.annotation.Generated;
import com.google.gson.annotations.Expose;
import com.google.gson.annotations.SerializedName;

/*
@SerialzedName : JSON으로 serialize 될 때 매칭되는 이름을 명시하는 목적으로 사용
@Expose : object 중 해당 값이 null일 경우, json으로 만들 필드를 자동 생략
 */

/*
{
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
 */

@Generated("jsonschema2pojo")
public class Properties {

    @SerializedName("totalDistance")
    @Expose
    private Integer totalDistance;
    @SerializedName("totalTime")
    @Expose
    private Integer totalTime;
    @SerializedName("index")
    @Expose
    private Integer index;
    @SerializedName("pointIndex")
    @Expose
    private Integer pointIndex;
    @SerializedName("name")
    @Expose
    private String name;
    @SerializedName("description")
    @Expose
    private String description;
    @SerializedName("direction")
    @Expose
    private String direction;
    @SerializedName("nearPoiName")
    @Expose
    private String nearPoiName;
    @SerializedName("nearPoiX")
    @Expose
    private String nearPoiX;
    @SerializedName("nearPoiY")
    @Expose
    private String nearPoiY;
    @SerializedName("intersectionName")
    @Expose
    private String intersectionName;
    @SerializedName("facilityType")
    @Expose
    private String facilityType;
    @SerializedName("facilityName")
    @Expose
    private String facilityName;
    @SerializedName("turnType")
    @Expose
    private Integer turnType;
    @SerializedName("pointType")
    @Expose
    private String pointType;
    @SerializedName("lineIndex")
    @Expose
    private Integer lineIndex;
    @SerializedName("distance")
    @Expose
    private Integer distance;
    @SerializedName("time")
    @Expose
    private Integer time;
    @SerializedName("roadType")
    @Expose
    private Integer roadType;
    @SerializedName("categoryRoadType")
    @Expose
    private Integer categoryRoadType;

    public Integer getTotalDistance() {
        return totalDistance;
    }

    public Integer getTotalTime() {
        return totalTime;
    }

    public Integer getIndex() {
        return index;
    }

    public void setIndex(Integer index) {
        this.index = index;
    }

    public Integer getPointIndex() {
        return pointIndex;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getDescription() {
        return description;
    }

    public String getDirection() {
        return direction;
    }

    public String getNearPoiName() {
        return nearPoiName;
    }

    public String getNearPoiX() {
        return nearPoiX;
    }

    public String getNearPoiY() {
        return nearPoiY;
    }

    public String getIntersectionName() {
        return intersectionName;
    }

    public String getFacilityType() {
        return facilityType;
    }

    public String getFacilityName() {
        return facilityName;
    }

    public Integer getTurnType() {
        return turnType;
    }

    public String getPointType() {
        return pointType;
    }

    public Integer getLineIndex() {
        return lineIndex;
    }

    public Integer getDistance() {
        return distance;
    }

    public Integer getTime() {
        return time;
    }

    public Integer getRoadType() {
        return roadType;
    }

    public Integer getCategoryRoadType() {
        return categoryRoadType;
    }


    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        //sb.append(Properties.class.getName()).append('@').append(Integer.toHexString(System.identityHashCode(this))).append('[');
        sb.append("[totalDistance");
        sb.append('=');
        sb.append(((this.totalDistance == null)?"<null>":this.totalDistance));
        sb.append(',');
        sb.append("totalTime");
        sb.append('=');
        sb.append(((this.totalTime == null)?"<null>":this.totalTime));
        sb.append(',');
        sb.append("index");
        sb.append('=');
        sb.append(((this.index == null)?"<null>":this.index));
        sb.append(',');
        sb.append("pointIndex");
        sb.append('=');
        sb.append(((this.pointIndex == null)?"<null>":this.pointIndex));
        sb.append(',');
        sb.append("name");
        sb.append('=');
        sb.append(((this.name == null)?"<null>":this.name));
        sb.append(',');
        sb.append("description");
        sb.append('=');
        sb.append(((this.description == null)?"<null>":this.description));
        sb.append(',');
        sb.append("direction");
        sb.append('=');
        sb.append(((this.direction == null)?"<null>":this.direction));
        sb.append(',');
        sb.append("nearPoiName");
        sb.append('=');
        sb.append(((this.nearPoiName == null)?"<null>":this.nearPoiName));
        sb.append(',');
        sb.append("nearPoiX");
        sb.append('=');
        sb.append(((this.nearPoiX == null)?"<null>":this.nearPoiX));
        sb.append(',');
        sb.append("nearPoiY");
        sb.append('=');
        sb.append(((this.nearPoiY == null)?"<null>":this.nearPoiY));
        sb.append(',');
        sb.append("intersectionName");
        sb.append('=');
        sb.append(((this.intersectionName == null)?"<null>":this.intersectionName));
        sb.append(',');
        sb.append("facilityType");
        sb.append('=');
        sb.append(((this.facilityType == null)?"<null>":this.facilityType));
        sb.append(',');
        sb.append("facilityName");
        sb.append('=');
        sb.append(((this.facilityName == null)?"<null>":this.facilityName));
        sb.append(',');
        sb.append("turnType");
        sb.append('=');
        sb.append(((this.turnType == null)?"<null>":this.turnType));
        sb.append(',');
        sb.append("pointType");
        sb.append('=');
        sb.append(((this.pointType == null)?"<null>":this.pointType));
        sb.append(',');
        sb.append("lineIndex");
        sb.append('=');
        sb.append(((this.lineIndex == null)?"<null>":this.lineIndex));
        sb.append(',');
        sb.append("distance");
        sb.append('=');
        sb.append(((this.distance == null)?"<null>":this.distance));
        sb.append(',');
        sb.append("time");
        sb.append('=');
        sb.append(((this.time == null)?"<null>":this.time));
        sb.append(',');
        sb.append("roadType");
        sb.append('=');
        sb.append(((this.roadType == null)?"<null>":this.roadType));
        sb.append(',');
        sb.append("categoryRoadType");
        sb.append('=');
        sb.append(((this.categoryRoadType == null)?"<null>":this.categoryRoadType));
        sb.append(',');
        if (sb.charAt((sb.length()- 1)) == ',') {
            sb.setCharAt((sb.length()- 1), ']');
        } else {
            sb.append(']');
        }
        return sb.toString();
    }

}

