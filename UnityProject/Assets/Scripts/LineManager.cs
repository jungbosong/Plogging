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
    GameObject slimePrefab;
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
        lineRenderer.SetWidth(4f, 4f);
        //lineRenderer.startColor = Color.blue; 
        //lineRenderer.endColor = Color.blue;
    }

    public void DrawLine()
    {
        pointCount = routeManager.GetPointCount();

        lineRenderer.positionCount = pointCount;

        latitudeList = routeManager.latitudeList;
        longitudeList = routeManager.longitudeList;

        CreateObjects();
        SetPointPosition();
    }

    void CreateObjects()
    {  
        for (int i = 0; i < pointCount; i++)
        {
            GameObject sphereObj = Instantiate(spherePrefab, parent); 
            ChangeObjectPosition(sphereObj, latitudeList[i], longitudeList[i]);           

            objPositionList.Add(sphereObj.transform.position);   
            sphereObj.SetActive(false);
        }

        GameObject slimeObj = Instantiate(slimePrefab, parent);
        ChangeObjectPosition(slimeObj, latitudeList[pointCount-1], longitudeList[pointCount-1]);   
    }

    void ChangeObjectPosition(GameObject obj, float nextLatitude, float nextLongitude)
    {       
        float nowLatitude = latitudeList[0];
        float nowLongitude = longitudeList[0];

        // 다음 목적지 - 현위치 = 유니티에서의 목적지
        float destinationLatitude = nextLatitude - nowLatitude;
        float destinationLongitude = nextLongitude - nowLongitude;

        Vector3 destination = new Vector3(destinationLongitude * 100000, -5f, destinationLatitude * 100000);

        // 오브젝트 위치 이동
        obj.transform.position = parent.position + destination;       
    }
    
    void SetPointPosition()
    {
        for(int i = 0; i < objPositionList.Count; i++)
        {
             lineRenderer.SetPosition(i, objPositionList[i]);
        }
    }
}
