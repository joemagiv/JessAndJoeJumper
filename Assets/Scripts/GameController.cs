using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class GameController : MonoBehaviour {

	public GameObject camera;

	public bool gameHasStarted;

	public float platformSpeed;
	public float score;
	public Text scoreText;
	public Text highScoreText;

	public float gameTimer;

	public float timeToNextLevel;

	public GameObject instructionsObject;
	
	
	


	// Use this for initialization
	void Start () {
		PlayerPrefsManager.InitializeHighScore();
		PlayerPrefsManager.SetCurrentScore(0);
		highScoreText.text = "High Score: " + PlayerPrefsManager.GetHighScore();
	
	}

	// Update is called once per frame
	void Update () {
		if (gameHasStarted) {
			gameTimer += Time.deltaTime;
			instructionsObject.SetActive (false);
		}

		if (gameTimer > timeToNextLevel) {
			gameTimer = 0f;
			platformSpeed += platformSpeed;

		}

		score = camera.transform.position.y * 1.5f;
		scoreText.text = "Score: " + score.ToString ("0");

	}
	
	public void GameOverCheckHighScore(){
		PlayerPrefsManager.SetCurrentScore(Mathf.FloorToInt(score));
		PlayerPrefsManager.CheckSetHighScore(Mathf.FloorToInt(score));
	}
}
