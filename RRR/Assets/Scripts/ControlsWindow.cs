using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ControlsWindow : MonoBehaviour
{
    void Start()
    {
        Show();
        Player.GetInstance().OnStartedPlaying += Player_OnStartedPlaying;
    }

    private void Player_OnStartedPlaying(object sender, System.EventArgs e)
    {
        Hide();
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
