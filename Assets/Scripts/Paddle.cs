using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Paddle : MonoBehaviour {

	public bool autoPlay = false;
	private Ball ball;

	// Use this for initialization
	void Start () {
		ball = GameObject.FindObjectOfType <Ball>();
	}
	
	// Update is called once per frame
	void Update () {
		if (autoPlay == false) {
			MoveWithMouse ();	
		} else {
			AutoPlay ();
		}
	}

	void OnCollisionExit2D(Collision2D collision) {

		Rigidbody2D rigidBodyBall = ball.GetComponent<Rigidbody2D> ();
		rigidBodyBall.velocity = new Vector2 (rigidBodyBall.velocity.x, 10f);
	}

	void MoveWithMouse () {
		// f = use a float
		// V use current y position whatever it is
		Vector2 paddlePos = new Vector2 (0.5f, this.transform.position.y);

		float mousePosInBlocks = ((Input.mousePosition.x / Screen.width) * 18);

		paddlePos.x = Mathf.Clamp(mousePosInBlocks - 2.2f, 0.0f, 15f);

		this.transform.position = paddlePos; // have to use Vector3 to set this or error
	}

//	void MoveWithTouch () {
//		if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Moved)
//		{
//			// Get movement of the finger since last frame
//			Vector2 touchDeltaPosition = Input.GetTouch(0).deltaPosition;
//
//			// Move object across XY plane
//			transform.Translate(-touchDeltaPosition.x * speed, -touchDeltaPosition.y * speed, 0);
//		}
//	}

	void AutoPlay () {
		Vector2 paddlePos = new Vector2 (0.5f, this.transform.position.y);
		Vector2 ballPos = ball.transform.position;
		paddlePos.x = Mathf.Clamp(ballPos.x, 0.0f, 15f);
		this.transform.position = paddlePos; // have to use Vector3 to set th
	}

}
