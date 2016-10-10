using UnityEngine;
using System.Collections;

public class WebcamAuth : MonoBehaviour {

	// Use this for initialization
	IEnumerator Start() {
		yield return Application.RequestUserAuthorization(UserAuthorization.WebCam | UserAuthorization.Microphone);
		if (Application.HasUserAuthorization(UserAuthorization.WebCam | UserAuthorization.Microphone)) {
		} else {
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
