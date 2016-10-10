using UnityEngine;
using System.Collections;

public class Shredder : MonoBehaviour {

	private PlatformSpawner platformSpawner;

	// Use this for initialization
	void Start () {
		platformSpawner = FindObjectOfType<PlatformSpawner> ().GetComponent<PlatformSpawner> ();
	}

	void OnTriggerEnter2D(Collider2D other) {
		Debug.Log ("Shredder entered by" + other.name);
		if (other.GetComponent<EndOfPlatform> ()) {
			platformSpawner.SpawnPlatforms ();
		} 
		Destroy (other.gameObject);
	}



	// Update is called once per frame
	void Update () {
	
	}
}
