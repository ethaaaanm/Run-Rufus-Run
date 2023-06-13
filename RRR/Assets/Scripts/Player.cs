using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Possibly update this so that the player movement isn't as choppy...
//also don't allow the player to jump unless in contact with a platform
public class Player : MonoBehaviour
{
    //These get adjusted in the "Player" GameObject
    public float speed = 3.0f;
    public float jump = 50.0f;

    //Initializing events based on the player that need to be shared with other scripts
    public event EventHandler OnDied;
    public event EventHandler OnStartedPlaying;
    public event EventHandler OnVirusContact;
    public event EventHandler OnVaxContact;

    private State state;

    //Defining the three states the player can have
    private enum State
    {
        WaitingToStart,
        Playing,
        Dead,
    }

    //Getting the instance to share information with other scripts
    private static Player instance;

    public static Player GetInstance()
    {
        return instance;
    }

    //Initialize settings when scene is opened
    private void Awake()
    {
        instance = this;
        state = State.WaitingToStart;
        gameObject.transform.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
    }

    //Defining what the player can do based on its state
    void Update()
    {
        switch (state)
        {
            default:
            case State.WaitingToStart:
                //If player pushes the arrow keys then the game starts and the player cans start moving
                if (Input.GetKey(KeyCode.UpArrow) || Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.RightArrow))
                {
                    state = State.Playing;
                    gameObject.transform.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
                    if (OnStartedPlaying != null) OnStartedPlaying(this, EventArgs.Empty);
                }
                break;
            case State.Playing:
                //Defining how the player moves based on the input
                if (Input.GetKey(KeyCode.UpArrow))
                {
                    transform.Translate(Vector2.up * jump * Time.deltaTime);
                }
                if (Input.GetKey(KeyCode.LeftArrow))
                {
                    transform.localScale = new Vector3(1, 1, 1);
                    transform.Translate(Vector2.left * speed * Time.deltaTime);
                }
                else if (Input.GetKey(KeyCode.RightArrow))
                {
                    transform.localScale = new Vector3(-1, 1, 1);
                    transform.Translate(Vector2.right * speed * Time.deltaTime);
                }
                break;
            case State.Dead:
                //When dead make player static
                gameObject.transform.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
                break;
        }        
    }

    private void OnTriggerEnter2D(Collider2D collider)
    {
        //If the player touches the roof or either wall the game change state to dead and update the event for other scripts to know the player died
        if (collider.gameObject.name == "Roof" || collider.gameObject.name == "WallLeft" || collider.gameObject.name == "WallRight")
        {
            state = State.Dead;
            if (OnDied != null) OnDied(this, EventArgs.Empty);
        }

        //If a virus is contacted delete the gameObject and update the event for other scripts to know the player contacted a virus
        if (collider.gameObject.name == "pfVirus(Clone)")
        {
            if (OnVirusContact != null) OnVirusContact(this, EventArgs.Empty);
            collider.gameObject.SetActive(false);
        }

        //If a vaccine is contacted delete the gameObject and update the event for other scripts to know the player contacted a vaccine
        if (collider.gameObject.name == "pfVax(Clone)")
        {
            if (OnVaxContact != null) OnVaxContact(this, EventArgs.Empty);
            collider.gameObject.SetActive(false);
        }
    }
}