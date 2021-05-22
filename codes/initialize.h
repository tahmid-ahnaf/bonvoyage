#include "commonHeaders.h"

extern App app;
extern component
    window,
    back;

extern Variables variables;

extern void welcomeWindowLoad(void);

extern void newgameWindowLoad(void);
extern void levelOneWindowLoad(void);
extern void levelTwoWindowLoad(void);
extern void levelOneCompletedLoad(void);
extern void scoreboard(void);
extern void levelOneGameOverLoad();

extern void welcomeWindowCleanUp(void);
extern void newGameWindowCleanUp(void);

extern void levelOneWindowCleanUp(void);
extern void levelOneCompletedCleanUp(void);
extern void levelOneScoreCleanUp();
extern void levelTwoScoreCleanUp();
extern void levelOnePlayerNameCleanUp(void);
extern void levelOneScoreboardCleanUp(void);
extern void levelOneObstacleCleanUp();
extern void levelOneLifeLossCleanUp(void);
extern void levelOneCoinsEffectCleanUp(void);
extern void levelOneCoinsCleanUp(void);
extern void levelOneGameOverCleanUp(void);

extern void levelTwoWindowCleanUp(void);

extern void updatePlayerName();
