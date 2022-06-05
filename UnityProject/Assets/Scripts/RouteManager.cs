using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class RouteManager : MonoBehaviour
{
    [SerializeField]
    LineManager lineManager;

    string pointCount = "5";
    public int GetPointCount()
    {
        return int.Parse(pointCount);
    }
    //string latitudes = "null,35.153706264525795,35.15366738528908,35.1529285765812,35.152870256418595,35.15220921703724";
    //string longitudes = "null,128.09882570855527,128.0991229057532,128.0989590506816,128.09933124181887,128.09918404990484";
    string latitudes, longitudes;
    public List<float> latitudeList = new List<float>();
    public List<float> longitudeList = new List<float>();

    void Awake()
    {
        lineManager = lineManager.GetComponent<LineManager>();
    }


    void Start()
    {
        GetRouteData();    
        latitudeList = ParsingData(latitudes);
        longitudeList = ParsingData(longitudes);

        lineManager.DrawLine();
    }

    void Update()
    {		
		if (Application.platform == RuntimePlatform.Android)
            if (Input.GetKeyDown(KeyCode.Escape)) Application.Quit();
    }


    void GetRouteData()
    {
        try
        {
            AndroidJavaClass jc = new AndroidJavaClass("com.company.product.OverrideUnityActivity");
            AndroidJavaObject overrideActivity = jc.GetStatic<AndroidJavaObject>("instance");
            pointCount = overrideActivity.Call<string>("getPointCount");
            latitudes = overrideActivity.Call<string>("getLatitudes");
            longitudes = overrideActivity.Call<string>("getLongitudes");
        }
        catch(Exception e) 
        {
            
        }
    }

    List<float> ParsingData(string data)
    {
        List<float> resultList = new List<float>();

        string[] parsedData = data.Split(',');

        for(int i = 1; i < parsedData.Length; i++)
        {
            resultList.Add(float.Parse(parsedData[i]));
        }
        
        return resultList;
    }
}

