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
    levelOneWindowTiger,
    levelOneWindowScore,
    levelOneWindowHighScore,
    levelOneWindowScoreText,
    levelOneWindowHighScoreText,
    levelOneCurzon,

    levelTwoWindowSky,
    levelTwoWindowMoon,
    levelTwoWindowMountains,
    levelTwoWindowTreeShade,
    levelTwoWindowClouds,
    levelTwoWindowTrack,
    levelTwoWindowCharacter,
    levelTwoWindowCharacterPosition,
    levelTwoBox, levelTwoInvisibleBorder, levelTwoCoin1, levelTwoCoin2, levelTwoRotatingCoin, levelTwoCoinPointPopUp, levelTwoBomb, levelTwoPlane, levelTwoExplosion,
    levelTwoHeart, levelTwoRotatingHeart, levelTwoLifeBonusPopUp, levelTwoLifeScoreDisplay, levelTwoHeartDisplay, levelTwoScoreText, levelTwoHighScoreText,
    characterFramePosition,
    tigerFramePosition,

    levelOneWindowCoins[4],

    back;

extern Variables variables;

extern void updateScore(void);
extern void drawCoinsFunction(void);
extern void drawObstacleFunction(void);
extern void drawLifeFunction(void);

extern void collision(void);
extern void drawCoinsEffectFunction(void);