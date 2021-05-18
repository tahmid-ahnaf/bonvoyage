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
    levelTwoBox, levelTwoInvisibleBorder, levelTwoCoin1, levelTwoCoin2, levelTwoRotatingCoin, levelTwoCoinPointPopUp, levelTwoBomb, levelTwoPlane, levelTwoExplosion,
    levelTwoHeart, levelTwoRotatingHeart, levelTwoLifeBonusPopUp, levelTwoLifeScoreDisplay, levelTwoHeartDisplay, levelTwoScoreText, levelTwoHighScoreText,
    characterFramePosition,

    levelOneWindowCoins[4],

    back;

extern Variables variables;
extern void  boxmotion();
extern void  drawBoxFunction();
extern void  drawLevelTwoCoinsFunction();
extern void  drawLevelTwoCoinsPopupFunction();
extern void  drawBombandPlaneFunction();
extern void  collisionsLevelTwo();
extern void  drawLevelTwoLifeFunction();
extern void  updateHeartPosition();
extern void  updateLifeBonusPopupFunction();
extern void  updateScoreLevel2();
extern void  drawLevelTwoLifeText();
extern void  drawLevelTwoHeartFunction();
extern void  lifeatstakeaftereffect();
extern void drawLevelTwoHeartPopupFunction();
extern void  LevelTwoLifeTextCleanUp();

