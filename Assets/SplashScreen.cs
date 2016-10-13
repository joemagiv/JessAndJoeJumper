using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class SplashScreen : MonoBehaviour {

	// Use this for initialization
	void Start () {
		Invoke ("NextLevel", 2f);
	}

	void NextLevel(){
		SceneManager.LoadScene ("scene01");
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
