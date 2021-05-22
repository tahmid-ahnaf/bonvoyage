#include "drawObstacle.h"

void levelOneObstacleUpdateAnimation()
{

    levelOneObstacleAnimationSpeed[0] -= 6;
    if (levelOneObstacleAnimationSpeed[0] < -WINDOW_WIDTH - 100)
    {
        levelOneObstacleAnimationSpeed[0] = WINDOW_WIDTH + 100;
        levelOneWindowObstacle[0].rect.w = (int)160;
        levelOneWindowObstacle[0].rect.h = (int)140;
    }
    levelOneObstacleAnimationSpeed[1] -= 6;
    if (levelOneObstacleAnimationSpeed[1] < -WINDOW_WIDTH - 100)
    {
        levelOneObstacleAnimationSpeed[1] = WINDOW_WIDTH * 2;
        levelOneWindowObstacle[1].rect.w = (int)224;
        levelOneWindowObstacle[1].rect.h = (int)136;
    }

    levelOneObstacleAnimationSpeed[2] -= 6;
    if (levelOneObstacleAnimationSpeed[2] < -WINDOW_WIDTH - 100)
    {
        levelOneObstacleAnimationSpeed[2] = WINDOW_WIDTH * 3;
        levelOneWindowObstacle[2].rect.w = (int)102;
        levelOneWindowObstacle[2].rect.h = (int)93;
    }
}

void levelOneDrawObstacleFunction()
{
    levelOneObstacleUpdateAnimation();

    for (int i = 0; i < 3; i++)
    {
        levelOneWindowObstacle[i].rect.x = levelOneObstacleAnimationSpeed[i] + 500 * i;
        SDL_RenderCopy(app.rend, levelOneWindowObstacle[i].tex, NULL, &levelOneWindowObstacle[i].rect);
    }
}