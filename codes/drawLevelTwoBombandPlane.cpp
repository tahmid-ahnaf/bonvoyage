#include "drawLevelTwoBombandPlane.h"

void planeflying(){
        if ((levelTwoPlane.rect.x + levelTwoPlane.rect.w <= 0 && levelTwoBomb.rect.y > WINDOW_HEIGHT))
        {
            levelTwoPlane.rect.x = WINDOW_WIDTH*4;
            levelTwoBomb.rect.y = 30;
            levelTwoBomb.rect.w = 0;
            levelTwoBomb.rect.h = 0;
            RANDOM_GENERATOR = rand() % (WINDOW_WIDTH - 150);
        }
        else
        {
           levelTwoPlane.rect.x -= 10;
        }
        if (abs(RANDOM_GENERATOR - levelTwoPlane.rect.x) <= 10)
        {
           levelTwoBomb.rect.x = RANDOM_GENERATOR;
           levelTwoBomb.rect.w = (int)100;
           levelTwoBomb.rect.h = (int)100;
        }
        if (levelTwoBomb.rect.x == RANDOM_GENERATOR)
        {
            levelTwoBomb.rect.y += 5;
        }
}
void drawBombandPlaneFunction()
{
    planeflying();
    SDL_RenderCopy(app.rend, levelTwoBomb.tex, NULL, &levelTwoBomb.rect);
    SDL_RenderCopy(app.rend, levelTwoPlane.tex, NULL, &levelTwoPlane.rect);
    SDL_RenderCopy(app.rend, levelTwoExplosion.tex, NULL, &levelTwoExplosion.rect);
}