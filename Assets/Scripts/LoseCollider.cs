using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoseCollider : MonoBehaviour {

	// Create instance of level manager
	private LevelManager levelManager;
	void OnTriggerEnter2D(Collider2D trigger) {
		levelManager.ChangeLevel("Lose");
	}

	// Use this for initialization
	void Start () {
		levelManager = GameObject.FindObjectOfType <LevelManager>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}




