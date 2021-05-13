#include "drawbombandplane.h"

void planeflying(){
        if ((levelTwoWindow.plane.rect.x + levelTwoWindow.plane.rect.w <= 0 && levelTwoWindow.bomb.rect.y > WINDOW_HEIGHT))
        {
            levelTwoWindow.plane.rect.x = WINDOW_WIDTH*4;
            levelTwoWindow.bomb.rect.y = 30;
            levelTwoWindow.bomb.rect.w = 0;
            levelTwoWindow.bomb.rect.h = 0;
            variables.levelTwoVars.RANDOM_GENERATOR = rand() % (WINDOW_WIDTH - 150);
        }
        else
        {
           levelTwoWindow.plane.rect.x -= 10;
        }
        if (abs(variables.levelTwoVars.RANDOM_GENERATOR - levelTwoWindow.plane.rect.x) <= 10)
        {
           levelTwoWindow.bomb.rect.x = variables.levelTwoVars.RANDOM_GENERATOR;
           levelTwoWindow.bomb.rect.w = (int)100;
           levelTwoWindow.bomb.rect.h = (int)100;
        }
        if (levelTwoWindow.bomb.rect.x == variables.levelTwoVars.RANDOM_GENERATOR)
        {
            levelTwoWindow.bomb.rect.y += 5;
        }
}
void drawBombandPlaneFunction()
{
    planeflying();
    SDL_RenderCopy(app.rend, levelTwoWindow.bomb.tex, NULL, &levelTwoWindow.bomb.rect);
    SDL_RenderCopy(app.rend, levelTwoWindow.plane.tex, NULL, &levelTwoWindow.plane.rect);
    SDL_RenderCopy(app.rend, levelTwoWindow.explosion.tex, NULL, &levelTwoWindow.explosion.rect);
}
