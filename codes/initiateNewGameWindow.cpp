#include "initiateNewGameWindow.h"

void newgamewindow(void)
{
    //levelone button

    welcome_window.levelOneButton.surface = IMG_Load("images/level1.png");

    if (!welcome_window.levelOneButton.surface)
    {
        printf("levelOneButton_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    welcome_window.levelOneButton.tex = SDL_CreateTextureFromSurface(app.rend, welcome_window.levelOneButton.surface);

    if (!welcome_window.levelOneButton.tex)
    {
        printf("levelOneButton_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    welcome_window.levelOneButton.rect;
    SDL_QueryTexture(welcome_window.levelOneButton.tex, NULL, NULL, &welcome_window.levelOneButton.rect.w, &welcome_window.levelOneButton.rect.h);
    welcome_window.levelOneButton.rect.w = (int)400;
    welcome_window.levelOneButton.rect.h = (int)100;
    welcome_window.levelOneButton.rect.x = (int)WINDOW_WIDTH / 2 - 200;
    welcome_window.levelOneButton.rect.y = (int)WINDOW_HEIGHT / 2 - 200;

    //level two button

    welcome_window.levelTwoButton.surface = IMG_Load("images/level2.png");

    if (!welcome_window.levelTwoButton.surface)
    {
        printf("levelTwoButton_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    welcome_window.levelTwoButton.tex = SDL_CreateTextureFromSurface(app.rend, welcome_window.levelTwoButton.surface);

    if (!welcome_window.levelTwoButton.tex)
    {
        printf("levelTwoButton_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    welcome_window.levelTwoButton.rect;
    SDL_QueryTexture(welcome_window.levelTwoButton.tex, NULL, NULL, &welcome_window.levelTwoButton.rect.w, &welcome_window.levelTwoButton.rect.h);
    welcome_window.levelTwoButton.rect.w = (int)400;
    welcome_window.levelTwoButton.rect.h = (int)100;
    welcome_window.levelTwoButton.rect.x = (int)WINDOW_WIDTH / 2 - 200;
    welcome_window.levelTwoButton.rect.y = (int)WINDOW_HEIGHT / 2 - 100;
}

void newGameWindowCleanUp()
{
    SDL_FreeSurface(welcome_window.levelOneButton.surface);
    SDL_DestroyTexture(welcome_window.levelOneButton.tex);
    SDL_FreeSurface(welcome_window.levelTwoButton.surface);
    SDL_DestroyTexture(welcome_window.levelTwoButton.tex);
}