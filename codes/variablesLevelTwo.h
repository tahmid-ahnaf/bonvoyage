#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>
#include "preprocessors.h"
    extern    int levelTwoCharacterFrameWidth, levelTwoCharacterFrameHeight;
    extern    int levelTwoCharacterTextureWidth, levelTwoCharacterTextureHeight;

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
    extern    int DelayCountForPointPopUp, DelayCountForHearts, DelayCountForLifeRectChange, DelayCountForExplosion, DelayCountForCharacterCollisionEffect;
    extern    int heartTextureWidth, heartTextureHeight;
    extern    int CurrentLife;
    extern    int LifePercentage;
    extern    char LifeString[256];
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