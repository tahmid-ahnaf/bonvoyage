#include "variablesLevelTwo.h"


        int levelTwoCharacterFrameWidth, levelTwoCharacterFrameHeight,
        levelTwoCharacterTextureWidth, levelTwoCharacterTextureHeight;

        float character2Frametime = 0;
        int character2Prevtime = 0;
        int character2Currentime = 0;
        float character2Deltatime = 0.0;
        float moveSpeed = 300.0f;

        // float characterXposition = 100, characterYposition = 700;
        

        float CHARACTER2_X_POS = (float)100;
        float CHARACTER2_Y_POS = (float)700;


        int rectx, recty;
        int COIN_TEXTURE_HEIGHT, COIN_TEXTURE_WIDTH;
        int RANDOM_GENERATOR;
        int DelayCountForPointPopUp=0, DelayCountForHearts =0, DelayCountForLifeRectChange=0, DelayCountForExplosion=0, DelayCountForCharacterCollisionEffect =0;
        int heartTextureWidth, heartTextureHeight;
        int CurrentLife =100;
        int LifePercentage = 0;
        char LifeString[256] = {'0'};
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

            
        float levelTwoSkyAnimationSpeed = 0,
        levelTwoMountainsAnimationSpeed = 0,
        levelTwoTreeShadeAnimationSpeed = 0,
        levelTwoTreesAnimationSpeed = 0,
        levelTwoTrackAnimationSpeed = 0,
        levelTwoCloudsAnimationSpeed = 0,
        levelTwoBirdsAnimationSpeed = 0,
        levelTwoBOX_X_POS = (float)WINDOW_WIDTH / 2 + 200,
        levelTwoBOX_Y_POS = (float)WINDOW_HEIGHT / 2 - 200;