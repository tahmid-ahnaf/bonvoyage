typedef struct
{
    SDL_Renderer *rend;
    SDL_Window *window;
} App;

typedef struct
{

    struct component
    {
        SDL_Surface *surface;
        SDL_Texture *tex;
        SDL_Rect rect;
        

    } sky, birds, mountains, trees, game_title, newgame, controls, details,
        levelOneButton, levelTwoButton, back, treeshade, track, character, characterFramePosition,
        score, highScore, scoreText, highScoreText, clouds, moon, sun, coins[4], box, character2, character2Position, level2Coin, rotatingcoin, level2Coin2, invisibleborder, bomb,explosion, plane, coin_point_popup, heart, rotatingheart, lifebonuspopup,lifescoredisplay,lifeheartdisplay, lifescorertext;

} Windows;

typedef struct
{

    struct levelOne
    {
        int characterFramewidth, characterFrameheight;
        int characterTexturewidth, characterTextureheight;

        float characterFrametime = 0;
        int characterPrevtime = 0;
        int characterCurrentime = 0;
        float characterDeltatime = 0.0;
        float moveSpeed = 300.0f;

        int highScore;
        char scoreString[256];
        char highScoreString[256];
        TTF_Font *font;
        SDL_Color color;
        int space = 0;
        int currentScore = 0;

        float characterXposition = WINDOW_WIDTH / 2 - 100,
              characterYposition = 700;

        int characterJumpCurrenttime, characterJumpPrevtime = 0;
        float characterJumpDeltatime = 0.0, characterJumpFrametime = 0.0;

    } levelOneVars;

    struct levelTwo
    {
        int CHARACTER2_FRAME_WIDTH, CHARACTER2_FRAME_HEIGHT;
        int CHARACTER2_TEXTURE_WIDTH, CHARACTER2_TEXTURE_HEIGHT;

        float character2Frametime = 0;
        int character2Prevtime = 0;
        int character2Currentime = 0;
        float character2Deltatime = 0.0;
        float moveSpeed = 300.0f;

        // float characterXposition = 100, characterYposition = 700;

        float BOX_X_POS = (float)WINDOW_WIDTH / 2 + 200;
        float BOX_Y_POS = (float)WINDOW_HEIGHT / 2 - 200;

        float CHARACTER2_X_POS = (float)100;
        float CHARACTER2_Y_POS = (float)700;
        int rectx, recty;
        int COIN_TEXTURE_HEIGHT, COIN_TEXTURE_WIDTH;
        int RANDOM_GENERATOR;
        int DELAY_COUNT_FOR_POINT_POPUP=0, DELAY_COUNT_FOR_HEARTS =0, DELAY_COUNT_FOR_LIFE_RECT_CHANGE=0, DELAY_COUNT_FOR_EXPLOSION=0, DELAY_COUNT_FOR_CHARACTER_COLLISION_EFFECT =0;
        int HEART_TEXTURE_WIDTH, HEART_TEXTURE_HEIGHT;
        int CURRENT_LIFE =100;
        int LIFE_PERCENTAGE = 0;
        char LIFE_STRING[256] = {'0'};
        int highScore;
        int currentScore = 0;
        char scoreString[256];
        char highScoreString[256];
        SDL_Color color = {255, 255, 255};
        Mix_Music *background;
        Mix_Music *coingain ;
        Mix_Music *explosionsound;
        Mix_Music *jumpsound ;
        Mix_Music *pointgainsound;

        TTF_Font *font;
        int isspaceclicked=0;
        int iflifeatstake = 0;

    } levelTwoVars;

    struct animationSpeed
    {
        struct componenetsSpeed
        {
            float sky = 0.0;
            int mountains = 0.0;
            int treeshade = 0.0;
            int trees = 0.0;
            int track = 0.0;
            int birds = 0.0;
            int clouds = 0.0;
            float BOX_X_POS = (float)WINDOW_WIDTH / 2 + 200;
            float BOX_Y_POS = (float)WINDOW_HEIGHT / 2 - 200;

        } welcomeWindow, newGameWindow, levelOneWindow, levelTwoWindow;
    } AnimationSpeed;

    int chooseLevel;
    int gameWindowBegin;
    int levelOne;
    int levelTwo;

} Variables;