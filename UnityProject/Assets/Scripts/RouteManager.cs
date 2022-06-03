using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;


public class RouteManager : MonoBehaviour
{
    [SerializeField]
    public Text text;

    void appendToText(string line) { text.text += line + "\n"; }

    /*
    void PrintPointCount(string pointCount)
    {
        appendToText( "PointCount: " + pointCount.ToString());
    }
    */


    void Start()
    {
        GetRouteData();    
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
            //pointCount = overrideActivity.Call<int>("getPointCount");
            text.text = overrideActivity.Call<string>("getPointCount");
        } catch(Exception e)
        {
            appendToText("Exception during showHostMainWindow");
            appendToText(e.Message);
        }        
    }
/*
    void OnGUI()
    {
        GUIStyle style = new GUIStyle("button");
        style.fontSize = 30;        
        
        if (GUI.Button(new Rect(10, 10, 200, 100), "GetPointCount", style)) PrintPointCount();
        if (GUI.Button(new Rect(10, 400, 400, 100), "Unload", style)) Application.Unload();
        if (GUI.Button(new Rect(440, 400, 400, 100), "Quit", style)) Application.Quit();
    }
    */
    
}
