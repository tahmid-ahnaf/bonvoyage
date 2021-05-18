#include "drawLevelTwoLife.h"
 
void heartDisplayAndScoreDisplayCleanUp()
{
    SDL_FreeSurface(levelTwoHeartDisplay.surface);
    SDL_DestroyTexture(levelTwoHeartDisplay.tex);  
    SDL_FreeSurface(levelTwoLifeScoreDisplay.surface);
    SDL_DestroyTexture(levelTwoLifeScoreDisplay.tex);   
}
 void drawLevelTwoLifeFunction()
 {
    SDL_RenderCopy(app.rend, levelTwoLifeScoreDisplay.tex , 0, &levelTwoLifeScoreDisplay.rect);
    SDL_RenderCopy(app.rend, levelTwoHeartDisplay.tex , 0, &levelTwoHeartDisplay.rect);
    SDL_RenderCopy(app.rend, levelTwoLifeScoreText.tex , 0, &levelTwoLifeScoreText.rect);
    SDL_RenderCopy(app.rend, levelTwoScoreText.tex , 0, &levelTwoScoreText.rect);
    SDL_RenderCopy(app.rend, levelTwoHighScoreText.tex , 0, &levelTwoHighScoreText.rect);
 }

void drawLevelTwoHeartPopupFunction(){
//   SDL_RenderCopy(app.rend,levelTwoWindow.coin_point_popup.tex, 0, &levelTwoWindow.coin_point_popup.rect);
    SDL_RenderCopy(app.rend,levelTwoLifeBonusPopUp.tex, 0, &levelTwoLifeBonusPopUp.rect);
}

void popuppointcleanup(){
    // SDL_FreeSurface(levelTwoLifeBonusPopUp.surface);
    SDL_DestroyTexture(levelTwoLifeBonusPopUp.tex);
    heartDisplayAndScoreDisplayCleanUp();
}

 
void drawLevelTwoHeartFunction()
{
//      SDL_RenderCopy(rend, COIN_TEX, &ROTATING_COIN, &COIN_RECT);
    SDL_RenderCopy(app.rend, levelTwoHeart.tex,&levelTwoRotatingHeart.rect, &levelTwoHeart.rect);
    
     
}
void updateLifeBonusPopupFunction()
{

        levelTwoLifeBonusPopUp.rect.x+= (levelTwoLifeScoreText.rect.x - levelTwoLifeBonusPopUp.rect.x)/30;
        levelTwoLifeBonusPopUp.rect.y+= (levelTwoLifeScoreText.rect.y - levelTwoLifeBonusPopUp.rect.y)/30;

        if(abs(levelTwoLifeBonusPopUp.rect.x - levelTwoLifeScoreText.rect.x )<=30)
          {
            if(CURRENT_LIFE>=95 && levelTwoLifeBonusPopUp.rect.w==50)
            {
                LIFE_PERCENTAGE=0;
            }
        else if(levelTwoLifeBonusPopUp.rect.w==50)
          {
            LIFE_PERCENTAGE-=100;
            Mix_PlayMusic(pointgainsound, 1);
            font = TTF_OpenFont("Freshman.ttf", 40);
            levelTwoLifeScoreText.rect.x =1154;
            levelTwoLifeScoreText.rect.y =62;
            DELAY_COUNT_FOR_LIFE_RECT_CHANGE++;
          }

        levelTwoLifeBonusPopUp.rect.w = 0;
        levelTwoLifeBonusPopUp.rect.h = 0;
          }

        if(DELAY_COUNT_FOR_LIFE_RECT_CHANGE>0)
        {
           DELAY_COUNT_FOR_LIFE_RECT_CHANGE++;
        }
        if(DELAY_COUNT_FOR_LIFE_RECT_CHANGE==15)
        {
            DELAY_COUNT_FOR_LIFE_RECT_CHANGE=0;
            // font =  TTF_OpenFont("Freshman.ttf", 30);
            levelTwoLifeScoreText.rect.x = (int)1163;
            levelTwoLifeScoreText.rect.y = (int)69;
        }
}

void updateHeartPosition()
{
   CURRENT_LIFE = 100 - (LIFE_PERCENTAGE / 20);
        sprintf(LIFE_STRING, "%i", CURRENT_LIFE);
    if (CURRENT_LIFE <= 95)
        {
            if (DELAY_COUNT_FOR_HEARTS == 0)
            {
                levelTwoHeart.rect.w = 0;
                levelTwoHeart.rect.h = 0;
            }

            DELAY_COUNT_FOR_HEARTS++;

            if (DELAY_COUNT_FOR_HEARTS == 30)
            {
                levelTwoHeart.rect.w = 100;
                levelTwoHeart.rect.h = 100;
                levelTwoHeart.rect.x = rand() % (WINDOW_WIDTH - 150);
                levelTwoHeart.rect.y = rand() % WINDOW_HEIGHT;

                if (levelTwoHeart.rect.y < 150 || levelTwoHeart.rect.y>750 )
                {
                    levelTwoHeart.rect.y = 500;
                }
            }
            if (DELAY_COUNT_FOR_HEARTS == 300)
            {
                levelTwoHeart.rect.w = 0;
                levelTwoHeart.rect.h = 0;
            }
            if (DELAY_COUNT_FOR_HEARTS == 500)
            {
                DELAY_COUNT_FOR_HEARTS = 0;
            }
        }
        else
        {
            levelTwoHeart.rect.w = 0;
            levelTwoHeart.rect.h = 0;
        }
     

       
}

void lifeatstakeaftereffect()
{
    if(CURRENT_LIFE<=10 && iflifeatstake==0)
        {
            iflifeatstake=1;
            levelTwoWindowCharacter.surface = IMG_Load("images/level2obstacles/sonicsprite3.png");
            levelTwoWindowCharacter.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindowCharacter.surface);
            
        }
        else if(CURRENT_LIFE>10 && iflifeatstake==1)
        {   
            iflifeatstake=0;
            levelTwoWindowCharacter.surface = IMG_Load("images/level2obstacles/sonicsprite.png");
            levelTwoWindowCharacter.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindowCharacter.surface);
        }
}


void drawLevelTwoLifeText()
{  
        levelTwoLifeScoreText.surface = TTF_RenderText_Solid( variables.font, LIFE_STRING , variables.color);
        levelTwoLifeScoreText.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoLifeScoreText.surface);
        levelTwoLifeScoreText.rect;
        SDL_QueryTexture(levelTwoLifeScoreText.tex, NULL, NULL, &levelTwoLifeScoreText.rect.w, &levelTwoLifeScoreText.rect.h);

        levelTwoLifeScoreText.rect.w = (int)levelTwoLifeScoreText.surface->w;
        levelTwoLifeScoreText.rect.h = (int)levelTwoLifeScoreText.surface->h;
        levelTwoLifeScoreText.rect.x = (int)1163;
        levelTwoLifeScoreText.rect.y = (int)69;

}


void LevelTwoLifeTextCleanUp()
{
        
    SDL_FreeSurface(levelTwoLifeScoreText.surface);
    SDL_DestroyTexture(levelTwoLifeScoreText.tex);
    SDL_FreeSurface(levelTwoScoreText.surface);
    SDL_DestroyTexture(levelTwoScoreText.tex);
    SDL_FreeSurface(levelTwoHighScoreText.surface);
    SDL_DestroyTexture(levelTwoHighScoreText.tex);
}

