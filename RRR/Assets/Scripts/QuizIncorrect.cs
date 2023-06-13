using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class QuizIncorrect : MonoBehaviour
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

    //Starting with the window hidden and waiting to see if the player gets the quiz question incorrect
    void Start()
    {
        Hide();
        QuizWindow.GetInstance().OnIncorrect += QuizWindow_OnIncorrect;
    }

    //If they got the question incorrect then show this window, and write the current score and answer
    private void QuizWindow_OnIncorrect(object sender, System.EventArgs e)
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
