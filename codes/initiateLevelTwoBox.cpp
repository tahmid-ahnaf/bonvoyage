#include "initiateLevelTwoBox.h"

void InvisibleBorderLoad()
{
    window.surface = IMG_Load("images/level2obstacles/border.png");

    if (!window.surface)
    {
        printf("BORDER Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoInvisibleBorder.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!levelTwoInvisibleBorder.tex)
    {
        printf("levelTwoInvisibleBorder.tex %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoInvisibleBorder.rect;
    SDL_QueryTexture(levelTwoInvisibleBorder.tex, NULL, NULL, &levelTwoInvisibleBorder.rect.w, &levelTwoInvisibleBorder.rect.h);
    levelTwoInvisibleBorder.rect.w = (int)594;
    levelTwoInvisibleBorder.rect.h = (int)75;
    levelTwoInvisibleBorder.rect.x = (int)WINDOW_WIDTH / 2;
    levelTwoInvisibleBorder.rect.y = (int)WINDOW_HEIGHT / 2 - 100 + 30;
}

void InvisibleBorderCleanUp()
{

    SDL_DestroyTexture(levelTwoInvisibleBorder.tex);
    IMG_Quit();
}

void LevelTwoBoxLoad(void)
{
    window.surface = IMG_Load("images/leveltwo/new/uppertrack.png");

    if (!window.surface)
    {
        printf("BOX Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoBox.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!levelTwoBox.tex)
    {
        printf("BOX TEXTURE ERROR%s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoBox.rect;
    SDL_QueryTexture(levelTwoBox.tex, NULL, NULL, &levelTwoBox.rect.w, &levelTwoBox.rect.h);

    levelTwoBox.rect.w = (int)634;
    levelTwoBox.rect.h = (int)105;
    levelTwoBox.rect.x = (int)WINDOW_WIDTH / 2;
    levelTwoBox.rect.y = (int)WINDOW_HEIGHT / 2 - 100;
    InvisibleBorderLoad();
}

void BoxCleanUp()
{
    SDL_DestroyTexture(levelTwoBox.tex);
    InvisibleBorderCleanUp();
    IMG_Quit();
}
