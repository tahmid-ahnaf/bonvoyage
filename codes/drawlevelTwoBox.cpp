#include "drawlevelTwoBox.h"


void JumpingEffectCharacter(){
    
        if ( levelTwoBox.rect.y == CHARACTER2_Y_POS + levelTwoWindowCharacter.rect.h  && levelTwoBox.rect.y && (CHARACTER2_X_POS + levelTwoWindowCharacter.rect.w >= levelTwoBox.rect.x && CHARACTER2_X_POS + levelTwoWindowCharacter.rect.w - 30 <= levelTwoBox.rect.x + levelTwoBox.rect.w))
        {
            CHARACTER2_Y_POS = levelTwoBox.rect.y - levelTwoWindowCharacter.rect.h;
        }
        else if (abs(CHARACTER2_Y_POS - (levelTwoBox.rect.y - levelTwoWindowCharacter.rect.h)) <= 4)
        {
            CHARACTER2_Y_POS += 1;
        }
        else
        {
            if (CHARACTER2_Y_POS != WINDOW_HEIGHT)
            {
                CHARACTER2_Y_POS += 5;
            }
        }
        if (CHARACTER2_Y_POS >= WINDOW_HEIGHT - 250)
        {
            CHARACTER2_Y_POS = WINDOW_HEIGHT - 250;
        }
}
void boxmotion()
{    levelTwoBox.rect.x = levelTwoBOX_X_POS;
    levelOneCharacterPrevtime = levelOneCharacterCurrentime;  
    levelOneCharacterCurrentime = SDL_GetTicks();
    levelOneCharacterDeltatime = (levelOneCharacterCurrentime - levelOneCharacterPrevtime) / 280.0f;

    levelTwoBOX_X_POS -= moveSpeed / 3 * levelOneCharacterDeltatime;
    if (levelTwoBOX_X_POS + levelTwoBox.rect.w <= 0)
        {

            levelTwoBOX_X_POS = WINDOW_WIDTH;
            levelTwoBox.rect.y = rand() % WINDOW_HEIGHT;
            // if (levelTwoBox.rect.y < WINDOW_HEIGHT / 2 || levelTwoBox.rect.y >= WINDOW_HEIGHT - 400 ||  levelTwoBox.rect.y-levelTwoWindowCharacterPosition.rect.y<=levelTwoWindowCharacter.rect.h)
            // {
            //     levelTwoBox.rect.y = WINDOW_HEIGHT / 2 + rand() % 50;
            // }
            updateCoinsPosition();
          
        }

        levelTwoInvisibleBorder.rect.y = levelTwoBox.rect.y + 30; 
        levelTwoInvisibleBorder.rect.x = levelTwoBOX_X_POS;
        levelTwoBox.rect.x =levelTwoBOX_X_POS;
        levelTwoCoin1.rect.x = levelTwoBox.rect.x + levelTwoCoin1.rect.y / 4;
        levelTwoCoin2.rect.x  =  levelTwoBox.rect.x + levelTwoCoin2.rect.y / 4 + 100;
        
        JumpingEffectCharacter();
     
}
void drawBoxFunction()
{
      SDL_RenderCopy(app.rend, levelTwoBox.tex, NULL, &levelTwoBox.rect);
    levelTwoBox.rect.x = levelTwoBOX_X_POS + levelTwoBox.rect.w;
     
}


