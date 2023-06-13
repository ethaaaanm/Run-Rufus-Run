using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class QuizCorrect : MonoBehaviour
{
    //Initialize texts to be update later
    private Text scoreText;
    private Text quizAnswerText;

    private void Awake()
    {
        //Finding the text objects
        scoreText = transform.Find("scoreText").GetComponent<Text>();
        quizAnswerText = transform.Find("quizAnswerText").GetComponent<Text>();
    }

    //Starting with the window hidden and waiting to see if the player gets the quiz question correct
    void Start()
    {
        Hide();
        QuizWindow.GetInstance().OnCorrect += QuizWindow_OnCorrect;
    }

    //If they got the question correct then show this window, and write the current score and answer
    private void QuizWindow_OnCorrect(object sender, System.EventArgs e)
    {
        scoreText.text = "Score: " + Level.GetInstance().GetScore().ToString();
        quizAnswerText.text = "Correct Answer: " + QuizWindow.GetInstance().getAnswer();
        Show();
    }

    //Function used to hide this window
    private void Hide()
    {
        gameObject.SetActive(false);
    }

    //Function used to show this window
    private void Show()
    {
        gameObject.SetActive(true);
    }
}
