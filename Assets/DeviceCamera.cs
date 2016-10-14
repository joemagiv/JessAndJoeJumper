using UnityEngine;
using System.Collections;
using System.IO;

public class DeviceCamera : MonoBehaviour {

	private WebCamDevice[] devices;
	private WebCamTexture webcamTexture;
	private string frontCamName;

	// Use this for initialization
	void Start () {
		devices = WebCamTexture.devices;
		frontCamName = devices[0].name;
		webcamTexture = new WebCamTexture(frontCamName);
		Renderer renderer = GetComponent<Renderer>();
		renderer.material.mainTexture = webcamTexture;
		webcamTexture.Play();
	
	}
	
	public void Pause(){
		webcamTexture.Pause();
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
