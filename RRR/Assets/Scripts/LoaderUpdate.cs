using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoaderUpdate : MonoBehaviour
{
    //When the loading scene is opened, immediately try to open the scene the player requested
    private void Update()
    {
        Loader.LoadTargetScene();
    }
}
