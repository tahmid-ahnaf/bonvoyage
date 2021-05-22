#include "initiateLevelOneGameOver.h"

void levelOneGameOverLoad(void)
{

    window.surface = IMG_Load("images/levelone/gameover.png");

    if (!window.surface)
    {
        printf("gameover_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneGameOverMessage.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelOneGameOverMessage.tex)
    {
        printf("sky_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelOneGameOverMessage.rect;
    SDL_QueryTexture(levelOneGameOverMessage.tex, NULL, NULL, &levelOneGameOverMessage.rect.w, &levelOneGameOverMessage.rect.h);

    levelOneGameOverMessage.rect.w = (int)375;
    levelOneGameOverMessage.rect.h = (int)403;
    levelOneGameOverMessage.rect.x = (int)WINDOW_WIDTH / 2 - 187;
    levelOneGameOverMessage.rect.y = (int)WINDOW_HEIGHT / 2 - 201;
}

void levelOneGameOverCleanUp()
{

    SDL_DestroyTexture(levelOneGameOverMessage.tex);
    IMG_Quit();
}