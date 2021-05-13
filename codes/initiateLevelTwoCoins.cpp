#include "initiateLevelTwoCoins.h"



void Level2CoinsPopup()
{
    
    levelTwoWindow.coin_point_popup.surface = IMG_Load("images/level2obstacles/point.png");

    if (!levelTwoWindow.coin_point_popup.surface)
    {
        printf("coin_point_popup Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindow.coin_point_popup.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.coin_point_popup.surface);

    if (!levelTwoWindow.coin_point_popup.tex)
    {
        printf("coin_point_popup Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoWindow.coin_point_popup.rect;
    SDL_QueryTexture(levelTwoWindow.coin_point_popup.tex, NULL, NULL, &levelTwoWindow.coin_point_popup.rect.w, &levelTwoWindow.coin_point_popup.rect.h);
    /* adjusting the poster for wide screen */
    levelTwoWindow.coin_point_popup.rect.w = (int)0;
    levelTwoWindow.coin_point_popup.rect.h = (int)0;
    levelTwoWindow.coin_point_popup.rect.x = (int)WINDOW_WIDTH / 2;
    levelTwoWindow.coin_point_popup.rect.y = (int)WINDOW_HEIGHT / 2;
}


 

void Level2Coinsload(void)
{
    levelTwoWindow.level2Coin.surface = IMG_Load("images/level2obstacles/coinsprite.png");

    if (!levelTwoWindow.level2Coin.surface)
    {
        printf("BOX Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindow.level2Coin.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.level2Coin.surface);
    levelTwoWindow.level2Coin2.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.level2Coin.surface);

    if (!levelTwoWindow.level2Coin.tex)
    {
        printf("BOX TEXTURE ERROR%s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoWindow.level2Coin.rect;
    levelTwoWindow.level2Coin2.rect;
    
    SDL_QueryTexture(levelTwoWindow.level2Coin.tex, NULL, NULL, &levelTwoWindow.level2Coin.rect.w, &levelTwoWindow.level2Coin.rect.h);
    SDL_QueryTexture(levelTwoWindow.level2Coin2.tex, NULL, NULL, &levelTwoWindow.level2Coin2.rect.w, &levelTwoWindow.level2Coin2.rect.h);
    
    levelTwoWindow.level2Coin.rect.w = (int)40;
    levelTwoWindow.level2Coin.rect.h = (int)40;
    levelTwoWindow.level2Coin.rect.x = (int) levelTwoWindow.box.rect.x + 50;
    levelTwoWindow.level2Coin.rect.y = (int) levelTwoWindow.box.rect.y - 70;

    levelTwoWindow.level2Coin2.rect.w = (int)40;
    levelTwoWindow.level2Coin2.rect.h = (int)40;
    levelTwoWindow.level2Coin2.rect.x = (int) levelTwoWindow.box.rect.x + 50;
    levelTwoWindow.level2Coin2.rect.y = (int) levelTwoWindow.box.rect.y - 70;


 
    SDL_QueryTexture(levelTwoWindow.level2Coin.tex , NULL, NULL, &variables.levelTwoVars.COIN_TEXTURE_HEIGHT, &variables.levelTwoVars.COIN_TEXTURE_WIDTH);
    SDL_QueryTexture(levelTwoWindow.level2Coin2.tex , NULL, NULL, &variables.levelTwoVars.COIN_TEXTURE_HEIGHT, &variables.levelTwoVars.COIN_TEXTURE_WIDTH);

    int COIN_FRAME_WIDTH = variables.levelTwoVars.COIN_TEXTURE_WIDTH / 2;
    int COIN_FRAME_HEIGHT =variables.levelTwoVars.COIN_TEXTURE_HEIGHT / 2;

    levelTwoWindow.rotatingcoin.rect.w = (int)COIN_FRAME_WIDTH;
    levelTwoWindow.rotatingcoin.rect.h = (int)COIN_FRAME_HEIGHT;
    levelTwoWindow.rotatingcoin.rect.x = (int)0;
    levelTwoWindow.rotatingcoin.rect.y = (int)0;

Level2CoinsPopup();

}

void Level2CoinsCleanUp()
{
     
 
    SDL_FreeSurface(levelTwoWindow.level2Coin.surface);
    SDL_DestroyTexture(levelTwoWindow.level2Coin.tex);
    IMG_Quit();
}

void Level2CoinsPopCleanUp()
{
     
 
    SDL_FreeSurface(levelTwoWindow.level2Coin.surface);
    SDL_DestroyTexture(levelTwoWindow.level2Coin.tex);
    IMG_Quit();
}

