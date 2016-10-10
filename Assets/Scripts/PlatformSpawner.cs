using UnityEngine;
using System.Collections;

public class PlatformSpawner : MonoBehaviour {

	public GameObject[] platformGroups;

	// Use this for initialization
	void Start () {
	
	}

	public void SpawnPlatforms(){
		GameObject groupOfPlatform = Instantiate(platformGroups[Random.Range(0,platformGroups.Length)], transform.position, Quaternion.identity, transform) as GameObject;
		groupOfPlatform.transform.parent = null;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
