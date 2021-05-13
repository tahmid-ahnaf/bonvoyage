#include "drawLevelTwoCoins.h"



void drawLevelTwoCoinsPopupFunction(){
  SDL_RenderCopy(app.rend,levelTwoWindow.coin_point_popup.tex, 0, &levelTwoWindow.coin_point_popup.rect);
}

 
void drawLevelTwoCoinsFunction()
{
//      SDL_RenderCopy(rend, COIN_TEX, &ROTATING_COIN, &COIN_RECT);
    SDL_RenderCopy(app.rend, levelTwoWindow.level2Coin.tex,&levelTwoWindow.rotatingcoin.rect, &levelTwoWindow.level2Coin.rect);
      SDL_RenderCopy(app.rend, levelTwoWindow.level2Coin2.tex,&levelTwoWindow.rotatingcoin.rect, &levelTwoWindow.level2Coin2.rect);
     
}


void updateCoinsPosition()
{
    levelTwoWindow.level2Coin.rect.w = (int)40;
    levelTwoWindow.level2Coin.rect.h = (int)40;
    levelTwoWindow.level2Coin2.rect.w = (int)40;
    levelTwoWindow.level2Coin2.rect.h = (int)40;

    if (levelTwoWindow.box.rect.y < WINDOW_HEIGHT / 2 || levelTwoWindow.box.rect.y >= WINDOW_HEIGHT - 400 ||  levelTwoWindow.box.rect.y- levelTwoWindow.character2Position.rect.y<=levelTwoWindow.level2Coin.rect.h)
    {
        levelTwoWindow.box.rect.y = WINDOW_HEIGHT / 2 + rand() % 50;
    }

            // BORDER_RECT.y = levelTwoWindow.box.rect.y + 30;
        levelTwoWindow.level2Coin.rect.y = levelTwoWindow.box.rect.y - 70 - rand() % 200;
        levelTwoWindow.level2Coin2.rect.y = levelTwoWindow.box.rect.y - 70 - rand() % 200;

        if (levelTwoWindow.level2Coin.rect.y < levelTwoWindow.box.rect.y && levelTwoWindow.level2Coin.rect.y > levelTwoWindow.box.rect.y - 120)
        {
            levelTwoWindow.level2Coin.rect.y = WINDOW_WIDTH + 300;
        }
     

       
}