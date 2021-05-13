#include "initiateCoins.h"

void coinsload(void)
{
    //sky
    for (int i = 0; i < 4; i++)
    {
        levelOneWindow.coins[i].surface = IMG_Load("images/levelone/coins.png");

        if (!levelOneWindow.coins[i].surface)
        {
            printf("coins[i]_BUTTON Error: %s\n", IMG_GetError());
            SDL_DestroyRenderer(app.rend);
            SDL_DestroyWindow(app.window);
            SDL_Quit();
            exit(1);
        }

        levelOneWindow.coins[i].tex = SDL_CreateTextureFromSurface(app.rend, levelOneWindow.coins[i].surface);

        if (!levelOneWindow.coins[i].tex)
        {
            printf("coins[i]_  Texture %s\n", SDL_GetError());
            SDL_DestroyRenderer(app.rend);
            SDL_DestroyWindow(app.window);
            SDL_Quit();
            exit(1);
        }
        levelOneWindow.coins[i].rect;
        SDL_QueryTexture(levelOneWindow.coins[i].tex, NULL, NULL, &levelOneWindow.coins[i].rect.w, &levelOneWindow.coins[i].rect.h);
        levelOneWindow.coins[i].rect.w = (int)40;
        levelOneWindow.coins[i].rect.h = (int)40;
        levelOneWindow.coins[i].rect.x = (int)600;
        levelOneWindow.coins[i].rect.y = (int)500;
    }
}

void coinsCleanUp()
{
    for (int i = 0; i < 4; i++)
    {
        SDL_FreeSurface(levelOneWindow.coins[i].surface);
        SDL_DestroyTexture(levelOneWindow.coins[i].tex);
    }

    IMG_Quit();
}