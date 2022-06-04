using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineManager : MonoBehaviour
{
    [SerializeField]
    RouteManager routeManager;

    [SerializeField]
    GameObject spherePrefab;
    [SerializeField]
    Transform parent;

    LineRenderer lineRenderer;

    List<float> latitudeList = new List<float>();
    List<float> longitudeList  = new List<float>();
    List<Vector3> objPositionList = new List<Vector3>();


    int pointCount;

    void Awake()
    {
        routeManager = routeManager.GetComponent<RouteManager>();
        lineRenderer = this.GetComponent<LineRenderer>();
        lineRenderer.SetWidth(0.05f, 0.05f);
    }


    void Start()
    {
        
    }

    public void DrawLine()
    {
        Debug.Log("Draw Line");
        pointCount = routeManager.GetPointCount();
        Debug.Log("pointCount: " + pointCount);

        lineRenderer.positionCount = pointCount;
        Debug.Log("positionCount: " + lineRenderer.positionCount);

        latitudeList = routeManager.latitudeList;
        longitudeList = routeManager.longitudeList;

        CreateObjects();
        SetPointPosition();
    }

    void CreateObjects()
    {
        Debug.Log("Create Objects");
        
        float nowLatitude = latitudeList[0];
        float nowLongitude = longitudeList[0];
        
        for (int i = 0; i < pointCount; i++)
        {
            GameObject sphereObj = Instantiate(spherePrefab, parent); 
            ChangeObjectPosition(sphereObj, nowLatitude, nowLongitude, latitudeList[i], longitudeList[i]);           

            objPositionList.Add(sphereObj.transform.position);   
        }
    }

    public void ChangeObjectPosition(GameObject obj, float nowLatitude, float nowLongitude, float nextLatitude, float nextLongitude)
    {    
        // 언더플로우 방지를 위한 값 수정
        /*
        nextLatitude = Mathf.Round(nextLatitude * 10000000) * 0.00000001f; 
        nextLongitude = Mathf.Round(nextLongitude * 10000000) * 0.00000001f; 
        nowLatitude = Mathf.Round(nowLatitude * 10000000) * 0.00000001f; 
        nowLongitude = Mathf.Round(nowLongitude * 10000000) * 0.00000001f; 
        */

        // 다음 목적지 - 현위치 = 유니티에서의 목적지
        float destinationLatitude = nextLatitude - nowLatitude;
        float destinationLongitude = nextLongitude - nowLongitude;

        Vector3 destination = new Vector3(destinationLongitude * 10000, -5f, destinationLatitude * 10000);

        // 오브젝트 위치 이동
        //obj = obj.GetComponent<GameObject>();
        obj.transform.position = parent.position + destination;       
    }
    
    public void SetPointPosition()
    {
        Debug.Log("Set Point Position");
        for(int i = 0; i < objPositionList.Count; i++)
        {
             lineRenderer.SetPosition(i, objPositionList[i]);
        }
    }
}
