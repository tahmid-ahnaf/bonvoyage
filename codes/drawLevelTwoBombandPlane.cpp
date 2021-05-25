#include "drawLevelTwoBombandPlane.h"

void planeflying()
{
    if ((levelTwoDragonPosition.rect.x + levelTwoDragonPosition.rect.w <= 0 && levelTwoBomb.rect.y > WINDOW_HEIGHT))
    {
        levelTwoDragonPosition.rect.x = WINDOW_WIDTH * 4;
        levelTwoBomb.rect.y = 60;
        levelTwoBomb.rect.w = 0;
        levelTwoBomb.rect.h = 0;
        randomGenerator = rand() % (WINDOW_WIDTH - 150);
    }
    else
    {
        levelTwoDragonPosition.rect.x -= 10;
    }
    if (abs(randomGenerator - levelTwoDragonPosition.rect.x) <= 10)
    {
        levelTwoBomb.rect.x = randomGenerator;
        levelTwoBomb.rect.w = (int)40;
        levelTwoBomb.rect.h = (int)50;
    }
    if (levelTwoBomb.rect.x == randomGenerator)
    {
        levelTwoBomb.rect.y += 5;
    }
}
void drawBombandDragonFunction()
{
    planeflying();
    SDL_RenderCopy(app.rend, levelTwoBomb.tex, NULL, &levelTwoBomb.rect);
    SDL_RenderCopy(app.rend, levelTwoDragon.tex, &levelTwoDragon.rect, &levelTwoDragonPosition.rect);

    SDL_RenderCopy(app.rend, levelTwoExplosion.tex, NULL, &levelTwoExplosion.rect);
}