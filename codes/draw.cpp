#include "draw.h"
void prepareScene(void)
{

    // updateAnimationSpeedForWelcomeWindow();
    // updateAnimationSpeedForNewgameWindow();

    // if (variables.levelOneVars.space == 1)
    // {

    // }

    // updateAnimationSpeedForLevelTwoWindow();
    // updateAnimationSpeedForLevelOneWindow();
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
}

void presentScene(void)
{
    SDL_RenderPresent(app.rend);
}
