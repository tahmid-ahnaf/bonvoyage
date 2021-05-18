#include "resetAll.h"

void resetAll()
{
    variables.gameWindowBegin = 1;
    variables.levelOne = 0;
    variables.levelTwo = 0;
    variables.chooseLevel = 0;
    variables.levelOneCompleted = 0;
    variables.levelOnePlayerName = 0;
    variables.newScore = 0;
    variables.ScoreBoard = 0;
    space = 0;
    levelOneWindowTrack.rect.x = 0;
    levelOneCurrentScore = 0;

    strcpy(playerName, " ");
    updatePlayerName();
    updateScore();

    levelOneSkyAnimationSpeed = 0;
    levelOneMountainsAnimationSpeed = 0;
    levelOneTreeShadeAnimationSpeed = 0;
    levelOneTreesAnimationSpeed = 0;
    levelOneCloudsAnimationSpeed = 0;
    levelOneTrackAnimationSpeed = 0;

    variables.AnimationSpeed.levelTwoWindow.sky = 0;
    variables.AnimationSpeed.levelTwoWindow.mountains = 0;
    variables.AnimationSpeed.levelTwoWindow.treeshade = 0;
    variables.AnimationSpeed.levelTwoWindow.clouds = 0;
    variables.AnimationSpeed.levelTwoWindow.track = 0;

    for (int i = 0; i < 5; i++)
    {
        levelOnePointEffectAnimationSpeed[i] = 0;
        levelOnePointAnimationSpeed[i] = 0;
    }

    for (int i = 0; i < 3; i++)
    {
        levelOneObstacleAnimationSpeed[i] = 0;
    }
    curzonPosition = 6000;
    count = 0;
}