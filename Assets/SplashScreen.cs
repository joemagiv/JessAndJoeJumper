namespace InControl{
using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class SplashScreen : MonoBehaviour {

	// Use this for initialization
	void Start () {
			ICadeDeviceManager.Active = true;

	}

	public void NextLevel(){
		SceneManager.LoadScene ("scene01");
	}


	
	// Update is called once per frame
	void Update () {
			if (InputManager.ActiveDevice.Action1.IsPressed ||
			    InputManager.ActiveDevice.Action2.IsPressed ||
			    InputManager.ActiveDevice.Action3.IsPressed ||
			    InputManager.ActiveDevice.Action4.IsPressed) {
				SceneManager.LoadScene ("scene01");
			}
	
	}
}
}
