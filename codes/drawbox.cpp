#include "drawbox.h"


void JumpingEffectCharacter(){
    
        if ( levelTwoWindow.box.rect.y == variables.levelTwoVars.CHARACTER2_Y_POS + levelTwoWindow.character2.rect.h  && levelTwoWindow.box.rect.y && (variables.levelTwoVars.CHARACTER2_X_POS + levelTwoWindow.character2.rect.w >= levelTwoWindow.box.rect.x && variables.levelTwoVars.CHARACTER2_X_POS + levelTwoWindow.character2.rect.w - 30 <= levelTwoWindow.box.rect.x + levelTwoWindow.box.rect.w))
        {
            variables.levelTwoVars.CHARACTER2_Y_POS = levelTwoWindow.box.rect.y - levelTwoWindow.character2.rect.h;
        }
        else if (abs(variables.levelTwoVars.CHARACTER2_Y_POS - (levelTwoWindow.box.rect.y - levelTwoWindow.character2.rect.h)) <= 4)
        {
            variables.levelTwoVars.CHARACTER2_Y_POS += 1;
        }
        else
        {
            if (variables.levelTwoVars.CHARACTER2_Y_POS != WINDOW_HEIGHT)
            {
                variables.levelTwoVars.CHARACTER2_Y_POS += 5;
            }
        }
        if (variables.levelTwoVars.CHARACTER2_Y_POS >= WINDOW_HEIGHT - 250)
        {
            variables.levelTwoVars.CHARACTER2_Y_POS = WINDOW_HEIGHT - 250;
        }
}
void boxmotion()
{    levelTwoWindow.box.rect.x = variables.AnimationSpeed.levelTwoWindow.BOX_X_POS;
    variables.levelOneVars.characterPrevtime = variables.levelOneVars.characterCurrentime;
    variables.levelOneVars.characterCurrentime = SDL_GetTicks();
    variables.levelOneVars.characterDeltatime = (variables.levelOneVars.characterCurrentime - variables.levelOneVars.characterPrevtime) / 280.0f;

    variables.AnimationSpeed.levelTwoWindow.BOX_X_POS -= variables.levelTwoVars.moveSpeed / 3 * variables.levelOneVars.characterDeltatime;
    if (variables.AnimationSpeed.levelTwoWindow.BOX_X_POS + levelTwoWindow.box.rect.w <= 0)
        {

            variables.AnimationSpeed.levelTwoWindow.BOX_X_POS = WINDOW_WIDTH;
            levelTwoWindow.box.rect.y = rand() % WINDOW_HEIGHT;
            if (levelTwoWindow.box.rect.y < WINDOW_HEIGHT / 2 || levelTwoWindow.box.rect.y >= WINDOW_HEIGHT - 400 ||  levelTwoWindow.box.rect.y-levelTwoWindow.character2Position.rect.y<=levelTwoWindow.character2.rect.h)
            {
                levelTwoWindow.box.rect.y = WINDOW_HEIGHT / 2 + rand() % 50;
            }
            updateCoinsPosition();
          
        }

        levelTwoWindow.invisibleborder.rect.y = levelTwoWindow.box.rect.y + 30; 
        levelTwoWindow.invisibleborder.rect.x = variables.AnimationSpeed.levelTwoWindow.BOX_X_POS;
        levelTwoWindow.box.rect.x =variables.AnimationSpeed.levelTwoWindow.BOX_X_POS;
        levelTwoWindow.level2Coin.rect.x = levelTwoWindow.box.rect.x + levelTwoWindow.level2Coin.rect.y / 4;
        levelTwoWindow.level2Coin2.rect.x  =  levelTwoWindow.box.rect.x + levelTwoWindow.level2Coin2.rect.y / 4 + 100;
        
        JumpingEffectCharacter();
     
}
void drawBoxFunction()
{
      SDL_RenderCopy(app.rend, levelTwoWindow.box.tex, NULL, &levelTwoWindow.box.rect);
    levelTwoWindow.box.rect.x = variables.AnimationSpeed.levelTwoWindow.BOX_X_POS + levelTwoWindow.box.rect.w;
     
}



