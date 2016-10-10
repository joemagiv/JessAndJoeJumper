using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;


public class LevelController : MonoBehaviour {
	
	private MusicManager musicManager;
	
	public AudioClip gameOverSound;
	
	// Use this for initialization
	void Start () {
		musicManager = FindObjectOfType<MusicManager>().GetComponent<MusicManager>();
	}
	

	public void PlayAgain(){
		SceneManager.LoadScene ("scene01");
	}

	void OnTriggerEnter2D(Collider2D other) {
		if (other.GetComponent<PlayerMovement>()) {
			musicManager.playSound(gameOverSound);
			Invoke("GameOver", 4f);
		}
	}
	
	private void GameOver(){
		SceneManager.LoadScene ("scene02-gameOver");
		
		
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
