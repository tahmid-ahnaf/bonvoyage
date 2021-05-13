#include "drawheart.h"
 
void heartDisplayAndScoreDisplayCleanUp(){
     SDL_FreeSurface(levelTwoWindow.lifeheartdisplay.surface);
 SDL_DestroyTexture(levelTwoWindow.lifeheartdisplay.tex);  

       SDL_FreeSurface(levelTwoWindow.lifescoredisplay.surface);
    SDL_DestroyTexture(levelTwoWindow.lifescoredisplay.tex);   
}
 void drawLevelTwoLifeFunction(){
      SDL_RenderCopy(app.rend, levelTwoWindow.lifescoredisplay.tex , 0, &levelTwoWindow.lifescoredisplay.rect);
     SDL_RenderCopy(app.rend, levelTwoWindow.lifeheartdisplay.tex , 0, &levelTwoWindow.lifeheartdisplay.rect);
 

        SDL_RenderCopy(app.rend, levelTwoWindow.lifescorertext.tex , 0, &levelTwoWindow.lifescorertext.rect);
             SDL_RenderCopy(app.rend, levelTwoWindow.scoreText.tex , 0, &levelTwoWindow.scoreText.rect);
                  SDL_RenderCopy(app.rend, levelTwoWindow.highScoreText.tex , 0, &levelTwoWindow.highScoreText.rect);
 }

void drawLevelTwoHeartPopupFunction(){
//   SDL_RenderCopy(app.rend,levelTwoWindow.coin_point_popup.tex, 0, &levelTwoWindow.coin_point_popup.rect);
    SDL_RenderCopy(app.rend,levelTwoWindow.lifebonuspopup.tex, 0, &levelTwoWindow.lifebonuspopup.rect);
}

void popuppointcleanup(){
     SDL_FreeSurface(levelTwoWindow.lifebonuspopup.surface);
    SDL_DestroyTexture(levelTwoWindow.lifebonuspopup.tex);
    heartDisplayAndScoreDisplayCleanUp();
}

 
void drawLevelTwoHeartFunction()
{
//      SDL_RenderCopy(rend, COIN_TEX, &ROTATING_COIN, &COIN_RECT);
    SDL_RenderCopy(app.rend, levelTwoWindow.heart.tex,&levelTwoWindow.rotatingheart.rect, &levelTwoWindow.heart.rect);
    
     
}
void updateLifeBonusPopupFunction()
{

        levelTwoWindow.lifebonuspopup.rect.x+= (levelTwoWindow.lifescorertext.rect.x - levelTwoWindow.lifebonuspopup.rect.x)/30;
        levelTwoWindow.lifebonuspopup.rect.y+= (levelTwoWindow.lifescorertext.rect.y - levelTwoWindow.lifebonuspopup.rect.y)/30;

        if(abs(levelTwoWindow.lifebonuspopup.rect.x - levelTwoWindow.lifescorertext.rect.x )<=30)
          {
            if(variables.levelTwoVars.CURRENT_LIFE>=95 && levelTwoWindow.lifebonuspopup.rect.w==50)
            {
                variables.levelTwoVars.LIFE_PERCENTAGE=0;
            }
        else if(levelTwoWindow.lifebonuspopup.rect.w==50)
          {
            variables.levelTwoVars.LIFE_PERCENTAGE-=100;
            Mix_PlayMusic(variables.levelTwoVars.pointgainsound, 1);
           variables.levelOneVars.font = TTF_OpenFont("Freshman.ttf", 40);
            levelTwoWindow.lifescorertext.rect.x =1154;
            levelTwoWindow.lifescorertext.rect.y =62;
            variables.levelTwoVars.DELAY_COUNT_FOR_LIFE_RECT_CHANGE++;
          }

        levelTwoWindow.lifebonuspopup.rect.w = 0;
        levelTwoWindow.lifebonuspopup.rect.h = 0;
          }

        if(variables.levelTwoVars.DELAY_COUNT_FOR_LIFE_RECT_CHANGE>0)
        {
           variables.levelTwoVars.DELAY_COUNT_FOR_LIFE_RECT_CHANGE++;
        }
        if(variables.levelTwoVars.DELAY_COUNT_FOR_LIFE_RECT_CHANGE==15)
        {
            variables.levelTwoVars.DELAY_COUNT_FOR_LIFE_RECT_CHANGE=0;
           variables.levelOneVars.font =  TTF_OpenFont("Freshman.ttf", 30);
            levelTwoWindow.lifescorertext.rect.x = (int)1163;
            levelTwoWindow.lifescorertext.rect.y = (int)69;
        }
}

void updateHeartPosition()
{
   variables.levelTwoVars.CURRENT_LIFE = 100 - (variables.levelTwoVars.LIFE_PERCENTAGE / 20);
        sprintf(variables.levelTwoVars.LIFE_STRING, "%i", variables.levelTwoVars.CURRENT_LIFE);
    if (variables.levelTwoVars.CURRENT_LIFE <= 95)
        {
            if (variables.levelTwoVars.DELAY_COUNT_FOR_HEARTS == 0)
            {
                levelTwoWindow.heart.rect.w = 0;
                levelTwoWindow.heart.rect.h = 0;
            }

            variables.levelTwoVars.DELAY_COUNT_FOR_HEARTS++;

            if (variables.levelTwoVars.DELAY_COUNT_FOR_HEARTS == 30)
            {
                levelTwoWindow.heart.rect.w = 100;
                levelTwoWindow.heart.rect.h = 100;
                levelTwoWindow.heart.rect.x = rand() % (WINDOW_WIDTH - 150);
                levelTwoWindow.heart.rect.y = rand() % WINDOW_HEIGHT;

                if (levelTwoWindow.heart.rect.y < 150 || levelTwoWindow.heart.rect.y>750 )
                {
                    levelTwoWindow.heart.rect.y = 500;
                }
            }
            if (variables.levelTwoVars.DELAY_COUNT_FOR_HEARTS == 300)
            {
                levelTwoWindow.heart.rect.w = 0;
                levelTwoWindow.heart.rect.h = 0;
            }
            if (variables.levelTwoVars.DELAY_COUNT_FOR_HEARTS == 500)
            {
                variables.levelTwoVars.DELAY_COUNT_FOR_HEARTS = 0;
            }
        }
        else
        {
            levelTwoWindow.heart.rect.w = 0;
            levelTwoWindow.heart.rect.h = 0;
        }
     

       
}

void lifeatstakeaftereffect()
{
    if(variables.levelTwoVars.CURRENT_LIFE<=10 && variables.levelTwoVars.iflifeatstake==0)
        {
            variables.levelTwoVars.iflifeatstake=1;
            levelTwoWindow.character2.surface = IMG_Load("images/level2obstacles/sonicsprite3.png");
            levelTwoWindow.character2.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.character2.surface);
            
        }
        else if(variables.levelTwoVars.CURRENT_LIFE>10 && variables.levelTwoVars.iflifeatstake==1)
        {variables.levelTwoVars.iflifeatstake=0;
           levelTwoWindow.character2.surface = IMG_Load("images/level2obstacles/sonicsprite.png");
            levelTwoWindow.character2.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.character2.surface);
        }
}


void Leve2LifeText()
{  
        levelTwoWindow.lifescorertext.surface = TTF_RenderText_Solid(variables.levelOneVars.font, variables.levelTwoVars.LIFE_STRING , variables.levelTwoVars.color);
        levelTwoWindow.lifescorertext.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.lifescorertext.surface);
        levelTwoWindow.lifescorertext.rect;
        SDL_QueryTexture(levelTwoWindow.lifescorertext.tex, NULL, NULL, &levelTwoWindow.lifescorertext.rect.w, &levelTwoWindow.lifescorertext.rect.h);

        levelTwoWindow.lifescorertext.rect.w = (int)levelTwoWindow.lifescorertext.surface->w;
        levelTwoWindow.lifescorertext.rect.h = (int)levelTwoWindow.lifescorertext.surface->h;
        levelTwoWindow.lifescorertext.rect.x = (int)1163;
        levelTwoWindow.lifescorertext.rect.y = (int)69;

}


void Leve2LifeTextCleanUp()
{
        
  SDL_FreeSurface(levelTwoWindow.lifescorertext.surface);
    SDL_DestroyTexture(levelTwoWindow.lifescorertext.tex);
     SDL_FreeSurface(levelTwoWindow.scoreText.surface);
    SDL_DestroyTexture(levelTwoWindow.scoreText.tex);
     SDL_FreeSurface(levelTwoWindow.highScoreText.surface);
    SDL_DestroyTexture(levelTwoWindow.highScoreText.tex);
   
}

