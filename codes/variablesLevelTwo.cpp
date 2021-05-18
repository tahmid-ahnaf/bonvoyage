#include "variablesLevelTwo.h"


int CHARACTER2_FRAME_WIDTH, CHARACTER2_FRAME_HEIGHT;
        int CHARACTER2_TEXTURE_WIDTH, CHARACTER2_TEXTURE_HEIGHT;

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

            
        float levelTwoSkyAnimationSpeed = 0,
        levelTwoMountainsAnimationSpeed = 0,
        levelTwoTreeShadeAnimationSpeed = 0,
        levelTwoTreesAnimationSpeed = 0,
        levelTwoTrackAnimationSpeed = 0,
        levelTwoCloudsAnimationSpeed = 0,
        levelTwoBirdsAnimationSpeed = 0,
        levelTwoBOX_X_POS = (float)WINDOW_WIDTH / 2 + 200,
        levelTwoBOX_Y_POS = (float)WINDOW_HEIGHT / 2 - 200;