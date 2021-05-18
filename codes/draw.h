#include "commonHeaders.h"

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
    levelTwoBox, levelTwoInvisibleBorder,levelTwoCoin1, levelTwoCoin2, levelTwoRotatingCoin, levelTwoCoinPointPopUp, levelTwoBomb, levelTwoPlane, levelTwoExplosion,
    levelTwoHeart, levelTwoRotatingHeart, levelTwoLifeBonusPopUp, levelTwoLifeScoreDisplay, levelTwoHeartDisplay, levelTwoScoreText, levelTwoHighScoreText,
    levelOneWindowCoins[4],

    back;

extern Variables variables;

extern void drawWelcomeWindowFunction(void);
extern void drawNewgameWindowFunction(void);
extern void drawLevelOneWindowFunction(void);
extern void drawLevelTwoWindowFunction(void);
extern void drawLevelOneCompletedFunction(void);
extern void drawLevelOnePlayerNameFunction(void);
extern void drawScoreBoardFunction(void);