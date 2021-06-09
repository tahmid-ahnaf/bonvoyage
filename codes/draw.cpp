#include "draw.h"
void prepareScene(void)
{

    if (variables.gameWindowBegin == 1)
    {

        drawWelcomeWindowFunction();
    }

    if (variables.chooseLevel == 1)
    {
        drawNewgameWindowFunction();
    }

    if (variables.levelOne == 1)
    {
        drawLevelOneWindowFunction();
    }
    if (variables.levelOneCompleted == 1)
    {
        drawLevelOneCompletedFunction();
    }
    if (variables.levelTwo == 1)
    {
        drawLevelTwoWindowFunction();
    }
    if (variables.levelOnePlayerName == 1)
    {
        drawLevelOnePlayerNameFunction();
    }
    if (variables.ScoreBoard == 1)
    {
        drawScoreBoardFunction();
    }
    if (variables.gameOver1 == 1)
    {
        drawLevelOneGameOverFunction();
    }
    if (variables.levelTwoCompleted == 1)
    {
        drawLevelTwoCompletedFunction();
    }
    if (variables.levelTwoScoreBoard == 1)
    {
        drawLevelTwoScoreBoardFunction();
    }
    if (variables.legendsWindow == 1)
    {
        drawLegendsWindowFunction();
    }
    if (variables.levelTwoPlayerName == 1)
    {
        drawLevelTwoPlayerNameFunction();
    }
}

void presentScene(void)
{
    SDL_RenderPresent(app.rend);
}
