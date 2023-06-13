using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Level : MonoBehaviour
{
    //Create instance to share values from this script with others
    private static Level instance;

    public static Level GetInstance()
    {
        return instance;
    }

    //Defining some constant variables
    private const float SCREEN_WIDTH = 100f;  //Total is 200 (-100 -> 100),, closest gap in platform to either edge should be at least 30 away
    private const float PLATFORM_HEIGHT = 4.0f;
    private const float VIRUS_HEIGHT = 4.5f;
    private const float VIRUS_WIDTH = 4.5f;
    private const float VAX_HEIGHT = 6.0f;
    private const float VAX_WIDTH = 6.0f;
    private const float GAP_SIZE = 15.0f; //+ 4.7f;  //4.7f is approximately the actual width of the virus
    private const float GAP_VIRUS_POS = (GAP_SIZE / 2) - (VIRUS_WIDTH / 2);
    private const float DESTROY_Y_POSITION = 60.0f; //Top of screen is 50.0f
    private const float SPAWN_Y_POSITION = -60.0f; //Bottom of screen is -50.0f
    private const float PLATFORM_GAP_Y = 30.0f; //Every platform should be a distance of approximately 30 apart
    private const float DIST_Y_POSITION_TO_SPAWN = SPAWN_Y_POSITION + PLATFORM_GAP_Y;
    private float PLATFORM_MOVE_SPEED; //Changes based on amount of platforms spawned

    //Speed of platforms based on level
    private const float pf_speed_easy = 20.0f;
    private const float pf_speed_medium = 25.0f;
    private const float pf_speed_hard = 30.0f;
    private const float pf_speed_impossible = 40.0f;
    private const float pf_speed_adjust = 60.0f;

    //Initializing the list of platforms
    private List<Platform> platformList;

    //Used to keep track of how many total platforms have been spawned
    private int platformsSpawned;

    //Initializing score and difficulty factor
    //Difficulty increases based on platforms spawned by increasing speed of the platforms
    //The score is based on time
    //The difficulty factor is increased based on difficulty level and is multiplied by the score
    private float difficultyFactor;
    private float score;

    private State state;

    //4 different difficulties (change the speed of the platforms based on how many platforms have been spawned)
    //Adjust is for if the character falls too close to the bottom of the screen -> Speeds up platforms to keep player in the screen
    public enum Difficulty
    {
        Easy,
        Medium,
        Hard,
        Impossible,
        Adjust,
    }

    private enum State
    {
        WaitingToStart,
        Playing,
        PlayerDead,
    }

    //Initializing the timers
    private float platformSpawnTimer;
    private float platformSpawnTimerMax;
    private float adjustDifficultyTimerVirus;
    private float adjustDifficultyTimerVirusMax = 1.0f;
    private float adjustDifficultyTimerVax;
    private float adjustDifficultyTimerVaxMax = 1.0f;

    //Initializing initial settings
    private void Awake()
    {
        instance = this;
        platformList = new List<Platform>();
        state = State.WaitingToStart;

        //When this scene is loaded, if "quizTaken" is 0 then start a new game normally,
        //otherwise set the difficulty based on the amount of platforms that were spawned when the player lost the previous round.
        if (PlayerPrefs.GetInt("quizTaken") == 0)
        {
            SetDifficulty(Difficulty.Easy);
        }
        else
        {
            platformsSpawned = PlayerPrefs.GetInt("platformsSpawned");
            SetDifficulty(GetDifficulty());
        }
    }

    //Create initial platform when game starts with no viruses on platforms
    private void Start()
    {
        CreatePlatformGaps(-40f, 40f, -20f, false, false);

        //Finding out when the player started playing, dies, and if they've contacted a vaccine or virus.
        Player.GetInstance().OnDied += Player_OnDied;
        Player.GetInstance().OnStartedPlaying += Player_OnStartedPlaying;
        Player.GetInstance().OnVaxContact += Player_OnVaxContact;
        Player.GetInstance().OnVirusContact += Player_OnVirusContact;
    }

    //If the player comes in contact with a virus the speed is changed to be faster
    private void Player_OnVirusContact(object sender, System.EventArgs e)
    {
        //To keep the platforms spawning at an equal distance when the speed changes, the position of the bottom most platforms must be known
        //Since there are three platforms in a row, increment by 3 so as not to be counting the same row three times
        for (int i = 0; i < platformList.Count; i += 3)
        {
            Platform platform = platformList[i];

            //Find the bottom most platform
            if (platform.GetYPosition() <= DIST_Y_POSITION_TO_SPAWN)
            {
                //platform spawn timer directly controls when the platforms shoud be spawned based on speed to achieve the same distance every time
                //The ideal gap size was determined to be 30 / speed
                //since a virus could be contacted at any point, the typical spawn timer value (30 / speed) is multiplied by the percentage
                //of distance the platform has remaining before another platform should be spawned
                platformSpawnTimer = ((platform.GetYPosition() + PLATFORM_GAP_Y) / (SPAWN_Y_POSITION - DIST_Y_POSITION_TO_SPAWN)) * (30 / pf_speed_adjust);
                break;
            }
        }

        //Adjusting other parameters to ensure the speed change works correctly
        platformSpawnTimerMax = 30 / pf_speed_adjust;
        adjustDifficultyTimerVirus = adjustDifficultyTimerVirusMax;
        SetDifficulty(Difficulty.Adjust);
    }

    //Same concept as when a player contacts a virus, except this time it slows down the platforms
    private void Player_OnVaxContact(object sender, System.EventArgs e)
    {
        for (int i = 0; i < platformList.Count; i+=3)
        {
            Platform platform = platformList[i];

            if (platform.GetYPosition() <= DIST_Y_POSITION_TO_SPAWN)
            {
                platformSpawnTimer = ((platform.GetYPosition() + PLATFORM_GAP_Y) / (SPAWN_Y_POSITION - DIST_Y_POSITION_TO_SPAWN)) * (30 / pf_speed_easy);
                break;
            }
        }
        platformSpawnTimerMax = 30 / pf_speed_easy;
        adjustDifficultyTimerVax = adjustDifficultyTimerVaxMax;
        SetDifficulty(Difficulty.Easy);
    }

    //Change the state when the game is started
    private void Player_OnStartedPlaying(object sender, System.EventArgs e)
    {
        state = State.Playing;
    }

    //When player dies change the state, and save the platforms spawned and score in case they get the quiz correct and continue playing.
    //Also test to see if the players score is the new highscore
    private void Player_OnDied(object sender, System.EventArgs e) 
    {
        state = State.PlayerDead;
        SetPlatformsSpawnedAndScore(platformsSpawned, GetScore());
        TrySetNewHighscore(GetScore());
    }

    //If the quiz hasn't been taken yet save the score and platofrms spawned, otherwise reset them back to zero
    public static void SetPlatformsSpawnedAndScore(int platformsSpawned, int score)
    {
        if(PlayerPrefs.GetInt("quizTaken") == 0)
        {
            PlayerPrefs.SetInt("platformsSpawned", platformsSpawned);
            PlayerPrefs.SetInt("score", score);
            PlayerPrefs.Save();
        }
        else
        {
            PlayerPrefs.SetInt("platformsSpawned", 0);
            PlayerPrefs.SetInt("score", 0);
            PlayerPrefs.Save();
        }
    }

    //If the players score is greater than the current highsore, adjust the highscore
    private static bool TrySetNewHighscore(int score)
    {
        int currentHighscore = PlayerPrefs.GetInt("highscore");
        if (score > currentHighscore)
        {
            // New Highscore
            PlayerPrefs.SetInt("highscore", score);
            PlayerPrefs.Save();
            return true;
        }
        else
        {
            return false;
        }
    }

    //Move and spawn platforms
    private void Update()
    {
        if (state == State.Playing)
        {
            HandlePlatformMovement();
            HandlePlatformSpawning();
        }
        
    }

    private void HandlePlatformSpawning()
    {
        //Countdown from platformSpawnTimerMax until timer reaches zero,
        //then spawn a new layer of platforms and reset the timer
        platformSpawnTimer -= Time.deltaTime;
        adjustDifficultyTimerVax -= Time.deltaTime;
        adjustDifficultyTimerVirus -= Time.deltaTime;

        if (platformSpawnTimer < 0)
        {
            //Reset timer to max
            platformSpawnTimer += platformSpawnTimerMax;

            //Gaps shouldn't be placed anywhere less than -70.0f or greater than 70.0f
            //The left gap shouldn't be any farther right than 30.0f
            float minLeftEdgePos = -70.0f;
            float maxRightEdgePos1 = 30.0f;
            float maxRightEdgePos2 = 70.0f;

            //Randomizing positions for gaps based on criteria above
            float gapPosX1 = Random.Range(minLeftEdgePos, maxRightEdgePos1);
            float gapPosX2 = Random.Range(gapPosX1 + 20.0f, maxRightEdgePos2);

            //Initializing rnd to use below
            System.Random rnd = new System.Random();

            //Creating layer of platforms and viruses based on random gap positions, constant spawn position.
            //Also randomizing which gap in the platform will have a virus, and setting the final value to true
            //to know that this is not the initial start platform, meaning it's possible to have virueses on them.
            CreatePlatformGaps(gapPosX1, gapPosX2, SPAWN_Y_POSITION, rnd.Next(2) == 0, true);
                        
            SetDifficulty(GetDifficulty());
        }
    }

    //Moving the platforms and eventually destroying them based on their position
    private void HandlePlatformMovement()
    {
        for (int i = 0; i < platformList.Count; i++)
        {
            Platform platform = platformList[i];

            //Move platform/viruses upwards in y-direction
            platform.Move(PLATFORM_MOVE_SPEED);

            //Destroy the set of game objects (platform/virus on side of and on top of platform)
            //if its platforms y-position exceeds the constant "DESTROY_Y_POSITION"
            if (platform.GetYPosition() > DESTROY_Y_POSITION)
            {
                // Destroy Platforms/viruses
                platform.DestroySelf();
                platformList.Remove(platform);
                i--;
            }
        }
    }

    //Associating different platform speeds with 4 different difficulties
    private void SetDifficulty(Difficulty difficulty)
    {
        //Directly controls how large the score is
        float factor = 0.5f;

        //30 / platform speed gives a good gap in platform spawn times
        //Difficulty factor is proportional to the speed of the platforms
        switch (difficulty)
        {
            case Difficulty.Easy:
                PLATFORM_MOVE_SPEED = pf_speed_easy;
                platformSpawnTimerMax = 30 / PLATFORM_MOVE_SPEED;
                difficultyFactor = factor * PLATFORM_MOVE_SPEED;
                break;

            case Difficulty.Medium:
                PLATFORM_MOVE_SPEED = pf_speed_medium;
                platformSpawnTimerMax = 30 / PLATFORM_MOVE_SPEED;
                difficultyFactor = factor * PLATFORM_MOVE_SPEED;
                break;

            case Difficulty.Hard:
                PLATFORM_MOVE_SPEED = pf_speed_hard;
                platformSpawnTimerMax = 30 / PLATFORM_MOVE_SPEED;
                difficultyFactor = factor * PLATFORM_MOVE_SPEED;
                break;

            case Difficulty.Impossible:
                PLATFORM_MOVE_SPEED = pf_speed_impossible;
                platformSpawnTimerMax = 30 / PLATFORM_MOVE_SPEED;
                difficultyFactor = factor * PLATFORM_MOVE_SPEED;
                break;

            case Difficulty.Adjust:
                PLATFORM_MOVE_SPEED = pf_speed_adjust;
                platformSpawnTimerMax = 30 / PLATFORM_MOVE_SPEED;
                difficultyFactor = factor * PLATFORM_MOVE_SPEED;
                break;
        }
    }

    //Returning the difficulty level based on the amount of platforms spawned unless player is really close to bottom of the screen -> Adjust
    //platformSpawnTimer needs to be adjusted otherwise there will be a large gap in platforms when switching difficulties
    private Difficulty GetDifficulty()
    {
        if(adjustDifficultyTimerVax > 0)
        {
            platformSpawnTimer = 30 / pf_speed_easy;
            return Difficulty.Easy;
        }
        if (adjustDifficultyTimerVirus > 0)
        {
            platformSpawnTimer = 30 / pf_speed_adjust;
            return Difficulty.Adjust;
        }
        if (GameObject.Find("Player").transform.position.y < -25)
        {
            platformSpawnTimer = 30 / pf_speed_adjust;
            return Difficulty.Adjust;
        }
        if (platformsSpawned >= 45) {
            platformSpawnTimer = 30 / pf_speed_impossible;
            return Difficulty.Impossible;
        }
        if (platformsSpawned >= 30) {
            platformSpawnTimer = 30 / pf_speed_hard;
            return Difficulty.Hard;
        }
        if (platformsSpawned >= 15) {
            platformSpawnTimer = 30 / pf_speed_medium;
            return Difficulty.Medium;
        }
        else
        {
            platformSpawnTimer = 30 / pf_speed_easy;
            return Difficulty.Easy;
        }   
    }

    //Used to create layers of platforms
    private void CreatePlatformGaps(float gapPosX1, float gapPosX2, float yPosition, bool VIRUS_loc, bool Not_First_pf)
    {
        //Solving for the width of all three platforms based on the gap positions
        float platformWidthLeft = SCREEN_WIDTH + gapPosX1 - GAP_SIZE * 0.5f;
        float platformWidthRight = SCREEN_WIDTH - gapPosX2 - GAP_SIZE * 0.5f;
        float platformWidthMiddle = SCREEN_WIDTH * 2 - platformWidthLeft - platformWidthRight - GAP_SIZE * 2;

        //Solving for the xPosition of all the platforms
        float platformXPositionLeft = -SCREEN_WIDTH;
        float platformXPositionMiddle = gapPosX1 + GAP_SIZE * 0.5f;
        float platformXPositionRight = gapPosX2 + GAP_SIZE * 0.5f;

        //Setting limitations for where viruses can spawn on the platforms
        float minLeftEdgePos = -85.0f;
        float maxRightEdgePos = 85.0f;
        float minDistFromPlatformEdge = 10.0f; //how close a virus can spawn to a gap in the platforms

        //Randomizing spawn locations for viruses on platforms based on the above criteria
        float xPositionVirus_pf1 = Random.Range(minLeftEdgePos, gapPosX1 - (GAP_SIZE * 0.5f) - minDistFromPlatformEdge);
        float xPositionVirus_pf2 = Random.Range(gapPosX1 + (GAP_SIZE * 0.5f) + minDistFromPlatformEdge, gapPosX2 - (GAP_SIZE * 0.5f) - minDistFromPlatformEdge);
        float xPositionVirus_pf3 = Random.Range(gapPosX2 + (GAP_SIZE * 0.5f) + minDistFromPlatformEdge, maxRightEdgePos);

        //initializing rnd to use below
        System.Random rnd = new System.Random();

        //Creating left, middle, and right platforms
        //If VIRUS_loc == true, then the virus appears in left gap, otherwise it appears in the right gap
        //If it's not the starting platform layer spawned in and the randomized value is equal to zero then spawn a virus somewhere on the platform
        CreatePlatform(platformWidthLeft, yPosition, platformXPositionLeft, VIRUS_loc, Not_First_pf && rnd.Next(2) == 0, xPositionVirus_pf1); //Left platform
        CreatePlatform(platformWidthMiddle, yPosition, platformXPositionMiddle, VIRUS_loc == false, Not_First_pf && rnd.Next(2) == 0, xPositionVirus_pf2); //Middle platform
        CreatePlatform(platformWidthRight, yPosition, platformXPositionRight, false, Not_First_pf && rnd.Next(2) == 0, xPositionVirus_pf3); //Right platform

        //Updating amount of platforms spawned
        platformsSpawned++;

        //Updating the difficulty (which is based on amount of platforms spawned
        //SetDifficulty(GetDifficulty());
    }

    //Creating a platform: Each platform may or may not have a virus to the right of it and a virus somewhere on top of it
    private void CreatePlatform(float width, float yPosition, float xPosition, bool VIRUS, bool VIRUS_pf, float xPositionVirus_pf)
    {
        //PLATFORM
        //Calling the platform prefab from GameAssets script and positioning it
        Transform platform = Instantiate(GameAssets.GetInstance().pfPlatform);
        platform.position = new Vector3(xPosition, yPosition);
        
        //Adjusting the size of the sprite: Only changing width in this case (constant height)
        SpriteRenderer platformSpriteRenderer = platform.GetComponent<SpriteRenderer>();
        platformSpriteRenderer.size = new Vector2(width, PLATFORM_HEIGHT);

        //Adjusting Box Collider to fit the platform
        BoxCollider2D platformBoxCollider = platform.GetComponent<BoxCollider2D>();
        platformBoxCollider.size = new Vector2(width, PLATFORM_HEIGHT);
        platformBoxCollider.offset = new Vector2(width * 0.5f, 0f);

        //Spawn virus to right of platform if true, otherwise fill the viruses spot in the
        //platform class with an empty game object prefab
        if (VIRUS)
        {
            //Positioning
            Transform virus = Instantiate(GameAssets.GetInstance().pfVirus);
            virus.position = new Vector3(xPosition + width + GAP_VIRUS_POS, yPosition);

            //Adjusting Box Collider
            BoxCollider2D virusBoxCollider = virus.GetComponent<BoxCollider2D>();
            virusBoxCollider.size = new Vector2(VIRUS_WIDTH, VIRUS_HEIGHT);
            virusBoxCollider.offset = new Vector2(VIRUS_WIDTH * 0.5f, 0f);

            //Add viruses to platforms and add everything to the platformList to keep track of them (to move, destroy...)
            AddVirusOnPlatform(width, yPosition, xPosition, VIRUS_pf, xPositionVirus_pf, virus, platform);
        }
        else
        {
            //Setting virus to the empty game object prefab so it has no effect on the player
            Transform virus = Instantiate(GameAssets.GetInstance().pfVirusEmpty);
            virus.position = new Vector3(xPosition + width + 5.0f, yPosition);

            //Add viruses to platforms and add everything to the platformList to keep track of them (to move, destroy...)
            AddVirusOnPlatform(width, yPosition, xPosition, VIRUS_pf, xPositionVirus_pf, virus, platform);
        }

    }

    private void AddVirusOnPlatform(float width, float yPosition, float xPosition, bool VIRUS_pf, float xPositionVirus_pf, Transform virus, Transform platform)
    {
        //Min. required width of platform to have a virus on it
        //(don't want a really small platform to be entirely covered with a virus)
        float min_pf_width = 8 * VIRUS_WIDTH;

        System.Random rnd = new System.Random();
        int virus_or_vax = rnd.Next(2);

        //Virus on platform is VIRUS_pf is true and the platform is wide enough
        if (VIRUS_pf && width > min_pf_width && virus_or_vax == 0)
        {
            //Positioning
            Transform virus_pf = Instantiate(GameAssets.GetInstance().pfVirus);
            virus_pf.position = new Vector3(xPositionVirus_pf, yPosition + PLATFORM_HEIGHT * 1.5f);

            //Adjusting Box Collider
            BoxCollider2D virusBoxCollider = virus_pf.GetComponent<BoxCollider2D>();
            virusBoxCollider.size = new Vector2(VIRUS_WIDTH, VIRUS_HEIGHT);
            virusBoxCollider.offset = new Vector2(VIRUS_WIDTH * 0.5f, 0f);

            //Adding platform, virus on end of platform, and virus on the platform to the platformList to keep track of them (to move, destroy...)
            Platform pf = new Platform(platform, virus, virus_pf);
            platformList.Add(pf);
        }
        else if (VIRUS_pf && width > min_pf_width && virus_or_vax != 0)
        {
            //Positioning
            Transform vax_pf = Instantiate(GameAssets.GetInstance().pfVax);
            vax_pf.position = new Vector3(xPositionVirus_pf, yPosition + PLATFORM_HEIGHT * 1.5f);

            //Adjusting Box Collider
            BoxCollider2D vaxBoxCollider = vax_pf.GetComponent<BoxCollider2D>();
            vaxBoxCollider.size = new Vector2(VAX_WIDTH, VAX_HEIGHT);
            vaxBoxCollider.offset = new Vector2(0f, 0f);

            //Adding platform, virus on end of platform, and virus on the platform to the platformList to keep track of them (to move, destroy...)
            Platform pf = new Platform(platform, virus, vax_pf);
            platformList.Add(pf);
        }
        else
        {
            //Setting virus to the empty game object prefab so it has no effect on the player
            Transform virus_pf = Instantiate(GameAssets.GetInstance().pfVirusEmpty);
            virus_pf.position = new Vector3(xPositionVirus_pf, yPosition + PLATFORM_HEIGHT * 2.0f);

            //Adding platform, virus on end of platform, and virus on the platform to the platformList to keep track of them (to move, destroy...)
            Platform pf = new Platform(platform, virus, virus_pf);
            platformList.Add(pf);
        }
    }

    //Get the current score
    public int GetScore()
    {
        //If the player is about to start a new round set score to zero
        if (state == State.WaitingToStart && PlayerPrefs.GetInt("quizTaken") == 0)
        {
            score = 0;
            return ((int)score);
        }
        //If the player is about to continue a round, set the starting score to the score of the previous round
        if (state == State.WaitingToStart && PlayerPrefs.GetInt("quizTaken") == 1)
        {
            score = PlayerPrefs.GetInt("score");
            return ((int)score);
        }
        //Score is increased based on time, which is multiplied by a scaled difficulty factor based on the speed of the platforms
        if (state == State.Playing)
        {
            score += Time.deltaTime * difficultyFactor;
            return ((int)score);
        }
        else
        {
            return ((int)score);
        }
    }

    //Platform class used to organize all the platforms and viruses
    private class Platform {
        private Transform platformTransform;
        private Transform virusTransform;
        private Transform virusOnPfTransform;

        public Platform(Transform platformTransform, Transform virusTransform, Transform virusOnPfTransform)
        {
            this.platformTransform = platformTransform;
            this.virusTransform = virusTransform;
            this.virusOnPfTransform = virusOnPfTransform;
        }
        
        //Move everything up in the y-direction at same speed when this is called
        public void Move(float PLATFORM_MOVE_SPEED)
        {
            platformTransform.position += new Vector3(0, 1, 0) * PLATFORM_MOVE_SPEED * Time.deltaTime;
            virusTransform.position += new Vector3(0, 1, 0) * PLATFORM_MOVE_SPEED * Time.deltaTime;
            virusOnPfTransform.position += new Vector3(0, 1, 0) * PLATFORM_MOVE_SPEED * Time.deltaTime;
        }

        //Get the y-position of the platform only when this is called
        public float GetYPosition()
        {
            return platformTransform.position.y;
        }

        //Destroy everything when this is called
        public void DestroySelf()
        {
            Destroy(platformTransform.gameObject);
            Destroy(virusTransform.gameObject);
            Destroy(virusOnPfTransform.gameObject);
        }
    }
}
