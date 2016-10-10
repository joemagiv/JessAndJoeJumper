using UnityEngine;
using System.Collections;

public class SFXManager : MonoBehaviour {
	
	private AudioSource audioSource;
	
	// Use this for initialization
	void Start () {
		audioSource = GetComponent<AudioSource>();
	}
	
	public void playSound(AudioClip clip){
		audioSource.clip = clip;
		audioSource.Play();
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
