using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class QuizWindow : MonoBehaviour
{
    //Initializing the Text that are to be adjusted
    private Text scoreText;
    public Text Ans1Text;
    public Text Ans2Text;
    public Text Ans3Text;
    public Text Ans4Text;
    public Text Question;
    public Text QuizHospitalText;
    private string ANSWER;  

    //Initializing bools used to see which button is the correct answer
    private bool Ans1Correct;
    private bool Ans2Correct;
    private bool Ans3Correct;
    private bool Ans4Correct;

    //Initializing events used to control other scripts
    public event EventHandler OnCorrect;
    public event EventHandler OnIncorrect;
    public event EventHandler OnGameOver;

    private State state;

    //Defining states
    private enum State
    {
        TakingQuiz,
        CorrectAnswer,
        IncorrectAnswer,
    }

    private static QuizWindow instance;

    //Getting instance so it can share information with other scripts
    public static QuizWindow GetInstance()
    {
        return instance;
    }

    //Initial settings when loaded
    private void Awake()
    {
        instance = this;

        state = State.TakingQuiz;

        scoreText = transform.Find("scoreText").GetComponent<Text>();
    }

    //Chooses a question from a list of questions based on an input
    //Also sets which button is the correct answer to the question
    private void QuizQuestion(int question)
    {
        if(question == 0)
        {
            Question.text = "What is the best form of face protection for COVID-19?";
            Ans1Text.text = "Cloth Masks";
            Ans2Text.text = "Procedural Masks";
            Ans3Text.text = "Face Shield";
            Ans4Text.text = "Surgical Mask (N95)";
            SetQuizAns(4);
        }
        else if(question == 1)
        {
            Question.text = "Which blood type is the most susceptible to COVID-19?";
            Ans1Text.text = "Type A";
            Ans2Text.text = "Type B";
            Ans3Text.text = "Type AB";
            Ans4Text.text = "Type O";
            SetQuizAns(1);
        }
        else if (question == 2)
        {
            Question.text = "What does the “19” in “COVID-19” refer to?";
            Ans1Text.text = "There are 19 variants of the coronavirus.";
            Ans2Text.text = "There are 19 symptoms of coronavirus disease.";
            Ans3Text.text = "This is the 19th coronavirus pandemic.";
            Ans4Text.text = "Coronavirus & the disease it causes were identified in 2019.";
            SetQuizAns(4);
        }
        else if (question == 3)
        {
            Question.text = "Effective hand sanitizer contains at least this percentage of alcohol";
            Ans1Text.text = "30%";
            Ans2Text.text = "45%";
            Ans3Text.text = "60%";
            Ans4Text.text = "80%";
            SetQuizAns(3);
        }
        else if (question == 4)
        {
            Question.text = "Which of these is not a common COVID - 19 symptom?";
            Ans1Text.text = "Blurred vision";
            Ans2Text.text = "A cough";
            Ans3Text.text = "Unusual fatigue";
            Ans4Text.text = "Fever";
            SetQuizAns(1);
        }
    }

    //This function is used to set which button is the correct answer based on an input
    private void SetQuizAns(int correctAns)
    {
        Ans1Correct = false;
        Ans2Correct = false;
        Ans3Correct = false;
        Ans4Correct = false;
        if(correctAns == 1)
        {
            Ans1Correct = true;
            ANSWER = Ans1Text.text;
        }
        else if(correctAns == 2)
        {
            Ans2Correct = true;
            ANSWER = Ans2Text.text;
        }
        else if(correctAns == 3)
        {
            Ans3Correct = true;
            ANSWER = Ans3Text.text;
        }
        else if (correctAns == 4)
        {
            Ans4Correct = true;
            ANSWER = Ans4Text.text;
        }
    }

    public string getAnswer()
    {
        return ANSWER;
    }

    //All 4 of these functions are the same just for the different 4 buttons
    //They control what the button does if it is incorrect or correct
    public void ButtonQuizAns1()
    {
        if (Ans1Correct)
        {
            state = State.CorrectAnswer;
            if (OnCorrect != null) OnCorrect(this, EventArgs.Empty);
        }
        else
        {
            state = State.IncorrectAnswer;
            if (OnIncorrect != null) OnIncorrect(this, EventArgs.Empty);
        }
    }
    public void ButtonQuizAns2()
    {
        if (Ans2Correct)
        {
            state = State.CorrectAnswer;
            if (OnCorrect != null) OnCorrect(this, EventArgs.Empty);
        }
        else
        {
            state = State.IncorrectAnswer;
            if (OnIncorrect != null) OnIncorrect(this, EventArgs.Empty);
        }
    }
    public void ButtonQuizAns3()
    {
        if (Ans3Correct)
        {
            state = State.CorrectAnswer;
            if (OnCorrect != null) OnCorrect(this, EventArgs.Empty);
        }
        else
        {
            state = State.IncorrectAnswer;
            if (OnIncorrect != null) OnIncorrect(this, EventArgs.Empty);
        }
    }
    public void ButtonQuizAns4()
    {
        if (Ans4Correct)
        {
            state = State.CorrectAnswer;
            if (OnCorrect != null) OnCorrect(this, EventArgs.Empty);
        }
        else
        {
            state = State.IncorrectAnswer;
            if (OnIncorrect != null) OnIncorrect(this, EventArgs.Empty);
        }
    }

    //Starting with the window hidden and waiting to see if the player hits the roof
    private void Start()
    {
        Hide();
        Player.GetInstance().OnDied += Player_OnDied;
    }

    //If the player hits the roof and they haven't taken the quiz yet this round, then choose and random question and show this window
    //otherwise never show this wondow and immediately redirect to the game over window
    private void Player_OnDied(object sender, System.EventArgs e)
    {
        if (PlayerPrefs.GetInt("quizTaken") == 0)
        {
            System.Random rnd = new System.Random();
            int randQuestion = rnd.Next(5);
            QuizHospitalText.text = "You passed out and woke up really sick in the hospital!";
            QuizQuestion(randQuestion);
            scoreText.text = "Score: " + Level.GetInstance().GetScore().ToString();
            Show();
        }
        else
        {
            state = State.IncorrectAnswer;
            if (OnGameOver != null) OnGameOver(this, EventArgs.Empty);
            Hide();
        }
    }

    //Controlling what each state does
    void Update()
    {
        switch (state)
        {
            default:
            case State.TakingQuiz:
                break;
            case State.CorrectAnswer:
                Hide();
                break;
            case State.IncorrectAnswer:
                Hide();
                break;
        }
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