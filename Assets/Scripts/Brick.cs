using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Brick : MonoBehaviour {

	public Sprite[] hitSprites;
	public static int breakableCount = 0;
	public AudioClip crack;
	public GameObject smoke;

	private int timesHit;
	private LevelManager levelManager;
	private bool isBreakable;
	private Ball ball;



	void Awake() {
		// If you dont reset this after the player loses, more bricks get added on Start() 
		// 	so you can never win :|
		breakableCount = 0;
	}

	// Use this for initialization
	void Start () {
		timesHit = 0;
		isBreakable = (this.tag == "Breakable");
		ball = GameObject.FindObjectOfType <Ball>();

		// keep brack of breakable bricks
		if (isBreakable) {
			breakableCount++;
		}
		levelManager = GameObject.FindObjectOfType<LevelManager> ();
	}

	void OnCollisionExit2D(Collision2D collision) {
		AudioSource.PlayClipAtPoint (crack, transform.position);		
		if(isBreakable) {
			handleHits ();
		}
	}

	void handleHits () {
		
		int maxHits = hitSprites.Length + 1;
		timesHit ++;


		// Always destroy game object
		if (timesHit >= maxHits) {
			breakableCount--;

			GameObject smokePuff = Instantiate(smoke, gameObject.transform.position, Quaternion.identity);
			Color smokeColor = Color.black;
			smokeColor.a = 0.3f;
			smokePuff.GetComponent<ParticleSystem> ().startColor = smokeColor;


			Destroy (gameObject);
			levelManager.BrickDestroyed ();
		} else {
			LoadSprites ();
		}

		Rigidbody2D rigidBodyBall = ball.GetComponent<Rigidbody2D> ();

		// If ball is slow, speed it up
		if (Mathf.Abs(rigidBodyBall.velocity.x) <= 3) {
			if (rigidBodyBall.velocity.x <= 0) {
				rigidBodyBall.velocity = new Vector2 (rigidBodyBall.velocity.x - 5f, rigidBodyBall.velocity.y);
			} else if (rigidBodyBall.velocity.x >= 0) {
				rigidBodyBall.velocity = new Vector2 (rigidBodyBall.velocity.x + 5f, rigidBodyBall.velocity.y);
			}
		}

		if (Mathf.Abs(rigidBodyBall.velocity.y) <= 3) {
			if (rigidBodyBall.velocity.y <= 0) {
				rigidBodyBall.velocity = new Vector2 (rigidBodyBall.velocity.x, rigidBodyBall.velocity.y - 5f);
			} else if (rigidBodyBall.velocity.x >= 0) {
				rigidBodyBall.velocity = new Vector2 (rigidBodyBall.velocity.x, rigidBodyBall.velocity.y + 5f);
			}
		}
	}

	void LoadSprites () {
		int spriteIndex = timesHit - 1;
		if(hitSprites[spriteIndex]) { // if sprite exists at this index load it otherwise use whats there
			this.GetComponent<SpriteRenderer> ().sprite = hitSprites [spriteIndex];
		}
	}
}
