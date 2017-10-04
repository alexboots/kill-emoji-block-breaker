using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ball : MonoBehaviour {

	public Paddle paddle;
	private Vector3 paddleToBallVector;
	private bool hasStarted = false;
	private AudioSource audio;

	// Use this for initialization
	void Start () {
		// We define the paddle here so it is programatically linked to the var
		paddle = GameObject.FindObjectOfType <Paddle>();
		paddleToBallVector = this.transform.position - paddle.transform.position;

		// <> is like a filter - only one in the game
	}
	
	// Update is called once per frame
	void Update () {

		if (Input.GetMouseButton (0) && !hasStarted) {
			hasStarted = true;
			this.GetComponent<Rigidbody2D> ().velocity = new Vector2 (3f, 10f);

		}

		if (!hasStarted) {
			this.transform.position = paddle.transform.position + paddleToBallVector;
		}

	}

	void OnCollisionExit2D(Collision2D Collision) {

		Vector2 tweak = new Vector2 (Random.Range(0f, 0.2f), Random.Range(0f, 0.2f));

		audio = this.GetComponent<AudioSource>();
		if (hasStarted) {
			// This will add a random lil bit of velocity to the X and Y directions so it doesn't get stuck being boring
			this.GetComponent<Rigidbody2D> ().velocity += tweak;
			audio.Play ();
		}
	}
}
