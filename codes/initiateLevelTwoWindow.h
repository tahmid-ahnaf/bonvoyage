#include "commonHeaders.h"

extern App app;
extern component

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
    window,
    levelOneWindowCoins[4],
    characterFramePosition,
    back;

extern Variables variables;
extern void LevelTwoBoxLoad(void);
extern void BoxCleanUp(void);
extern void LevelTwoCoinsload(void);
extern void LevelTwoCoinsCleanUp(void);
extern void Level2CoinsPopCleanUp(void); 
extern void BombandPlaneLoad(void);
extern void BombandPlaneCleanUp(void);
extern void LevelTwoLifeLoad(void);
extern void LevelTwoLoadScoreFile();