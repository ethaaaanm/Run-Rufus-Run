using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameOverWindow : MonoBehaviour
{
    //Initializing score text
    private Text scoreText;

    private void Awake()
    {
        //Finding score text in the scene
        scoreText = transform.Find("scoreText").GetComponent<Text>();
    }

    void Start()
    {
        //Keep this UI window hidden to start
        Hide();

        //Used to find out if the player has died and already taken the quiz
        QuizWindow.GetInstance().OnGameOver += QuizWindow_OnGameOver;
    }

    //If the player has died and already taken the quiz then this window will be shown and the updated score would be displayed
    private void QuizWindow_OnGameOver(object sender, System.EventArgs e)
    {
        scoreText.text = "Score: " + Level.GetInstance().GetScore().ToString();
        Show();
    }

    //Hides the UI when called
    private void Hide()
    {
        gameObject.SetActive(false);
    }

    //Shows the UI when called
    private void Show()
    {
        gameObject.SetActive(true);
    }
}
