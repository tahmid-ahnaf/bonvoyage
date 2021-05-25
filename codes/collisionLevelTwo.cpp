#include "collisionLevelTwo.h" 

void collisionsLevelTwo()
{   
    for(int i=0; i<5; i++)
    {
        SDL_bool collisionBetweenCharacterandCoinOne = SDL_HasIntersection(&levelTwoWindowCoins[i].rect, &levelTwoWindowCharacterPosition.rect);
        if (collisionBetweenCharacterandCoinOne)
        {
            Mix_PlayMusic(coingain, 1);
            currentScore+=5;
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
            levelTwoCoinPointPopUp.rect.y -= 5;
        }
        if (delayCountForPointPopUp == 40)
        {
            delayCountForPointPopUp = 0;
            levelTwoCoinPointPopUp.rect.w = 0;
            levelTwoCoinPointPopUp.rect.h = 0;
        }

        }
        // SDL_bool collisionBetweenCharacterandCoinOne = SDL_HasIntersection(&levelTwoCoin1.rect, &levelTwoWindowCharacterPosition.rect);
        // if (collisionBetweenCharacterandCoinOne)
        // {
        //     Mix_PlayMusic(coingain, 1);
        //     currentScore+=5;
        //     levelTwoCoin1.rect.w = 0;
        //     levelTwoCoin1.rect.h = 0;
        //     levelTwoCoinPointPopUp.rect.w = 50;
        //     levelTwoCoinPointPopUp.rect.h = 50;
        //     levelTwoCoinPointPopUp.rect.x = levelTwoCoin1.rect.x;
        //     levelTwoCoinPointPopUp.rect.y = levelTwoCoin1.rect.y;
        //     delayCountForPointPopUp++;
        // }
        // if (delayCountForPointPopUp > 0)
        // {
        //     delayCountForPointPopUp++;
        //     levelTwoCoinPointPopUp.rect.y -= 5;
        // }
        // if (delayCountForPointPopUp == 40)
        // {
        //     delayCountForPointPopUp = 0;
        //     levelTwoCoinPointPopUp.rect.w = 0;
        //     levelTwoCoinPointPopUp.rect.h = 0;
        // }

    //    SDL_bool collisionBetweenCharacterandCoinTwo = SDL_HasIntersection(&levelTwoCoin2.rect, &levelTwoWindowCharacterPosition.rect);

    //     if (collisionBetweenCharacterandCoinTwo)
    //     {
    //         Mix_PlayMusic(coingain, 1);
    //         levelTwoCoin2.rect.w = 0;
    //         levelTwoCoin2.rect.h = 0;
    //         currentScore+=5;
    //         levelTwoCoinPointPopUp.rect.w = 50;
    //         levelTwoCoinPointPopUp.rect.h = 50;
    //         levelTwoCoinPointPopUp.rect.x = levelTwoCoin2.rect.x;
    //         levelTwoCoinPointPopUp.rect.y = levelTwoCoin2.rect.y;
    //         delayCountForPointPopUp++;
    //     }
    //     if (delayCountForPointPopUp > 0)
    //     {
    //         delayCountForPointPopUp++;
    //         levelTwoCoinPointPopUp.rect.y -= 5;
    //     }
    //     if (delayCountForPointPopUp == 40)
    //     {
    //         delayCountForPointPopUp = 0;
    //         levelTwoCoinPointPopUp.rect.w = 0;
    //         levelTwoCoinPointPopUp.rect.h = 0;
    //     }

         SDL_bool collisionBetweenCharacterandBomb = SDL_HasIntersection(&levelTwoBomb.rect, &levelTwoWindowCharacterPosition.rect);

        if (collisionBetweenCharacterandBomb)
        {
            Mix_PlayMusic(explosionsound, 1);
            lifePercentage += 200;
            levelTwoExplosion.rect.w = (int)333 / 1.5;
            levelTwoExplosion.rect.h = (int)320 / 1.5;
            levelTwoExplosion.rect.x = levelTwoBomb.rect.x;
            levelTwoExplosion.rect.y = levelTwoBomb.rect.y;
            levelTwoBomb.rect.w = 0;
            levelTwoBomb.rect.h = 0;
            delayCountForExplosion = 0;
            
            levelTwoWindowCharacter.surface = IMG_Load("images/level2obstacles/sonicsprite2.png");
            levelTwoWindowCharacter.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindowCharacter.surface);
            delayCountForCharacterCollisionEffect=0;
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

        SDL_bool collisionBetweenCharacterandInvisibleBorder = SDL_HasIntersection(&levelTwoInvisibleBorder.rect, &levelTwoWindowCharacterPosition.rect);

        if (collisionBetweenCharacterandInvisibleBorder)
        {
           lifePercentage += 20;
           levelTwoWindowCharacterPosition.rect.y = levelTwoInvisibleBorder.rect.y + levelTwoInvisibleBorder.rect.h + 20;
        }

        SDL_bool collisionBetweenCharacterandHeart = SDL_HasIntersection(&levelTwoHeart.rect, &levelTwoWindowCharacterPosition.rect);

        if (collisionBetweenCharacterandHeart)
        {
            Mix_PlayMusic(coingain, 1);
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