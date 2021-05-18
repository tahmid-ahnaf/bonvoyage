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
    welcomeWindowDetailsButton,
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
    levelTwoWindowCharacter,
    levelTwoWindowCharacterPosition,
    levelTwoBox, levelTwoInvisibleBorder, levelTwoCoin1, levelTwoCoin2, levelTwoRotatingCoin, levelTwoCoinPointPopUp, levelTwoBomb, levelTwoPlane, levelTwoExplosion,
    levelTwoHeart, levelTwoRotatingHeart, levelTwoLifeBonusPopUp, levelTwoLifeScoreDisplay, levelTwoHeartDisplay, levelTwoScoreText, levelTwoHighScoreText, levelTwoLifeScoreText,
    characterFramePosition,
    tigerFramePosition,

    levelOneWindowCoins[5],
    levelOneWindowObstacle[3],
    levelOneWindowLife[6],
    levelOneWindowCoinsEffect[5],

    scoreBoardPlayerScore[5],
    scoreBoardPlayerName[5],
    window,
    enterName,
    enterButton,
    scoreBoard,

    playerNameBox,
    enterCommand,
    back;

Variables variables;

extern void cleanup(void);
extern void initSDL(void);
extern void prepareScene(void);
extern void presentScene(void);
extern void doInput(void);
