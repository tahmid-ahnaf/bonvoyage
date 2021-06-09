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
    welcomeWindowLegendsButton,

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
    levelTwoTrack[2],
    levelTwoWindowCharacter, levelTwoWindowCharacterPosition, levelTwoInvisibleBorder[2],
    characterFramePosition,
    welcomeWindowExitButton,

    levelOneWindowCoins[5],

    tigerFramePosition,
    levelOneWindowObstacle[3],
    enterButton,

    newgameWindowlevelOneLegendsButton,
    newgameWindowlevelTwoLegendsButton,
    levelTwoEnterButton,
    back;

extern Variables variables;
extern void resetAll();
extern void updatePlayerName();

extern void updateLevelTwoPlayerName();