using UnityEngine;
using System.Collections;

public class PlayerPrefsManager : MonoBehaviour {

	const string MASTER_VOLUME_KEY = "master_volume";
	const string HIGH_SCORE = "high_score";
	const string CURRENT_SCORE = "current_score";
	
	//Setting the volume
	public static void SetMasterVolume (float volume){
		if (volume > 0f && volume < 1f){
		PlayerPrefs.SetFloat (MASTER_VOLUME_KEY, volume);
		} else {
			Debug.LogError ("Master volume out of range");
		}
	}
	
	public static void InitializeHighScore(){
		if (PlayerPrefs.GetInt(HIGH_SCORE) == null){
			PlayerPrefs.SetInt(HIGH_SCORE, 0);
		}
	}
	
	public static int GetHighScore(){
		return PlayerPrefs.GetInt(HIGH_SCORE);
	}
	
	
	public static void CheckSetHighScore(int playerScore){
		if (playerScore > PlayerPrefs.GetInt(HIGH_SCORE)){
			PlayerPrefs.SetInt(HIGH_SCORE, playerScore);
		}
	}
	
	public static int GetCurrentScore(){
		return PlayerPrefs.GetInt(CURRENT_SCORE);
	}
	
	public static void SetCurrentScore(int playerScore){
		PlayerPrefs.SetInt(CURRENT_SCORE, playerScore);
	}
	
	
	public static float GetMasterVolume(){
		return PlayerPrefs.GetFloat (MASTER_VOLUME_KEY);
	}
	
	//Unlocking Levels
	
	
}
