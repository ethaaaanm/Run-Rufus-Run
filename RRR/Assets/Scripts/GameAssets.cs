using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//This class is used to easily call transforms into other scripts
public class GameAssets : MonoBehaviour
{
    //Setup instance to share with other scripts
    private static GameAssets instance;       
    
    public static GameAssets GetInstance()
    {
        return instance;
    }

    private void Awake()
    {
        instance = this;
    }

    //Add transforms you want to reference here to use in other scripts
    //When written like it is below, slots in the GameAssets GameObject will appear
    //where you have to drag your prefab into it to reference it
    public Transform pfPlatform;
    public Transform pfVirus;
    public Transform pfVirusEmpty;
    public Transform pfVax;
}
