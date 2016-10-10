using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class GameController : MonoBehaviour {

	public GameObject camera;

	public bool gameHasStarted;

	public float platformSpeed;
	public float score;
	public Text scoreText;

	public float gameTimer;

	public float timeToNextLevel;



	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (gameHasStarted) {
			gameTimer += Time.deltaTime;
		}

		if (gameTimer > timeToNextLevel) {
			gameTimer = 0f;
			platformSpeed += platformSpeed;

		}

		score = camera.transform.position.y;
		scoreText.text = "Score: " + score.ToString ("0");

	}
}
