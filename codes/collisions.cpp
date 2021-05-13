#include "collisions.h" 

void collisions()
{   
      
        SDL_bool COLLISION = SDL_HasIntersection(&levelTwoWindow.level2Coin.rect, &levelTwoWindow.character2Position.rect);
        if (COLLISION)
        {
            Mix_PlayMusic(variables.levelTwoVars.coingain, 1);
            variables.levelTwoVars.currentScore+=5;
            levelTwoWindow.level2Coin.rect.w = 0;
            levelTwoWindow.level2Coin.rect.h = 0;
            levelTwoWindow.coin_point_popup.rect.w = 50;
            levelTwoWindow.coin_point_popup.rect.h = 50;
            levelTwoWindow.coin_point_popup.rect.x = levelTwoWindow.level2Coin.rect.x;
            levelTwoWindow.coin_point_popup.rect.y = levelTwoWindow.level2Coin.rect.y;
            variables.levelTwoVars.DELAY_COUNT_FOR_POINT_POPUP++;
        }
        if (variables.levelTwoVars.DELAY_COUNT_FOR_POINT_POPUP > 0)
        {
            variables.levelTwoVars.DELAY_COUNT_FOR_POINT_POPUP++;
            levelTwoWindow.coin_point_popup.rect.y -= 5;
        }
        if (variables.levelTwoVars.DELAY_COUNT_FOR_POINT_POPUP == 40)
        {
            variables.levelTwoVars.DELAY_COUNT_FOR_POINT_POPUP = 0;
            levelTwoWindow.coin_point_popup.rect.w = 0;
            levelTwoWindow.coin_point_popup.rect.h = 0;
        }

       SDL_bool COLLISION_2 = SDL_HasIntersection(&levelTwoWindow.level2Coin2.rect, &levelTwoWindow.character2Position.rect);

        if (COLLISION_2)
        {
            Mix_PlayMusic(variables.levelTwoVars.coingain, 1);
            levelTwoWindow.level2Coin2.rect.w = 0;
            levelTwoWindow.level2Coin2.rect.h = 0;
            variables.levelTwoVars.currentScore+=5;
            levelTwoWindow.coin_point_popup.rect.w = 50;
            levelTwoWindow.coin_point_popup.rect.h = 50;
            levelTwoWindow.coin_point_popup.rect.x = levelTwoWindow.level2Coin2.rect.x;
            levelTwoWindow.coin_point_popup.rect.y = levelTwoWindow.level2Coin2.rect.y;
            variables.levelTwoVars.DELAY_COUNT_FOR_POINT_POPUP++;
        }
        if (variables.levelTwoVars.DELAY_COUNT_FOR_POINT_POPUP > 0)
        {
            variables.levelTwoVars.DELAY_COUNT_FOR_POINT_POPUP++;
            levelTwoWindow.coin_point_popup.rect.y -= 5;
        }
        if (variables.levelTwoVars.DELAY_COUNT_FOR_POINT_POPUP == 40)
        {
            variables.levelTwoVars.DELAY_COUNT_FOR_POINT_POPUP = 0;
            levelTwoWindow.coin_point_popup.rect.w = 0;
            levelTwoWindow.coin_point_popup.rect.h = 0;
        }

         SDL_bool COLLISION_3 = SDL_HasIntersection(&levelTwoWindow.bomb.rect, &levelTwoWindow.character2Position.rect);

        if (COLLISION_3)
        {
            Mix_PlayMusic(variables.levelTwoVars.explosionsound, 1);
            variables.levelTwoVars.LIFE_PERCENTAGE += 200;
             levelTwoWindow.explosion.rect.w = (int)333 / 1.5;
             levelTwoWindow.explosion.rect.h = (int)320 / 1.5;
             levelTwoWindow.explosion.rect.x = levelTwoWindow.bomb.rect.x;
             levelTwoWindow.explosion.rect.y = levelTwoWindow.bomb.rect.y;
            levelTwoWindow.bomb.rect.w = 0;
            levelTwoWindow.bomb.rect.h = 0;
            variables.levelTwoVars.DELAY_COUNT_FOR_EXPLOSION = 0;
            
            levelTwoWindow.character2.surface = IMG_Load("images/level2obstacles/sonicsprite2.png");
            levelTwoWindow.character2.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.character2.surface);
            variables.levelTwoVars.DELAY_COUNT_FOR_CHARACTER_COLLISION_EFFECT=0;
            variables.levelTwoVars.DELAY_COUNT_FOR_CHARACTER_COLLISION_EFFECT++;
        }
        else
        {
            variables.levelTwoVars.DELAY_COUNT_FOR_EXPLOSION++;
        }
        if (variables.levelTwoVars.DELAY_COUNT_FOR_EXPLOSION == 10 && levelTwoWindow.bomb.rect.w == 0)
        {
             levelTwoWindow.explosion.rect.w = 0;
             levelTwoWindow.explosion.rect.h = 0;
            variables.levelTwoVars.DELAY_COUNT_FOR_EXPLOSION = 0;
        }

        SDL_bool COLLISION_4 = SDL_HasIntersection(&levelTwoWindow.invisibleborder.rect, &levelTwoWindow.character2Position.rect);

        if (COLLISION_4)
        {
           variables.levelTwoVars.LIFE_PERCENTAGE += 20;
           levelTwoWindow.character2Position.rect.y = levelTwoWindow.invisibleborder.rect.y + levelTwoWindow.invisibleborder.rect.h + 20;
        }


        // levelTwoWindow.lifescorertext.surface = TTF_RenderText_Solid(variables.levelTwoVars.font, variables.levelTwoVars.LIFE_STRING , variables.levelTwoVars.color);
        // levelTwoWindow.lifescorertext.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.lifescorertext.surface);
        // levelTwoWindow.lifescorertext.rect;
        // SDL_QueryTexture(levelTwoWindow.lifescorertext.tex, NULL, NULL, &levelTwoWindow.lifescorertext.rect.w, &levelTwoWindow.lifescorertext.rect.h);

        // levelTwoWindow.lifescorertext.rect.w = (int)levelTwoWindow.lifescorertext.surface->w;
        // levelTwoWindow.lifescorertext.rect.h = (int)levelTwoWindow.lifescorertext.surface->h;
        // levelTwoWindow.lifescorertext.rect.x = (int)1163;
        // levelTwoWindow.lifescorertext.rect.y = (int)69;


        // variables.levelTwoVars.CURRENT_LIFE = 100 - (variables.levelTwoVars.LIFE_PERCENTAGE / 20);
        // sprintf(variables.levelTwoVars.LIFE_STRING, "%i", variables.levelTwoVars.CURRENT_LIFE);

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

        SDL_bool COLLISION_5 = SDL_HasIntersection(&levelTwoWindow.heart.rect, &levelTwoWindow.character2Position.rect);

        if (COLLISION_5)
        {
            Mix_PlayMusic(variables.levelTwoVars.coingain, 1);
            levelTwoWindow.heart.rect.w = 0;
            levelTwoWindow.heart.rect.h = 0;

            if (variables.levelTwoVars.CURRENT_LIFE >= 95)
            {
               variables.levelTwoVars.LIFE_PERCENTAGE = 0;
            }

           levelTwoWindow.lifebonuspopup.rect.w = 50;
           levelTwoWindow.lifebonuspopup.rect.h = 50;
           levelTwoWindow.lifebonuspopup.rect.x = levelTwoWindow.heart.rect.x;
           levelTwoWindow.lifebonuspopup.rect.y = levelTwoWindow.heart.rect.y;
        }
        /* ############################### HANDLING THE COLLISION BETWEEN HEARTS AND THE CHARACTER2  ############################### */

        /* ############################### HANDLING THE MOVEMENT OF LIFEBONUSPOPUP TO THE LIFE RECT  ############################### */

    //    levelTwoWindow.lifebonuspopup.rect.x+= (levelTwoWindow.lifescorertext.rect.x -levelTwoWindow.lifebonuspopup.rect.x)/30;
    //    levelTwoWindow.lifebonuspopup.rect.y+= (levelTwoWindow.lifescorertext.rect.y -levelTwoWindow.lifebonuspopup.rect.y)/30;   

    //     if(abs(levelTwoWindow.lifebonuspopup.rect.x -levelTwoWindow.lifescorertext.rect.x )<=30)
    //       {
    //         if(variables.levelTwoVars.CURRENT_LIFE>=95 &&levelTwoWindow.lifebonuspopup.rect.w==50)
    //         {
    //            variables.levelTwoVars.LIFE_PERCENTAGE=0;
    //         }
    //     else if(levelTwoWindow.lifebonuspopup.rect.w==50)
    //       {
    //         variables.levelTwoVars.LIFE_PERCENTAGE-=100;
    //         Mix_PlayMusic(variables.levelTwoVars.pointgainsound, 1);
    //         variables.levelTwoVars.font = TTF_OpenFont("Freshman.ttf", 40);
    //         levelTwoWindow.lifescorertext.rect.x =1154;
    //         levelTwoWindow.lifescorertext.rect.y =62;
    //         variables.levelTwoVars.DELAY_COUNT_FOR_LIFE_RECT_CHANGE++;
    //       }

    //      levelTwoWindow.lifebonuspopup.rect.w = 0;
    //      levelTwoWindow.lifebonuspopup.rect.h = 0;
    //       }

    //     if(variables.levelTwoVars.DELAY_COUNT_FOR_LIFE_RECT_CHANGE>0)
    //     {
    //        variables.levelTwoVars.DELAY_COUNT_FOR_LIFE_RECT_CHANGE++;
    //     }
    //     if(variables.levelTwoVars.DELAY_COUNT_FOR_LIFE_RECT_CHANGE==15)
    //     {
    //         variables.levelTwoVars.DELAY_COUNT_FOR_LIFE_RECT_CHANGE=0;
    //         variables.levelTwoVars.font = TTF_OpenFont("Freshman.ttf", 30);
    //         levelTwoWindow.lifescorertext.rect.x = (int)1163;
    //         levelTwoWindow.lifescorertext.rect.y = (int)69;
    //     }


}
