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
        lineRenderer.SetWidth(2f, 2f);
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
        int idx = -1;
        float nowLatitude = latitudeList[0];
        float nowLongitude = longitudeList[0];
        for (int i = 0; i < pointCount; i++)
        {
            GameObject sphereObj = Instantiate(spherePrefab, parent); 
            ChangeObjectPosition(sphereObj, nowLatitude, nowLongitude, latitudeList[i], longitudeList[i]);
            idx++;
            nowLatitude = latitudeList[idx];
            nowLongitude = longitudeList[idx];

            objPositionList.Add(sphereObj.transform.position);   
        }
    }

    public void ChangeObjectPosition(GameObject obj, float nowLatitude, float nowLongitude, float nextLatitude, float nextLongitude)
    {    
        // 다음 목적지 - 현위치 = 유니티에서의 목적지
        float destinationLatitude = nextLatitude - nowLatitude;
        float destinationLongitude = nextLongitude - nowLongitude;

        Vector3 destination = new Vector3(destinationLongitude, 0, destinationLatitude);

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
