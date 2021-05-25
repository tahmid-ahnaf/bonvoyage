#include "initiateLevelTwoCoins.h"

void LevelTwoCoinsPopupLoad()
{
    
    window.surface = IMG_Load("images/level2obstacles/point.png");

    if (!window.surface)
    {
        printf("coin_point_popup Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoCoinPointPopUp.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!levelTwoCoinPointPopUp.tex)
    {
        printf("coin_point_popup Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoCoinPointPopUp.rect;
    SDL_QueryTexture(levelTwoCoinPointPopUp.tex, NULL, NULL, &levelTwoCoinPointPopUp.rect.w, &levelTwoCoinPointPopUp.rect.h);
    levelTwoCoinPointPopUp.rect.w = (int)0;
    levelTwoCoinPointPopUp.rect.h = (int)0;
    levelTwoCoinPointPopUp.rect.x = (int)WINDOW_WIDTH / 2;
    levelTwoCoinPointPopUp.rect.y = (int)WINDOW_HEIGHT / 2;
}


 

void LevelTwoCoinsload(void)
{
    for(int i=0; i<5; i++)
    { 
        window.surface = IMG_Load("images/level2obstacles/coinsprite.png");

    if (!window.surface)
    {
        printf("Coins Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    
    levelTwoWindowCoins[i].tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!levelTwoWindowCoins[i].tex)
    {
        printf("BOX TEXTURE ERROR%s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoWindowCoins[i].rect;
    
    SDL_QueryTexture(levelTwoWindowCoins[i].tex, NULL, NULL, &levelTwoWindowCoins[i].rect.w, &levelTwoWindowCoins[i].rect.h);
    
    levelTwoWindowCoins[i].rect.w = (int)40;
    levelTwoWindowCoins[i].rect.h = (int)40;
    levelTwoWindowCoins[i].rect.x = (int) levelTwoBox.rect.x + 150;
    levelTwoWindowCoins[i].rect.y = (int) levelTwoBox.rect.y - 70;


 
    SDL_QueryTexture(levelTwoWindowCoins[i].tex , NULL, NULL, &coinTextureHeight, &coinTextureWidth);

    int coinFrameWidth = coinTextureWidth / 2;
    int coinFrameHeight =coinTextureHeight / 2;

    levelTwoRotatingCoin.rect.w = (int)coinFrameWidth;
    levelTwoRotatingCoin.rect.h = (int)coinFrameHeight;
    levelTwoRotatingCoin.rect.x = (int)0;
    levelTwoRotatingCoin.rect.y = (int)0;
 
    


    }
    LevelTwoCoinsPopupLoad();
   
}

void LevelTwoCoinsCleanUp()
{
    for (int i = 0; i < 5; i++)
    {
        SDL_DestroyTexture(levelTwoWindowCoins[i].tex);
    }

    IMG_Quit();
}

void LevelTwoCoinsPopCleanUp()
{
    
    SDL_DestroyTexture(levelTwoCoinPointPopUp.tex);
    IMG_Quit();
}


