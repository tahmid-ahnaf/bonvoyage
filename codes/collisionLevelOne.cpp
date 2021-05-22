#include "collisionLevelOne.h"

void collision()
{
    for (int i = 0; i < 5; i++)
    {

        if (SDL_HasIntersection(&characterFramePosition.rect, &levelOneWindowCoins[i].rect))
        {
            levelOneWindowCoins[i].rect.h = 0;
            levelOneWindowCoins[i].rect.w = 0;
            levelOneWindowCoinsEffect[i].rect.h = int(100);
            levelOneWindowCoinsEffect[i].rect.w = int(100);
            levelOneCurrentScore += 100;
            coineffectdelay();
        }
    }
    for (int i = 0; i < 3; i++)
    {

        if (SDL_HasIntersection(&characterFramePosition.rect, &levelOneWindowObstacle[i].rect))
        {
            SDL_SetTextureColorMod(levelOneWindowCharacter.tex, 255, 0, 0);
            levelOneWindowObstacle[i].rect.h = 0;
            levelOneWindowObstacle[i].rect.w = 0;
            levelOneLifeAnimationSpeed[i] = 700;
            levelOneLifeLoss[i].rect.h = int(60);
            levelOneLifeLoss[i].rect.w = int(60);
            if (lifeSize >= 1)
            {
                lifeSize--;
                break;
            }
        }

        if (SDL_HasIntersection(&tigerFramePosition.rect, &levelOneWindowObstacle[i].rect))
        {
            tigerYposition -= 8;
        }
    }
}