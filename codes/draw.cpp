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
    if (variables.gameWindowBegin == 0)
    {

        drawWelcomeWindowFunction();
    }

    if (variables.chooseLevel == 1)
    {
        drawNewgameWindowFunction();
    }

    if (variables.levelOne == 1)
    {
        // drawLevelOneWindowFunction();
        drawLevelOneWindowFunction();
    }
    if (variables.levelTwo == 1)
    {
        drawLevelTwoWindowFunction();
    }
}

void presentScene(void)
{
    SDL_RenderPresent(app.rend);
}
