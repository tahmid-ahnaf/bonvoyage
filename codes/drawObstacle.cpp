#include "drawObstacle.h"

void obstacleupdateanimation()
{

    levelOneObstacleAnimationSpeed[0] -= 6;
    if (levelOneObstacleAnimationSpeed[0] < -WINDOW_WIDTH)
    {
        levelOneObstacleAnimationSpeed[0] = WINDOW_WIDTH * 2;
    }
    levelOneObstacleAnimationSpeed[1] -= 6;
    if (levelOneObstacleAnimationSpeed[1] < -WINDOW_WIDTH * 1)
    {
        levelOneObstacleAnimationSpeed[1] = WINDOW_WIDTH * 3;
    }

    levelOneObstacleAnimationSpeed[2] -= 6;
    if (levelOneObstacleAnimationSpeed[2] < -WINDOW_WIDTH * 2)
    {
        levelOneObstacleAnimationSpeed[2] = WINDOW_WIDTH * 4;
    }
}

void drawObstacleFunction()
{
    obstacleupdateanimation();

    for (int i = 0; i < 3; i++)
    {

        //SDL_RenderCopy(app.rend, levelOneWindowCoins[i].tex, NULL, &levelOneWindowCoins[i].rect);
        SDL_RenderCopy(app.rend, levelOneWindowObstacle[i].tex, NULL, &levelOneWindowObstacle[i].rect);
        levelOneWindowObstacle[i].rect.x = levelOneObstacleAnimationSpeed[i] + (i + 1) * WINDOW_WIDTH;
        SDL_RenderCopy(app.rend, levelOneWindowObstacle[i].tex, NULL, &levelOneWindowObstacle[i].rect);
    }
}