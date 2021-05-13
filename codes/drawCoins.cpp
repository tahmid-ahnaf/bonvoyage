#include "drawCoins.h"

// void updateAnimationSpeedForLevelOneWindow()
// {
// }
void drawCoinsFunction()
{

    for (int i = 0; i < 4; i++)
    {
        levelOneWindow.coins[i].rect.x = i * 200 + 300;
        levelOneWindow.coins[i].rect.y = i * 200;

        levelOneWindow.coins[i].rect.h = 40;
        levelOneWindow.coins[i].rect.w = 40;
        SDL_RenderCopy(app.rend, levelOneWindow.coins[i].tex, NULL, &levelOneWindow.coins[i].rect);
    }
}