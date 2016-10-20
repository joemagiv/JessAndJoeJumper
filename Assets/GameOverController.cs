using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;
using System.IO;

public class GameOverController : MonoBehaviour {
	
	public Text text;
	public Text scoreText;

	private CaptureAndSave capture;

	private SFXManager sfxManager;
	
	//public float textDelay;
	public GameObject playAgainButton;
	private DeviceCamera deviceCamera;
	private LevelController levelController;

	public AudioClip beep;
	public AudioClip cameraSound;
	
	// Use this for initialization
	void Start () {
		capture = FindObjectOfType<CaptureAndSave> ().GetComponent<CaptureAndSave> ();
		deviceCamera = FindObjectOfType<DeviceCamera>().GetComponent<DeviceCamera>();
		levelController = FindObjectOfType<LevelController> ().GetComponent<LevelController> ();
		sfxManager = FindObjectOfType<SFXManager> ().GetComponent<SFXManager> ();
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
		sfxManager.playSound (beep);

		text.text = "3";
		Invoke("Countdown2",0.5f);
		
	}
	
	void Countdown2(){
		sfxManager.playSound (beep);

		text.text = "2";
		Invoke("Countdown1",0.5f);

	}
	
	void Countdown1(){
		sfxManager.playSound (beep);

		text.text = "1";
		Invoke("CountdownSmile",0.5f);
		
	}
	
	void CountdownSmile(){
		text.text = "Smile!";
		sfxManager.playSound (cameraSound);

		Invoke("TakePicture",2f);
		
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

		if (PlayerPrefsManager.GetCurrentScore() >= PlayerPrefsManager.GetHighScore()) {
			return "HIGH SCORE!\n";
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
