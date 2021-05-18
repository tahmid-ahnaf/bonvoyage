#include "initiateObstacle.h"

void obstacleload(void)
{
    //sky
    for (int i = 0; i < 3; i++)
    {
        window.surface = IMG_Load("images/levelone/obstacles/rocktwin.png");

        if (!window.surface)
        {
            printf("Obstacle[i]_BUTTON Error: %s\n", IMG_GetError());
            SDL_DestroyRenderer(app.rend);
            SDL_DestroyWindow(app.window);
            SDL_Quit();
            exit(1);
        }

        levelOneWindowObstacle[i].tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
        SDL_FreeSurface(window.surface);
        if (!levelOneWindowObstacle[i].tex)
        {
            printf("Obstacle[i]_  Texture %s\n", SDL_GetError());
            SDL_DestroyRenderer(app.rend);
            SDL_DestroyWindow(app.window);
            SDL_Quit();
            exit(1);
        }
        levelOneWindowObstacle[i].rect;
        SDL_QueryTexture(levelOneWindowObstacle[i].tex, NULL, NULL, &levelOneWindowObstacle[i].rect.w, &levelOneWindowObstacle[i].rect.h);
        levelOneWindowObstacle[i].rect.w = (int)160;
        levelOneWindowObstacle[i].rect.h = (int)140;
        levelOneWindowObstacle[i].rect.x = (int)(i + 1) * WINDOW_WIDTH + 100;
        levelOneWindowObstacle[i].rect.y = (int)700;
    }
}

void obstacleCleanUp()
{
    for (int i = 0; i < 3; i++)
    {
        SDL_DestroyTexture(levelOneWindowObstacle[i].tex);
    }

    IMG_Quit();
}