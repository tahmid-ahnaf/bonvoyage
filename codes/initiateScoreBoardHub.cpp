#include "initiateScoreBoardHub.h"

void LegendsWindowLoad(void)
{
    //levelone button

    window.surface = IMG_Load("images/newcomponents/legendsOfSundorban.png");

    if (!window.surface)
    {
        printf("levelOneButton_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    newgameWindowlevelOneLegendsButton.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!newgameWindowlevelOneLegendsButton.tex)
    {
        printf("levelOneButton_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    newgameWindowlevelOneLegendsButton.rect;
    SDL_QueryTexture(newgameWindowlevelOneLegendsButton.tex, NULL, NULL, &newgameWindowlevelOneLegendsButton.rect.w, &newgameWindowlevelOneLegendsButton.rect.h);
    newgameWindowlevelOneLegendsButton.rect.w = (int)532;
    newgameWindowlevelOneLegendsButton.rect.h = (int)77;
    newgameWindowlevelOneLegendsButton.rect.x = (int)WINDOW_WIDTH / 2 - 266;
    newgameWindowlevelOneLegendsButton.rect.y = (int)WINDOW_HEIGHT / 2 - 200;

    //level two button

    window.surface = IMG_Load("images//newcomponents/legendsOfWinterfell.png");

    if (!window.surface)
    {
        printf("levelTwoButton_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    newgameWindowlevelTwoLegendsButton.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!newgameWindowlevelTwoLegendsButton.tex)
    {
        printf("levelTwoButton_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    newgameWindowlevelTwoLegendsButton.rect;
    SDL_QueryTexture(newgameWindowlevelTwoLegendsButton.tex, NULL, NULL, &newgameWindowlevelTwoLegendsButton.rect.w, &newgameWindowlevelTwoLegendsButton.rect.h);
    newgameWindowlevelTwoLegendsButton.rect.w = (int)532;
    newgameWindowlevelTwoLegendsButton.rect.h = (int)77;
    newgameWindowlevelTwoLegendsButton.rect.x = (int)WINDOW_WIDTH / 2 - 266;
    newgameWindowlevelTwoLegendsButton.rect.y = (int)WINDOW_HEIGHT / 2 - 100;
}

void LegendsWindowCleanUp()
{

    SDL_DestroyTexture(newgameWindowlevelOneLegendsButton.tex);
    SDL_DestroyTexture(newgameWindowlevelTwoLegendsButton.tex);
    IMG_Quit();
}