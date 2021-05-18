#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>
#include "preprocessors.h"
    extern    int CHARACTER2_FRAME_WIDTH, CHARACTER2_FRAME_HEIGHT;
    extern    int CHARACTER2_TEXTURE_WIDTH, CHARACTER2_TEXTURE_HEIGHT;

    extern    float character2Frametime;
    extern    int character2Prevtime;
    extern    int character2Currentime;
    extern    float character2Deltatime;
    extern    float moveSpeed;

        // float characterXposition = 100, characterYposition = 700;

    extern    float BOX_X_POS;
    extern    float BOX_Y_POS;

    extern    float CHARACTER2_X_POS;
    extern    float CHARACTER2_Y_POS;
    extern    int rectx, recty;
    extern    int COIN_TEXTURE_HEIGHT, COIN_TEXTURE_WIDTH;
    extern    int RANDOM_GENERATOR;
    extern    int DELAY_COUNT_FOR_POINT_POPUP, DELAY_COUNT_FOR_HEARTS, DELAY_COUNT_FOR_LIFE_RECT_CHANGE, DELAY_COUNT_FOR_EXPLOSION, DELAY_COUNT_FOR_CHARACTER_COLLISION_EFFECT;
    extern    int HEART_TEXTURE_WIDTH, HEART_TEXTURE_HEIGHT;
    extern    int CURRENT_LIFE;
    extern    int LIFE_PERCENTAGE;
    extern    char LIFE_STRING[256];
    extern    int highScore;
    extern    int currentScore ;
    extern    char scoreString[256];
    extern    char highScoreString[256];
    extern    SDL_Color color;
    extern    Mix_Music *background;
    extern    Mix_Music *coingain ;
    extern    Mix_Music *explosionsound;
    extern    Mix_Music *jumpsound ;
    extern    Mix_Music *pointgainsound;

    extern    TTF_Font *font;
    extern    int isspaceclicked;
    extern    int iflifeatstake;
    extern   float levelTwoSkyAnimationSpeed,
        levelTwoMountainsAnimationSpeed,
        levelTwoTreeShadeAnimationSpeed,
        levelTwoTreesAnimationSpeed,
        levelTwoTrackAnimationSpeed,
        levelTwoCloudsAnimationSpeed,
        levelTwoBirdsAnimationSpeed,
        levelTwoBOX_X_POS,
        levelTwoBOX_Y_POS;