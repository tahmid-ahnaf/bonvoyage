#include "resetAll.h"

void resetAll()
{
    variables.levelOne = 0;
    variables.levelTwo = 0;
    variables.chooseLevel = 0;
    variables.gameWindowBegin = 0;
    variables.levelOneVars.space = 0;
    levelOneWindow.track.rect.x = 0;
    variables.levelOneVars.currentScore = 0;
    sprintf(variables.levelOneVars.scoreString, "%i", variables.levelOneVars.currentScore);

    variables.AnimationSpeed.levelOneWindow.sky = 0;
    variables.AnimationSpeed.levelOneWindow.mountains = 0;
    variables.AnimationSpeed.levelOneWindow.treeshade = 0;
    variables.AnimationSpeed.levelOneWindow.trees = 0;
    variables.AnimationSpeed.levelOneWindow.clouds = 0;
    variables.AnimationSpeed.levelOneWindow.track = 0;

    variables.AnimationSpeed.levelTwoWindow.sky = 0;
    variables.AnimationSpeed.levelTwoWindow.mountains = 0;
    variables.AnimationSpeed.levelTwoWindow.treeshade = 0;
    variables.AnimationSpeed.levelTwoWindow.clouds = 0;
    variables.AnimationSpeed.levelTwoWindow.track = 0;

    variables.AnimationSpeed.levelTwoWindow.BOX_X_POS=0;


}