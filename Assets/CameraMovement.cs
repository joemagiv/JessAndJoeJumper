using UnityEngine;
using System.Collections;

public class CameraMovement : MonoBehaviour {

	public GameObject camera;
	public bool playerInTrigger = false;
	public float cameraSpeed;

	// Use this for initialization
	void Start () {
	}

	void OnTriggerEnter2D(Collider2D other) {
		if (other.GetComponent<PlayerMovement>()) {
			Debug.Log ("Player in trigger");
			playerInTrigger = true;
		}
	}

	void OnTriggerExit2D(Collider2D other) {
		if (other.GetComponent<PlayerMovement>()) {
			Debug.Log ("Player leaves trigger");
			playerInTrigger = false;
		}
	}

	
	// Update is called once per frame
	void Update () {
		if (playerInTrigger) {
			camera.transform.Translate (Vector3.up * cameraSpeed);

		}
	}
}
