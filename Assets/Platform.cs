using UnityEngine;
using System.Collections;

public class Platform : MonoBehaviour {

//	public float platformSpeed;

	private GameController gameController;

	// Use this for initialization
	void Start () {
		gameController = FindObjectOfType<GameController> ().GetComponent<GameController> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (gameController.gameHasStarted) {
			transform.Translate (Vector3.down * gameController.platformSpeed);
		}
	}
}
