#include "drawLevelTwoCoins.h"



void drawLevelTwoCoinsPopupFunction(){
  SDL_RenderCopy(app.rend,levelTwoCoinPointPopUp.tex, 0, &levelTwoCoinPointPopUp.rect);
}




void updateCoinsPosition()
{
    levelTwoWindowCoins[0].rect.w = (int)40;
    levelTwoWindowCoins[0].rect.h = (int)40;
    levelTwoWindowCoins[1].rect.w = (int)40;
    levelTwoWindowCoins[1].rect.h = (int)40;
    levelTwoWindowCoins[2].rect.w = (int)40;
    levelTwoWindowCoins[2].rect.h = (int)40;
    levelTwoWindowCoins[3].rect.w = (int)40; 
    levelTwoWindowCoins[3].rect.h = (int)40;
    levelTwoWindowCoins[4].rect.w = (int)40;
    levelTwoWindowCoins[4].rect.h = (int)40;

    if (levelTwoBox.rect.y < WINDOW_HEIGHT / 2 || levelTwoBox.rect.y >= WINDOW_HEIGHT - 400 ||  levelTwoBox.rect.y- levelTwoWindowCharacterPosition.rect.y<=levelTwoWindowCoins[0].rect.h)
    {
        levelTwoBox.rect.y = WINDOW_HEIGHT / 2 + rand() % 50;
    }
       levelTwoWindowCoins[0].rect.y = levelTwoBox.rect.y - 70 - rand() % 200;
        levelTwoWindowCoins[1].rect.y = levelTwoBox.rect.y - 70 - rand() % 200 ;

    if (levelTwoWindowCoins[0].rect.y < levelTwoBox.rect.y && levelTwoWindowCoins[0].rect.y > levelTwoBox.rect.y - 120)
    {
            levelTwoWindowCoins[0].rect.y = WINDOW_WIDTH + 300;
    }  
        levelTwoWindowCoins[2].rect.y = 200;
        levelTwoWindowCoins[3].rect.y = levelTwoWindowCoins[2].rect.y + 200;
        levelTwoWindowCoins[4].rect.y = levelTwoWindowCoins[3].rect.y  + 300;
}

 
void drawLevelTwoCoinsFunction()
{

    for (int i = 0; i < 5; i++)
    {
        SDL_RenderCopy(app.rend, levelTwoWindowCoins[i].tex,&levelTwoRotatingCoin.rect, &levelTwoWindowCoins[i].rect);
    }
     
}