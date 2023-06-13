using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonController : MonoBehaviour
{
    //This class is used to control buttons that don't require specific information from another class
    //(eg. the quiz buttons values change and which button is correct changes as well, so its controlled in quizWindow)

    //Takes you to the main menu
    //Resets the score and platforms spawned for the next round as well as resets "quizTaken" so it knows it's the players first attempt again
    public void ButtonMainMenu()
    {
        PlayerPrefs.SetInt("quizTaken", 0);
        PlayerPrefs.SetInt("platformsSpawned", 0);
        PlayerPrefs.SetInt("score", 0);
        PlayerPrefs.Save();
        Loader.Load(Loader.Scene.MainMenuScene);
    }

    //Same as main menu button except it reloads the game scene instead of going to main menu
    public void ButtonRetry()
    {
        PlayerPrefs.SetInt("quizTaken", 0);
        PlayerPrefs.SetInt("platformsSpawned", 0);
        PlayerPrefs.SetInt("score", 0);
        PlayerPrefs.Save();
        Loader.Load(Loader.Scene.Scene);
    }

    //Also reloads the game scene except it saves "quizTaken" as 1 so the quiz will not be propmted again
    public void ButtonContinuePlaying()
    {
        PlayerPrefs.SetInt("quizTaken", 1);
        PlayerPrefs.Save();
        Loader.Load(Loader.Scene.Scene);
    }
}
