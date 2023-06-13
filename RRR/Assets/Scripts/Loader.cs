using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public static class Loader
{
    //All the scenes in the game
    public enum Scene
    {
        Scene,
        LoadingScene,
        MainMenuScene,
    }

    private static Scene targetScene;

    //When changing scenes, first change to the loader scene to make sure the player knows that the game is not crashing while it's loading a new scene
    public static void Load(Scene scene)
    {
        SceneManager.LoadScene(Scene.LoadingScene.ToString());

        targetScene = scene;
    }

    public static void LoadTargetScene()
    {
        SceneManager.LoadScene(targetScene.ToString());
    }
}
