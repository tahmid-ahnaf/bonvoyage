#include "commonHeaders.h"
extern App app;
extern component
    levelTwoWindowSky,
    levelTwoWindowMoon,
    levelTwoWindowMountains,
    levelTwoWindowTreeShade,
    levelTwoWindowClouds,
    levelTwoWindowTrack,
    levelTwoWindowCharacter, levelTwoWindowCharacterPosition, levelTwoRotatingCoin, levelTwoRotatingHeart,
    characterFramePosition,
    levelTwoWindowScoreText, levelTwoWindowHighScoreText,
    levelOneWindowScore,
    levelOneWindowHighScore,
    levelTwoDragon,

    levelTwoCompletedOverlay,
    levelTwoCompletedMessage,
    back;

extern Variables variables;
extern void drawBoxFunction(void);
extern void boxmotion(void);
extern void drawLevelTwoCoinsFunction(void);
extern void drawLevelTwoCoinsPopupFunction(void);
// extern void drawBombandDragonFunction(void);
extern void collisionsLevelTwo(void);
extern void updateLevelTwoScore(void);
extern void updateLevelTwoLifeBonusPopupFunction(void);
extern void drawLevelTwoLifeText(void);
extern void drawLevelTwoLifeFunction(void);
extern void LevelTwoLifeTextCleanUp(void);
extern void updateHeartPosition(void);
extern void lifeatstakeaftereffect(void);
extern void drawLevelTwoHeartFunction(void);
extern void drawLevelTwoHeartPopupFunction(void);
