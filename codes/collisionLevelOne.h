#include "commonHeaders.h"

// #include "allstructs.h"
extern App app;
extern component
    welcomeWindowSky,
    welcomeWindowBirds,
    welcomeWindowMountains,
    welcomeWindowTrees,
    welcomeWindowGameTitle,
    welcomeWindowNewgameButton,
    welcomeWindowControlsButton,
    welcomeWindowDetailsButton,

    newgameWindowlevelOneButton,
    newgameWindowlevelTwoButton,

    levelOneWindowSky,
    levelOneWindowSun,
    levelOneWindowMountains,
    levelOneWindowTreeShade,
    levelOneWindowTrees,
    levelOneWindowClouds,
    levelOneWindowTrack,
    levelOneWindowCharacter,
    levelOneWindowScore,
    levelOneWindowHighScore,
    levelOneWindowScoreText,
    levelOneWindowHighScoreText,

    levelTwoWindowSky,
    levelTwoWindowMoon,
    levelTwoWindowMountains,
    levelTwoWindowTreeShade,
    levelTwoWindowClouds,
    levelTwoWindowTrack,
    levelTwoWindowCharacter,
    levelTwoWindowCharacterPosition,
    characterFramePosition,
    levelTwoBox, levelTwoInvisibleBorder, levelTwoCoin1, levelTwoCoin2,levelTwoRotatingCoin, levelTwoCoinPointPopUp, levelTwoBomb, levelTwoPlane, levelTwoExplosion, 
    levelTwoHeart, levelTwoRotatingHeart, levelTwoLifeBonusPopUp, levelTwoLifeScoreDisplay, levelTwoHeartDisplay, levelTwoScoreText, levelTwoHighScoreText,
    levelOneWindowCoins[5],
    levelOneWindowCoinsEffect[5],

    levelOneWindowObstacle[3],

    back;

extern Variables variables;

extern void updateScore(void);
extern void drawCoinsFunction(void);
extern void drawCoinsEffectFunction(void);
extern void coineffectdelay();

extern void coinsupdateanimation(void);
extern void collision(void);