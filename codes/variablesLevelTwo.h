#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>
#include "preprocessors.h"

extern int levelTwoCharacterFrameWidth,
    levelTwoCharacterFrameHeight,
    levelTwoCharacterTextureWidth,
    levelTwoCharacterTextureHeight,
    rectx,
    recty,
    coinTextureHeight,
    coinTextureWidth,
    randomGenerator,
    delayCountForPointPopUp,
    delayCountForHearts,
    delayCountForLifeRectChange,
    delayCountForExplosion,
    delayCountForCharacterCollisionEffect,
    heartTextureWidth,
    heartTextureHeight,
    currentLife,
    lifePercentage,
    highScore,
    currentScore,
    isspaceclicked,
    iflifeatstake;

extern float characterTwoFrametime,
    characterTwoPrevtime,
    characterTwoCurrentime,
    characterTwoDeltatime,
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
    xPosLevelTwoBox,
    yPosLevelTwoBox;

extern char lifeString[256];
extern char scoreString[256],
    highScoreString[256];

extern Mix_Music *background,
    *coingain,
    *explosionsound,
    *jumpsound,
    *pointgainsound;

extern int levelTwoDragonFramewidth, levelTwoDragonFrameheight;
extern int levelTwoDragonTexturewidth, levelTwoDragonTextureheight;
extern float levelTwoDragonFrametime;
extern int levelTwoDragonPrevtime;
extern int levelTwoDragonCurrentime;
extern float levelTwoDragonDeltatime;
