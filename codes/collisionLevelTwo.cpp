#include "collisionLevelTwo.h"

void collisionsLevelTwo()
{
    for (int i = 0; i < 7; i++)
    {
        SDL_bool collisionBetweenCharacterandCoinOne = SDL_HasIntersection(&levelTwoWindowCoins[i].rect, &levelTwoWindowCharacterPosition.rect);
        if (collisionBetweenCharacterandCoinOne)
        {
            Mix_PlayChannel(-1, coingain, 0);
            currentScore += 5;
            levelTwoWindowCoins[i].rect.w = 0;
            levelTwoWindowCoins[i].rect.h = 0;
            levelTwoCoinPointPopUp.rect.w = 50;
            levelTwoCoinPointPopUp.rect.h = 50;
            levelTwoCoinPointPopUp.rect.x = levelTwoWindowCoins[i].rect.x;
            levelTwoCoinPointPopUp.rect.y = levelTwoWindowCoins[i].rect.y;
            delayCountForPointPopUp++;
        }
        if (delayCountForPointPopUp > 0)
        {
            delayCountForPointPopUp++;
            levelTwoCoinPointPopUp.rect.y -= 1;
        }
        if (delayCountForPointPopUp == 400)
        {
            delayCountForPointPopUp = 0;
            levelTwoCoinPointPopUp.rect.w = 0;
            levelTwoCoinPointPopUp.rect.h = 0;
        }
    }

    SDL_bool collisionBetweenCharacterandBomb = SDL_HasIntersection(&levelTwoBomb.rect, &levelTwoWindowCharacterPosition.rect);

    if (collisionBetweenCharacterandBomb && currentLife>0)
    {
        Mix_PlayChannel(-1, explosionsound, 0);
        lifePercentage += 200;
        levelTwoExplosion.rect.w = (int)333 / 1.5;
        levelTwoExplosion.rect.h = (int)320 / 1.5;
        levelTwoExplosion.rect.x = levelTwoBomb.rect.x;
        levelTwoExplosion.rect.y = levelTwoBomb.rect.y;
        levelTwoBomb.rect.w = 0;
        levelTwoBomb.rect.h = 0;
        delayCountForExplosion = 0;

        levelTwoWindowCharacter.surface = IMG_Load("images/level2obstacles/sonicsprite3.png");
        levelTwoWindowCharacter.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindowCharacter.surface);
        delayCountForCharacterCollisionEffect = 0;
        delayCountForCharacterCollisionEffect++;
    }
    else
    {
        delayCountForExplosion++;
    }
    if (delayCountForExplosion == 10 && levelTwoBomb.rect.w == 0)
    {
        levelTwoExplosion.rect.w = 0;
        levelTwoExplosion.rect.h = 0;
        delayCountForExplosion = 0;
    }

    for (int i = 0; i < 2; i++)
    {
        SDL_bool collisionBetweenCharacterandInvisibleBorders = SDL_HasIntersection(&levelTwoInvisibleBorder[i].rect, &levelTwoWindowCharacterPosition.rect);

        if (collisionBetweenCharacterandInvisibleBorders)
        {
            lifePercentage += 5;
            levelTwoWindowCharacterPosition.rect.y = levelTwoInvisibleBorder[i].rect.y + levelTwoInvisibleBorder[i].rect.h + 20;
        }
    }

    SDL_bool collisionBetweenCharacterandHeart = SDL_HasIntersection(&levelTwoHeart.rect, &levelTwoWindowCharacterPosition.rect);

    if (collisionBetweenCharacterandHeart)
    {
        Mix_PlayChannel(-1, coingain, 0);
        levelTwoHeart.rect.w = 0;
        levelTwoHeart.rect.h = 0;

        if (currentLife >= 95)
        {
            lifePercentage = 0;
        }

        levelTwoLifeBonusPopUp.rect.w = 50;
        levelTwoLifeBonusPopUp.rect.h = 50;
        levelTwoLifeBonusPopUp.rect.x = levelTwoHeart.rect.x;
        levelTwoLifeBonusPopUp.rect.y = levelTwoHeart.rect.y;
    }
}