using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using MiniJSON;

public class ReadJson : MonoBehaviour
{
	void Start() 
	{
		Load();	
	}
	public void Load()
	{
		string path = "Assets/Scripts/SampleJson.json";
		string json = File.ReadAllText(path);

		Debug.Log(json);
		
		// json 내용을 딕셔너리로 변환하기 위해 필요한 변수 초기화
		var feature = new Dictionary<string, object>();
		var geometry = new Dictionary<string, object>();
		var list = new List<object>();
		double[] pointCoordinates = new double[2];
		double[,] lineCoordinates = new double[2,2];
		
		// json 내용을 딕셔너리로 변환
		var featureCollection = Json.Deserialize(json) as Dictionary<string, object>;
		List<object> features = new List<object>();
		features  = (List<object>)featureCollection["features"];
		
		// 각 객체의 내용 저장 (properties 객체 내용 저장은 생략)
		for(int i = 0; i < features.Count; i++)
		{
			feature = features[i] as Dictionary<string, object>;
			Debug.Log(feature);
			geometry = feature["geometry"] as Dictionary<string, object>;
			list = (List<object>)geometry["coordinates"];

			if(geometry["type"].ToString() == "Point")
			{
				Debug.Log(geometry["type"]);
				pointCoordinates[0] = (double)list[0];
				Debug.Log(pointCoordinates[0]);
				pointCoordinates[1] = (double)list[1];
				Debug.Log(pointCoordinates[1]);
			}
			else
			{
				// 이차원 배열로 읽어오기
				for(int row = 0; row <2; row++)
				{	            
					var items = (List<object>)list[row];
					for(int col = 0; col <2; col++)
					{
						lineCoordinates[row, col] = (double)items[col];
						Debug.Log(lineCoordinates[row,col]);
					}
				}
			}
		}
	}
}
