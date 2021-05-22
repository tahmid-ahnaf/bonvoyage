#include "variablesLevelTwo.h"


        int levelTwoCharacterFrameWidth, 
        levelTwoCharacterFrameHeight,
        levelTwoCharacterTextureWidth, 
        levelTwoCharacterTextureHeight,
        rectx, 
        recty,
        coinTextureHeight,
        coinTextureWidth,
        randomGenerator,
        delayCountForPointPopUp=0, 
        delayCountForHearts =0, 
        delayCountForLifeRectChange=0, 
        delayCountForExplosion=0, 
        delayCountForCharacterCollisionEffect =0,
        heartTextureWidth, 
        heartTextureHeight,
        currentLife =100,
        lifePercentage = 0,
        highScore,
        currentScore = 0,
        isspaceclicked=0,
        iflifeatstake = 0;


        float characterTwoFrametime =0,
        characterTwoPrevtime =0,
        characterTwoCurrentime =0,
        characterTwoDeltatime=0.0,
        moveSpeed = 300.0f,
        xPosLevelTwoCharacter = (float)100,
        yPosLevelTwoCharacter = (float)700,
        
        levelTwoSkyAnimationSpeed = 0,
        levelTwoMountainsAnimationSpeed = 0,
        levelTwoTreeShadeAnimationSpeed = 0,
        levelTwoTreesAnimationSpeed = 0,
        levelTwoTrackAnimationSpeed = 0,
        levelTwoCloudsAnimationSpeed = 0,
        levelTwoBirdsAnimationSpeed = 0,
        xPosLevelTwoBox = (float)WINDOW_WIDTH / 2 + 200,
        yPosLevelTwoBox = (float)WINDOW_HEIGHT / 2 - 200;
        

        char lifeString[256] = " ";
        char scoreString[256],
        highScoreString[256];
        
        Mix_Music *background;
        Mix_Music *coingain ;
        Mix_Music *explosionsound;
        Mix_Music *jumpsound ;
        Mix_Music *pointgainsound;
