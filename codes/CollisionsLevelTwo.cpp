#include "CollisionsLevelTwo.h" 

void collisionsLevelTwo()
{   
      
        SDL_bool COLLISION = SDL_HasIntersection(&levelTwoCoin1.rect, &levelTwoWindowCharacterPosition.rect);
        if (COLLISION)
        {
            Mix_PlayMusic(coingain, 1);
            currentScore+=5;
            levelTwoCoin1.rect.w = 0;
            levelTwoCoin1.rect.h = 0;
            levelTwoCoinPointPopUp.rect.w = 50;
            levelTwoCoinPointPopUp.rect.h = 50;
            levelTwoCoinPointPopUp.rect.x = levelTwoCoin1.rect.x;
            levelTwoCoinPointPopUp.rect.y = levelTwoCoin1.rect.y;
            DELAY_COUNT_FOR_POINT_POPUP++;
        }
        if (DELAY_COUNT_FOR_POINT_POPUP > 0)
        {
            DELAY_COUNT_FOR_POINT_POPUP++;
            levelTwoCoinPointPopUp.rect.y -= 5;
        }
        if (DELAY_COUNT_FOR_POINT_POPUP == 40)
        {
            DELAY_COUNT_FOR_POINT_POPUP = 0;
            levelTwoCoinPointPopUp.rect.w = 0;
            levelTwoCoinPointPopUp.rect.h = 0;
        }

       SDL_bool COLLISION_2 = SDL_HasIntersection(&levelTwoCoin2.rect, &levelTwoWindowCharacterPosition.rect);

        if (COLLISION_2)
        {
            Mix_PlayMusic(coingain, 1);
            levelTwoCoin2.rect.w = 0;
            levelTwoCoin2.rect.h = 0;
            currentScore+=5;
            levelTwoCoinPointPopUp.rect.w = 50;
            levelTwoCoinPointPopUp.rect.h = 50;
            levelTwoCoinPointPopUp.rect.x = levelTwoCoin2.rect.x;
            levelTwoCoinPointPopUp.rect.y = levelTwoCoin2.rect.y;
            DELAY_COUNT_FOR_POINT_POPUP++;
        }
        if (DELAY_COUNT_FOR_POINT_POPUP > 0)
        {
            DELAY_COUNT_FOR_POINT_POPUP++;
            levelTwoCoinPointPopUp.rect.y -= 5;
        }
        if (DELAY_COUNT_FOR_POINT_POPUP == 40)
        {
            DELAY_COUNT_FOR_POINT_POPUP = 0;
            levelTwoCoinPointPopUp.rect.w = 0;
            levelTwoCoinPointPopUp.rect.h = 0;
        }

         SDL_bool COLLISION_3 = SDL_HasIntersection(&levelTwoBomb.rect, &levelTwoWindowCharacterPosition.rect);

        if (COLLISION_3)
        {
            Mix_PlayMusic(explosionsound, 1);
            LIFE_PERCENTAGE += 200;
            levelTwoExplosion.rect.w = (int)333 / 1.5;
            levelTwoExplosion.rect.h = (int)320 / 1.5;
            levelTwoExplosion.rect.x = levelTwoBomb.rect.x;
            levelTwoExplosion.rect.y = levelTwoBomb.rect.y;
            levelTwoBomb.rect.w = 0;
            levelTwoBomb.rect.h = 0;
            DELAY_COUNT_FOR_EXPLOSION = 0;
            
            levelTwoWindowCharacter.surface = IMG_Load("images/level2obstacles/sonicsprite2.png");
            levelTwoWindowCharacter.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindowCharacter.surface);
            DELAY_COUNT_FOR_CHARACTER_COLLISION_EFFECT=0;
            DELAY_COUNT_FOR_CHARACTER_COLLISION_EFFECT++;
        }
        else
        {
            DELAY_COUNT_FOR_EXPLOSION++;
        }
        if (DELAY_COUNT_FOR_EXPLOSION == 10 && levelTwoBomb.rect.w == 0)
        {
             levelTwoExplosion.rect.w = 0;
             levelTwoExplosion.rect.h = 0;
            DELAY_COUNT_FOR_EXPLOSION = 0;
        }

        SDL_bool COLLISION_4 = SDL_HasIntersection(&levelTwoInvisibleBorder.rect, &levelTwoWindowCharacterPosition.rect);

        if (COLLISION_4)
        {
           LIFE_PERCENTAGE += 20;
           levelTwoWindowCharacterPosition.rect.y = levelTwoInvisibleBorder.rect.y + levelTwoInvisibleBorder.rect.h + 20;
        }


        // levelTwoWindow.lifescorertext.surface = TTF_RenderText_Solid(font, LIFE_STRING , color);
        // levelTwoWindow.lifescorertext.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.lifescorertext.surface);
        // levelTwoWindow.lifescorertext.rect;
        // SDL_QueryTexture(levelTwoWindow.lifescorertext.tex, NULL, NULL, &levelTwoWindow.lifescorertext.rect.w, &levelTwoWindow.lifescorertext.rect.h);

        // levelTwoWindow.lifescorertext.rect.w = (int)levelTwoWindow.lifescorertext.surface->w;
        // levelTwoWindow.lifescorertext.rect.h = (int)levelTwoWindow.lifescorertext.surface->h;
        // levelTwoWindow.lifescorertext.rect.x = (int)1163;
        // levelTwoWindow.lifescorertext.rect.y = (int)69;


        // CURRENT_LIFE = 100 - (LIFE_PERCENTAGE / 20);
        // sprintf(LIFE_STRING, "%i", CURRENT_LIFE);

        // if(CURRENT_LIFE<=10)
        // {
        //     CHARACTER2 = IMG_Load("images/level2obstacles/sonicsprite3.png");
        //     CHARACTER2_TEX = SDL_CreateTextureFromSurface(rend, CHARACTER2);
        // }
        // else if(DELAY_COUNT_FOR_CHARACTER_COLLISION_EFFECT==0)
        // {
        //     CHARACTER2 = IMG_Load("images/level2obstacles/sonicsprite.png");
        //     CHARACTER2_TEX = SDL_CreateTextureFromSurface(rend, CHARACTER2);
        // }
        SDL_bool COLLISION_5 = SDL_HasIntersection(&levelTwoHeart.rect, &levelTwoWindowCharacterPosition.rect);

        if (COLLISION_5)
        {
            Mix_PlayMusic(coingain, 1);
            levelTwoHeart.rect.w = 0;
            levelTwoHeart.rect.h = 0;

            if (CURRENT_LIFE >= 95)
            {
               LIFE_PERCENTAGE = 0;
            }

           levelTwoLifeBonusPopUp.rect.w = 50;
           levelTwoLifeBonusPopUp.rect.h = 50;
           levelTwoLifeBonusPopUp.rect.x = levelTwoHeart.rect.x;
           levelTwoLifeBonusPopUp.rect.y = levelTwoHeart.rect.y;
        }
        /* ############################### HANDLING THE COLLISION BETWEEN HEARTS AND THE CHARACTER2  ############################### */

        /* ############################### HANDLING THE MOVEMENT OF LIFEBONUSPOPUP TO THE LIFE RECT  ############################### */

    //    levelTwoLifeBonusPopUp.rect.x+= (levelTwoWindow.lifescorertext.rect.x -levelTwoLifeBonusPopUp.rect.x)/30;
    //    levelTwoLifeBonusPopUp.rect.y+= (levelTwoWindow.lifescorertext.rect.y -levelTwoLifeBonusPopUp.rect.y)/30;   

    //     if(abs(levelTwoLifeBonusPopUp.rect.x -levelTwoWindow.lifescorertext.rect.x )<=30)
    //       {
    //         if(CURRENT_LIFE>=95 &&levelTwoLifeBonusPopUp.rect.w==50)
    //         {
    //            LIFE_PERCENTAGE=0;
    //         }
    //     else if(levelTwoLifeBonusPopUp.rect.w==50)
    //       {
    //         LIFE_PERCENTAGE-=100;
    //         Mix_PlayMusic(pointgainsound, 1);
    //         font = TTF_OpenFont("Freshman.ttf", 40);
    //         levelTwoWindow.lifescorertext.rect.x =1154;
    //         levelTwoWindow.lifescorertext.rect.y =62;
    //         DELAY_COUNT_FOR_LIFE_RECT_CHANGE++;
    //       }

    //      levelTwoLifeBonusPopUp.rect.w = 0;
    //      levelTwoLifeBonusPopUp.rect.h = 0;
    //       }

    //     if(DELAY_COUNT_FOR_LIFE_RECT_CHANGE>0)
    //     {
    //        DELAY_COUNT_FOR_LIFE_RECT_CHANGE++;
    //     }
    //     if(DELAY_COUNT_FOR_LIFE_RECT_CHANGE==15)
    //     {
    //         DELAY_COUNT_FOR_LIFE_RECT_CHANGE=0;
    //         font = TTF_OpenFont("Freshman.ttf", 30);
    //         levelTwoWindow.lifescorertext.rect.x = (int)1163;
    //         levelTwoWindow.lifescorertext.rect.y = (int)69;
    //     }


}