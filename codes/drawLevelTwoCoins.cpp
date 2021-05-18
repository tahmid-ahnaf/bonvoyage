#include "drawLevelTwoCoins.h"



void drawLevelTwoCoinsPopupFunction(){
  SDL_RenderCopy(app.rend,levelTwoCoinPointPopUp.tex, 0, &levelTwoCoinPointPopUp.rect);
}

 
void drawLevelTwoCoinsFunction()
{
//      SDL_RenderCopy(rend, COIN_TEX, &ROTATING_COIN, &COIN_RECT);
    SDL_RenderCopy(app.rend, levelTwoCoin1.tex,&levelTwoRotatingCoin.rect, &levelTwoCoin1.rect);
    SDL_RenderCopy(app.rend, levelTwoCoin2.tex,&levelTwoRotatingCoin.rect, &levelTwoCoin2.rect);
     
}


void updateCoinsPosition()
{
    levelTwoCoin1.rect.w = (int)40;
    levelTwoCoin1.rect.h = (int)40;
    levelTwoCoin2.rect.w = (int)40;
    levelTwoCoin2.rect.h = (int)40;

    if (levelTwoBox.rect.y < WINDOW_HEIGHT / 2 || levelTwoBox.rect.y >= WINDOW_HEIGHT - 400 ||  levelTwoBox.rect.y- levelTwoWindowCharacterPosition.rect.y<=levelTwoCoin1.rect.h)
    {
        levelTwoBox.rect.y = WINDOW_HEIGHT / 2 + rand() % 50;
    }

            // BORDER_RECT.y = levelTwoBox.rect.y + 30;
        levelTwoCoin1.rect.y = levelTwoBox.rect.y - 70 - rand() % 200;
        levelTwoCoin2.rect.y = levelTwoBox.rect.y - 70 - rand() % 200;

        if (levelTwoCoin1.rect.y < levelTwoBox.rect.y && levelTwoCoin1.rect.y > levelTwoBox.rect.y - 120)
        {
            levelTwoCoin1.rect.y = WINDOW_WIDTH + 300;
        }  
}