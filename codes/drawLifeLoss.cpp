#include "drawLifeLoss.h"

void lifeUpdateAnimation()
{

    levelOneLifeAnimationSpeed[0] -= 3;
    if (levelOneLifeAnimationSpeed[0] < 10)
    {
        levelOneLifeAnimationSpeed[0] = 700;
        levelOneLifeLoss[0].rect.w = (int)0;
        levelOneLifeLoss[0].rect.h = (int)0;
    }
    levelOneLifeAnimationSpeed[1] -= 3;
    if (levelOneLifeAnimationSpeed[1] < -10)
    {
        levelOneLifeAnimationSpeed[1] = 700;
        levelOneLifeLoss[1].rect.w = (int)0;
        levelOneLifeLoss[1].rect.h = (int)0;
    }

    levelOneLifeAnimationSpeed[2] -= 3;
    if (levelOneLifeAnimationSpeed[2] < 10)
    {
        levelOneLifeAnimationSpeed[2] = 700;
        levelOneLifeLoss[2].rect.w = (int)0;
        levelOneLifeLoss[2].rect.h = (int)0;
    }
}

void levelOneDrawLifeLossFunction()
{
    lifeUpdateAnimation();

    for (int i = 0; i < 3; i++)
    {
        levelOneLifeLoss[i].rect.y = levelOneLifeAnimationSpeed[i];
        levelOneLifeLoss[i].rect.x = 700;
        SDL_RenderCopy(app.rend, levelOneLifeLoss[i].tex, NULL, &levelOneLifeLoss[i].rect);

        // SDL_RenderCopy(app.rend, levelOneWindowObstacle[i].tex, NULL, &levelOneWindowObstacle[i].rect);
    }
}