using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;


public class LevelController : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}

	public void PlayAgain(){
		SceneManager.LoadScene ("scene01");
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
