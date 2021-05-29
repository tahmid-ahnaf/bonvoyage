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
    variables.gameOver1 = 0;
    variables.levelTwoCompleted = 0;
    lifeSize = 6;

    strcpy(playerName, " ");
    updatePlayerName();
    updateScore();

    levelOneSkyAnimationSpeed = 0;
    levelOneMountainsAnimationSpeed = 0;
    levelOneTreeShadeAnimationSpeed = 0;
    levelOneTreesAnimationSpeed = 0;
    levelOneCloudsAnimationSpeed = 0;
    levelOneTrackAnimationSpeed = 0;

    levelOneCharacterXposition = 600;
    levelOneCharacterYposition = 665;
    tigerYposition = 730;

    levelTwoSkyAnimationSpeed = 0;
    levelTwoMountainsAnimationSpeed = 0;
    levelTwoCloudsAnimationSpeed = 0;
    levelTwoTreeShadeAnimationSpeed = 0;
    levelTwoTrackAnimationSpeed = 0;

    for (int i = 0; i < 5; i++)
    {
        levelOnePointEffectAnimationSpeed[i] = 0;
        levelOnePointAnimationSpeed[i] = 0;
    }

    for (int i = 0; i < 3; i++)
    {
        levelOneObstacleAnimationSpeed[i] = 1380;
        levelOneLifeAnimationSpeed[i] = 700;
    }
    curzonPosition = 10000;
    count = 0;
    currentScore = 0;
    isspaceclicked = 0;
}