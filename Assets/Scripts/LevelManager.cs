using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class LevelManager : MonoBehaviour {

	public void ChangeLevel(string name) {
		SceneManager.LoadScene (name);
	}

	public void LoadNextLevel(){
								// next level in build system
		SceneManager.LoadScene (SceneManager.sceneCount + 1);
	}

	public void QuitGame() {
		Application.Quit ();
	}

	public void BrickDestroyed () {
		// This is called from Brick everytime a brick is destroyed from Brick
		if(Brick.breakableCount <= 0) {
			// This logic works to load next level but have only made 1 level so /shrug
			// LoadNextLevel ();

			SceneManager.LoadScene ("Win");
		}
	}

}
