#include "initiateNewGameWindow.h"

void newgamewindow(void)
{
    //levelone button

    window.surface = IMG_Load("images/buttons/sundarbanButton.png");

    if (!window.surface)
    {
        printf("levelOneButton_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    newgameWindowlevelOneButton.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!newgameWindowlevelOneButton.tex)
    {
        printf("levelOneButton_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    newgameWindowlevelOneButton.rect;
    SDL_QueryTexture(newgameWindowlevelOneButton.tex, NULL, NULL, &newgameWindowlevelOneButton.rect.w, &newgameWindowlevelOneButton.rect.h);
    newgameWindowlevelOneButton.rect.w = (int)322;
    newgameWindowlevelOneButton.rect.h = (int)63;
    newgameWindowlevelOneButton.rect.x = (int)WINDOW_WIDTH / 2 - 161;
    newgameWindowlevelOneButton.rect.y = (int)WINDOW_HEIGHT / 2 - 200;

    //level two button

    window.surface = IMG_Load("images/buttons/coxsbazarButton.png");

    if (!window.surface)
    {
        printf("levelTwoButton_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    newgameWindowlevelTwoButton.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!newgameWindowlevelTwoButton.tex)
    {
        printf("levelTwoButton_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    newgameWindowlevelTwoButton.rect;
    SDL_QueryTexture(newgameWindowlevelTwoButton.tex, NULL, NULL, &newgameWindowlevelTwoButton.rect.w, &newgameWindowlevelTwoButton.rect.h);
    newgameWindowlevelTwoButton.rect.w = (int)322;
    newgameWindowlevelTwoButton.rect.h = (int)63;
    newgameWindowlevelTwoButton.rect.x = (int)WINDOW_WIDTH / 2 - 161;
    newgameWindowlevelTwoButton.rect.y = (int)WINDOW_HEIGHT / 2 - 100;
}

void newGameWindowCleanUp()
{
    // SDL_FreeSurface(newgameWindowlevelOneButton.surface);
    SDL_DestroyTexture(newgameWindowlevelOneButton.tex);
    // SDL_FreeSurface(window.surface );
    SDL_DestroyTexture(newgameWindowlevelTwoButton.tex);
}