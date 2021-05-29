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
    int chooseLevel;
    int gameWindowBegin = 1;
    int levelOne = 0;
    int levelTwo = 0;
    int levelOneCompleted = 0;
    int levelOnePlayerName = 0;
    int newScore = 0;
    int ScoreBoard = 0;
    int gameOver = 0;
    int gameOver1 = 0;
    int levelTwoCompleted = 0;
    TTF_Font *font;
    SDL_Color color;
    TTF_Font *levelTwofont;
    SDL_Color levelTwocolor;

} Variables;