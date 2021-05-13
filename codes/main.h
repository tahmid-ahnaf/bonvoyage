#include "commonHeaders.h"

extern void cleanup(void);
extern void initSDL(void);
extern void prepareScene(void);
extern void presentScene(void);
extern void doInput(void);
extern void LoadScoreFile(void);
App app;

Windows welcome_window, newgameWindow, levelOneWindow, levelTwoWindow;

Variables variables;