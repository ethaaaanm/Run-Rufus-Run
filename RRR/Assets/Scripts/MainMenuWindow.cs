using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainMenuWindow : MonoBehaviour
{
    //When the want to play change to the game scene and reset the "quizTaken" value to zero
    public void ButtonPlay()
    {
        PlayerPrefs.SetInt("quizTaken", 0);
        PlayerPrefs.Save();
        Loader.Load(Loader.Scene.Scene);
    }

    //Quit the application on button press
    public void ButtonQuit()
    {
        Application.Quit();
    }

}
