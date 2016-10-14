using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;


public class LevelController : MonoBehaviour {
	
	private MusicManager musicManager;
	private GameController gameController;
	
	public AudioClip gameOverSound;
	
	// Use this for initialization
	void Start () {
		musicManager = FindObjectOfType<MusicManager>().GetComponent<MusicManager>();
		if (FindObjectOfType<GameController>()){
			gameController = FindObjectOfType<GameController>().GetComponent<GameController>();
		}
	}
	

	public void PlayAgain(){
		SceneManager.LoadScene ("scene01");
	}

	void OnTriggerEnter2D(Collider2D other) {
		if (other.tag == "Player") {
			musicManager.playSound(gameOverSound);
			Invoke("GameOver", 4f);
		}
	}
	
	private void GameOver(){
		gameController.GameOverCheckHighScore();
		SceneManager.LoadScene ("scene02-gameOver");
		
		
	}

	public void ReturnToSplash(){
		SceneManager.LoadScene ("Scene00");

	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
