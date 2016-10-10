using UnityEngine;
using System.Collections;

public class PlayerMovement : MonoBehaviour {

	public float movementSpeed;
	public bool canMoveToRight = true;
	public bool canMoveToLeft = true;
	
	public AudioClip jumpSound;

	private Rigidbody2D rigidBody;
	private SFXManager sfxManager;

	//private Animator anim;

	public Vector2 jumpingForce;

	public bool isJumping;

	private GameController gameController;

	// Use this for initialization
	void Start () {

	//	anim = GetComponent<Animator> ();

		rigidBody = GetComponent<Rigidbody2D> ();
		gameController = FindObjectOfType<GameController> ().GetComponent<GameController> ();
		sfxManager = FindObjectOfType<SFXManager>().GetComponent<SFXManager>();
	}

	private void moveToRight(){
		if (canMoveToRight) {
				Vector3 newScale = new Vector3 (1, 1, 1);
				transform.localScale = newScale;
				Vector3 newPosition = new Vector3 (transform.position.x + (movementSpeed * 2), transform.position.y, transform.position.z);
				transform.position = newPosition;
		}
	}

	private void moveToLeft(){
		if (canMoveToLeft) {
				Vector3 newScale = new Vector3 (-1, 1, 1);
				transform.localScale = newScale;
				Vector3 newPosition = new Vector3 (transform.position.x - (movementSpeed*2), transform.position.y, transform.position.z);
				transform.position = newPosition;

		}
	}

	private void Jump(){
		rigidBody.AddForce (jumpingForce);
		sfxManager.playSound(jumpSound);
	}



	void OnTriggerEnter2D(Collider2D other) {


	}


	void OnTriggerExit2D(Collider2D other) {

	}
		

	// Update is called once per frame
	void Update () {

		if (isJumping) {
			if (rigidBody.velocity.y == 0) {
				isJumping = false;
			} 
		}
		 
		if (Input.GetAxis ("Horizontal") > 0) {
			moveToRight ();
		}
		if (Input.GetAxis ("Horizontal") < 0) {
			moveToLeft ();
		} 

		if (Input.GetAxis ("Horizontal") == 0) {

		}

		if (Input.GetButtonDown ("Jump")) {
			if (!isJumping) {
				Debug.Log ("Jumping");
				isJumping = true;
				Jump ();
				if (!gameController.gameHasStarted) {
					gameController.gameHasStarted = true;
				}

			}
		}
			



	}
		


}
