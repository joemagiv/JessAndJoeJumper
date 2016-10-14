using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;
using System.IO;

public class GameOverController : MonoBehaviour {
	
	public Text text;
	public Text scoreText;

	private CaptureAndSave capture;
	
	//public float textDelay;
	public GameObject playAgainButton;
	private DeviceCamera deviceCamera;
	private LevelController levelController;
	
	// Use this for initialization
	void Start () {
		capture = FindObjectOfType<CaptureAndSave> ().GetComponent<CaptureAndSave> ();
		deviceCamera = FindObjectOfType<DeviceCamera>().GetComponent<DeviceCamera>();
		levelController = FindObjectOfType<LevelController> ().GetComponent<LevelController> ();
		Debug.Log(Application.persistentDataPath);
		scoreText.gameObject.SetActive(false);
		playAgainButton.SetActive(false);
		Invoke("CountdownReady",1f);
		
	}
	
	void CountdownReady(){
		text.text = "Game Over!";
		Invoke("Countdown3",1f);
	}
	
	void Countdown3(){
		text.text = "3";
		Invoke("Countdown2",1f);
		
	}
	
	void Countdown2(){
		text.text = "2";
		Invoke("Countdown1",1f);
		
	}
	
	void Countdown1(){
		text.text = "1";
		Invoke("CountdownSmile",1f);
		
	}
	
	void CountdownSmile(){
		text.text = "Smile!";
		Invoke("TakePicture",1f);
		
	}
	
	public void TakePicture(){
		text.text = "";
		scoreText.gameObject.SetActive(true);
		scoreText.text = CheckForHighScore() + "Score: " + PlayerPrefsManager.GetCurrentScore().ToString();
		deviceCamera.Pause();
		capture.CaptureAndSaveToAlbum (ImageType.JPG);
		//Application.CaptureScreenshot(Application.persistentDataPath + "Screenshot" + System.DateTime.Now.ToString("hhmmss") + ".png");
		Invoke("PlayAgainActive", 2f);
	}

	private string CheckForHighScore(){

		if (PlayerPrefsManager.GetCurrentScore() == PlayerPrefsManager.GetHighScore()) {
			return "High Score!\n";
		} else {
			return "";
		}
	}
	
	public void PlayAgainActive(){
		playAgainButton.SetActive(true);
		Invoke ("PlayAgainTimeout", 15f);
	}

	public void PlayAgainTimeout(){
		levelController.ReturnToSplash ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
