using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoreWindow : MonoBehaviour
{
    private Text scoreText;
    private Text highscoreText;

    //Find scoreText and highscore, and display the current highscore
    private void Awake()
    {
        scoreText = transform.Find("scoreText").GetComponent<Text>();
        highscoreText = transform.Find("highscoreText").GetComponent<Text>();
        highscoreText.text = "High Score: " + PlayerPrefs.GetInt("highscore").ToString();

    }

    //Update what scoreText displays
    private void Update()
    {
        scoreText.text = "Score: " + Level.GetInstance().GetScore().ToString();
    }
}
