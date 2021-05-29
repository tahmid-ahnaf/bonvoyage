#include "commonHeaders.h"

App app;
component
    welcomeWindowSky,
    welcomeWindowBirds,
    welcomeWindowMountains,
    welcomeWindowTrees,
    welcomeWindowGameTitle,
    welcomeWindowNewgameButton,
    welcomeWindowControlsButton,
    welcomeWindowLegendsButton,
    welcomeWindowExitButton,

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
    levelOneCompletedOverlay,
    levelOneCompletedMessage,
    levelOneCurzon,

    levelTwoWindowSky,
    levelTwoWindowMoon,
    levelTwoWindowMountains,
    levelTwoWindowTreeShade,
    levelTwoWindowClouds,
    levelTwoWindowTrack,
    characterFramePosition,
    tigerFramePosition,

    levelTwoWindowScoreText,
    levelTwoWindowHighScoreText,
    levelTwoLifeScoreText,
    levelTwoWindowCoins[7],

    levelOneWindowCoins[5],
    levelOneWindowObstacle[3],
    levelOneWindowLife[6],
    levelOneWindowCoinsEffect[5],
    levelOneLifeLoss[3],

    scoreBoardPlayerScore[5],
    scoreBoardPlayerName[5],
    window,
    enterName,
    enterButton,
    scoreBoard,

    playerNameBox,
    enterCommand,

    levelOneGameOverOverlay,
    levelOneGameOverMessage,

    levelTwoWindowCharacter, levelTwoWindowCharacterPosition,
    levelTwoInvisibleBorder[2], levelTwoTrack[2], levelTwoRotatingCoin, levelTwoCoinPointPopUp, levelTwoBomb, levelTwoDragon, levelTwoDragonPosition, levelTwoExplosion,
    levelTwoHeart, levelTwoRotatingHeart, levelTwoLifeBonusPopUp, levelTwoLifeScoreDisplay, levelTwoHeartDisplay,
    levelTwoCompletedOverlay, levelTwoCompletedMessage,

    back;

Variables variables;

extern void cleanup(void);
extern void initSDL(void);
extern void prepareScene(void);
extern void presentScene(void);
extern void doInput(void);
