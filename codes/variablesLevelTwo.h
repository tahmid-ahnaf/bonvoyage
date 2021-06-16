#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>
#include "preprocessors.h"

extern int levelTwoCharacterFrameWidth,
    levelTwoCharacterFrameHeight,
    levelTwoCharacterTextureWidth,
    levelTwoCharacterTextureHeight,

    levelTwoCoinTextureHeight,
    levelTwoCoinTextureWidth,
    levelTwoCoinFrameHeight,
    levelTwoCoinFrameWidth,

    levelTwoHeartTextureWidth,
    levelTwoHeartTextureHeight,
    levelTwoHeartFrameHeight,
    levelTwoHeartFrameWidth,

    randomGenerator,
    delayCountForPointPopUp,
    delayCountForHearts,
    delayCountForLifeRectChange,
    delayCountForExplosion,
    delayCountForCharacterCollisionEffect,

    currentLife,
    lifePercentage,
    highScore,
    currentScore,
    scoreUpdate,
    isspaceclicked,
    iflifeatstake,
    leftbuttonclicked,
    rightbuttonclicked,
    isDownPressed,
    isUpPressed;

extern float characterTwoFrametime,
    characterTwoPrevtime,
    characterTwoCurrentime,
    characterTwoDeltatime,

    levelTwoRotatingCoinFrametime,
    levelTwoRotatingCoinPrevtime,
    levelTwoRotatingCoinCurrentime,
    levelTwoRotatingCoinDeltatime,

    levelTwoRotatingHeartFrametime,
    levelTwoRotatingHeartPrevtime,
    levelTwoRotatingHeartCurrentime,
    levelTwoRotatingHeartDeltatime,

    moveSpeed,
    xPosLevelTwoCharacter,
    yPosLevelTwoCharacter,

    levelTwoSkyAnimationSpeed,
    levelTwoMountainsAnimationSpeed,
    levelTwoTreeShadeAnimationSpeed,
    levelTwoTreesAnimationSpeed,
    levelTwoTrackAnimationSpeed,
    levelTwoCloudsAnimationSpeed,
    levelTwoBirdsAnimationSpeed,
    xPosLevelTwoTrack,
    yPosLevelTwoTrack,
    xPosLevelTwoTrack2,
    yPosLevelTwoTrack2;

extern char lifeString[256];
extern char scoreString[256],
    highScoreString[256];

extern Mix_Music *got;
extern Mix_Chunk *coingain,
    *explosionsound,
    *jumpsound,
    *pointgainsound;

extern int levelTwoDragonFramewidth, levelTwoDragonFrameheight;
extern int levelTwoDragonTexturewidth, levelTwoDragonTextureheight;
extern float levelTwoDragonFrametime;
extern int levelTwoDragonPrevtime;
extern int levelTwoDragonCurrentime;
extern float levelTwoDragonDeltatime;

extern char levelTwoScoreBoardPlayerNameString[100][10];
extern char levelTwoScoreBoardPlayerScoreString[100][10];

extern char levelTwoPlayerNameList[100][100], showLevelTwoPlayerNameList[10000][100];
extern int levelTwoScoreList[100];
extern char levelTwoHighScoreString[10];

extern char levelTwoPlayerName[100];
extern int countLevelTwo;
extern int thronePosition;