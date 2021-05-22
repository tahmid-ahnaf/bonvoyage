#include "drawlevelTwoBox.h"


void JumpingEffectCharacter(){
    
        if ( levelTwoBox.rect.y == yPosLevelTwoCharacter + levelTwoWindowCharacter.rect.h  && levelTwoBox.rect.y && (xPosLevelTwoCharacter + levelTwoWindowCharacter.rect.w >= levelTwoBox.rect.x && xPosLevelTwoCharacter + levelTwoWindowCharacter.rect.w - 30 <= levelTwoBox.rect.x + levelTwoBox.rect.w))
        {
            yPosLevelTwoCharacter = levelTwoBox.rect.y - levelTwoWindowCharacter.rect.h;
        }
        else if (abs(yPosLevelTwoCharacter - (levelTwoBox.rect.y - levelTwoWindowCharacter.rect.h)) <= 4)
        {
            yPosLevelTwoCharacter += 1;
        }
        else
        {
            if (yPosLevelTwoCharacter != WINDOW_HEIGHT)
            {
                yPosLevelTwoCharacter += 5;
            }
        }
        if (yPosLevelTwoCharacter >= WINDOW_HEIGHT - 250)
        {
            yPosLevelTwoCharacter = WINDOW_HEIGHT - 250;
        }
}
void boxmotion()
{    
    levelTwoBox.rect.x = xPosLevelTwoBox;
    levelOneCharacterPrevtime = levelOneCharacterCurrentime;  
    levelOneCharacterCurrentime = SDL_GetTicks();
    levelOneCharacterDeltatime = (levelOneCharacterCurrentime - levelOneCharacterPrevtime) / 280.0f;

    xPosLevelTwoBox -= moveSpeed / 3 * levelOneCharacterDeltatime;
    if (xPosLevelTwoBox + levelTwoBox.rect.w <= 0)
        {

            xPosLevelTwoBox = WINDOW_WIDTH;
            levelTwoBox.rect.y = rand() % WINDOW_HEIGHT;
            updateCoinsPosition();
          
        }

        levelTwoInvisibleBorder.rect.y = levelTwoBox.rect.y + 30; 
        levelTwoInvisibleBorder.rect.x = xPosLevelTwoBox;
        levelTwoBox.rect.x =xPosLevelTwoBox;
        levelTwoCoin1.rect.x = levelTwoBox.rect.x + levelTwoCoin1.rect.y / 4;
        levelTwoCoin2.rect.x  =  levelTwoBox.rect.x + levelTwoCoin2.rect.y / 4 + 100;
        
        JumpingEffectCharacter();
     
}
void drawBoxFunction()
{
    SDL_RenderCopy(app.rend, levelTwoBox.tex, NULL, &levelTwoBox.rect);
    levelTwoBox.rect.x = xPosLevelTwoBox + levelTwoBox.rect.w;
     
}


