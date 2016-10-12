using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class GameOverController : MonoBehaviour {
	
	public Text text;
	
	//public float textDelay;
	public GameObject playAgainButton;
	
	// Use this for initialization
	void Start () {
		Debug.Log(Application.persistentDataPath);
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
		Application.CaptureScreenshot(Application.persistentDataPath + "Screenshot.png");
		Invoke("PlayAgainActive", 2f);
	}
	
	public void PlayAgainActive(){
		playAgainButton.SetActive(true);
		
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
