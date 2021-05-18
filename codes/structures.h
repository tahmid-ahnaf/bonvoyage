typedef struct
{
    SDL_Renderer *rend;
    SDL_Window *window;
} App;

typedef struct
{
    SDL_Surface *surface;
    SDL_Texture *tex;
    SDL_Rect rect;
} component;
typedef struct
{

    // struct levelTwo
    // {
    //     int characterFramewidth, characterFrameheight;
    //     int characterTexturewidth, characterTextureheight;

    //     float characterFrametime = 0;
    //     int characterPrevtime = 0;
    //     int characterCurrentime = 0;
    //     float characterDeltatime = 0.0;
    //     float moveSpeed = 300.0f;

    //     float characterXposition = 100, characterYposition = 700;

    // } levelTwoVars;

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

        } welcomeWindow, newGameWindow, levelOneWindow, levelTwoWindow;
    } AnimationSpeed;

    int chooseLevel;
    int gameWindowBegin = 1;
    int levelOne = 0;
    int levelTwo = 0;
    int levelOneCompleted = 0;
    int levelOnePlayerName = 0;
    int newScore = 0;
    int ScoreBoard = 0;
    int gameOver = 0;
    TTF_Font *font;
    SDL_Color color;

} Variables;