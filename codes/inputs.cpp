#include "inputs.h"

void doInput(void)
{
    SDL_Event event;
 while (SDL_PollEvent(&event))
        {   
            
       if (event.type == SDL_QUIT)
        {
            exit(1);
        } 
         if(variables.levelOnePlayerName == 1 || variables.levelOne == 1){
 


          if (event.type == SDL_KEYDOWN)
        {
            if (event.key.keysym.sym == SDLK_BACKSPACE && strlen(playerName) > 1)
            {

                playerName[strlen(playerName) - 1] = '\0';
                updatePlayerName();
            }
            //Handle copy
            // else if (e.key.keysym.sym == SDLK_c && SDL_GetModState() & KMOD_CTRL)
            // {
            //     SDL_SetClipboardText(inputText.c_str());
            // }
            //Handle paste
            // else if (e.key.keysym.sym == SDLK_v && SDL_GetModState() & KMOD_CTRL)
            // {
            //     inputText = SDL_GetClipboardText();
            //     renderText = true;
            // }
            else if (event.key.keysym.scancode == SDL_SCANCODE_SPACE && (variables.levelOne == 1 || variables.levelTwo == 1))
            {
                space = 1;
                // levelOneObstacleAnimationSpeed++;
            }
            else if (event.key.keysym.scancode == SDL_SCANCODE_UP)
            {
                levelOneCharacterYposition -= levelOneMoveSpeed * levelOneCharacterDeltatime + 400;
            }
        }
        else if (event.type == SDL_TEXTINPUT && variables.levelOnePlayerName == 1)
        {
            //Not copy or pasting
            if (!(SDL_GetModState() & KMOD_CTRL && (event.text.text[0] == ' ' || event.text.text[0] == 'c' || event.text.text[0] == 'C' || event.text.text[0] == 'v' || event.text.text[0] == 'V')))
            {
                strcat(playerName, event.text.text);

                updatePlayerName();
            }
        }

        // case:
        //     switch (event.key.keysym.scancode)
        //     {
        //     case SDL_SCANCODE_SPACE:
        //         space = 1;
        //         levelOneObstacleAnimationSpeed++;
        //         break;
        //     case SDL_SCANCODE_UP:
        //         levelOneCharacterYposition -= levelOneMoveSpeed * levelOneCharacterDeltatime + 400;
        //         break;
        //     case SDL_SCANCODE_BACKSPACE:
        //         if (strlen(playerName) > 0)
        //         {
        //             playerName[strlen(playerName) - 1] = '\0';
        //         }
        //         break;
        //     case SDL_SCANCODE_C:
        //         if (SDL_GetModState() & KMOD_CTRL)
        //         {
        //             SDL_SetClipboardText(playerName);
        //         }
        //     }

        // case SDL_TEXTINPUT:
        //     // strcat(playerName, event.text.text);
        //     strcat(playerName, event.text.text);

        //     updatePlayerName();
        // default:
        //     break;
        // }
       

 }
  
    if(variables.levelTwo == 1)
    {

        switch (event.type)
        {
         case SDL_QUIT:
            exit(1);
            break;

         case SDL_KEYDOWN:
            switch (event.key.keysym.scancode)
                    {
                        case SDL_SCANCODE_SPACE: //IF SPACE IS PRESSED GAME STARTS
                   isspaceclicked=1;
                            if (levelTwoWindowCharacterPosition.rect.y- ( levelTwoInvisibleBorder.rect.y + levelTwoInvisibleBorder.rect.h) < 120 && levelTwoWindowCharacterPosition.rect.y - ( levelTwoInvisibleBorder.rect.y +  levelTwoInvisibleBorder.rect.h) > 0 && (abs((CHARACTER2_X_POS)-levelTwoInvisibleBorder.rect.x) <= levelTwoInvisibleBorder.rect.w))
                            {

                                CHARACTER2_Y_POS -= levelTwoWindowCharacterPosition.rect.y - (levelTwoInvisibleBorder.rect.y + levelTwoInvisibleBorder.rect.h) + 20;
                            }
                            else if (CHARACTER2_Y_POS > 300)
                            {
                               CHARACTER2_Y_POS -= 120;
                            }
                            break;
                        
    
         case SDL_SCANCODE_RIGHT:
                if(CHARACTER2_X_POS<WINDOW_WIDTH-300)
                {
                   CHARACTER2_X_POS += moveSpeed * character2Deltatime;
                }
                  
                break;
                
                case SDL_SCANCODE_LEFT:
                    CHARACTER2_X_POS -= moveSpeed * character2Deltatime;
                    break;

                case SDL_SCANCODE_UP:
              
                    CHARACTER2_Y_POS = WINDOW_HEIGHT-500;
                    break;
             

                case SDL_SCANCODE_DOWN:
                     
                    CHARACTER2_Y_POS += moveSpeed * character2Deltatime;
                    break;
                        
              }

 }
 
  }
       }


    int mousex, mousey;
    int buttons = SDL_GetMouseState(&mousex, &mousey);
    if (buttons & SDL_BUTTON(SDL_BUTTON_LEFT))
    {
        if (variables.gameWindowBegin == 1 && (mousex >= welcomeWindowNewgameButton.rect.x && mousex <= (welcomeWindowNewgameButton.rect.x + welcomeWindowNewgameButton.rect.w) && mousey >= welcomeWindowNewgameButton.rect.y && mousey <= (welcomeWindowNewgameButton.rect.y + welcomeWindowNewgameButton.rect.h)))
        {

            variables.levelOne = 0;
            variables.levelTwo = 0;
            variables.chooseLevel = 1;
            variables.gameWindowBegin = 0;
            variables.levelOneCompleted = 0;
            variables.levelOnePlayerName = 0;
            variables.newScore = 0;
            variables.ScoreBoard = 0;
        }
        if (variables.chooseLevel == 1 && (mousex >= newgameWindowlevelOneButton.rect.x && mousex <= (newgameWindowlevelOneButton.rect.x + newgameWindowlevelOneButton.rect.w) && mousey >= newgameWindowlevelOneButton.rect.y && mousey <= (newgameWindowlevelOneButton.rect.y + newgameWindowlevelOneButton.rect.h)))
        {
            variables.levelOne = 0;
            variables.levelTwo = 0;
            variables.chooseLevel = 0;
            variables.gameWindowBegin = 0;
            variables.levelOneCompleted = 0;
            variables.levelOnePlayerName = 1;
            variables.newScore = 0;
            variables.ScoreBoard = 0;
        }

        if (variables.chooseLevel == 1 && (mousex >= newgameWindowlevelTwoButton.rect.x && mousex <= (newgameWindowlevelTwoButton.rect.x + newgameWindowlevelTwoButton.rect.w) && mousey >= newgameWindowlevelTwoButton.rect.y && mousey <= (newgameWindowlevelTwoButton.rect.y + newgameWindowlevelTwoButton.rect.h)))
        {
            variables.levelOne = 0;
            variables.levelTwo = 1;
            variables.chooseLevel = 0;
            variables.gameWindowBegin = 0;
            variables.levelOneCompleted = 0;
            variables.levelOnePlayerName = 0;
            variables.newScore = 0;
            variables.ScoreBoard = 0;
        }
        // if (mousex >= LEVEL2_BUTTON_rect.x && mousex <= (LEVEL2_BUTTON_rect.x + LEVEL2_BUTTON_rect.w) && mousey >= LEVEL2_BUTTON_rect.y && mousey <= (LEVEL2_BUTTON_rect.y + LEVEL2_BUTTON_rect.h) && NEWGAME_MENU == 1)
        // {
        //     GAME_WINDOW_BEGIN = 0;
        //     SPACE_PRESSED = 0;
        //     CURRENT_SCORE = 0;
        //     NEWGAME_MENU = 0;
        //     LEVEL1_BEGIN = 0;
        //     LEVEL2_BEGIN = 1;
        //     CURRENT_LIFE = 100;
        //     LEVEL1_BUTTON_rect.w = (int)0;
        //     LEVEL1_BUTTON_rect.h = (int)0;
        //     LEVEL2_BUTTON_rect.w = (int)0;
        //     LEVEL2_BUTTON_rect.h = (int)0;
        //     NEWGAME_BUTTON_rect.w = (int)0;
        //     NEWGAME_BUTTON_rect.h = (int)0;
        // }

        if (strlen(playerName) > 1 && variables.levelOnePlayerName == 1 && (mousex >= enterButton.rect.x && mousex <= (enterButton.rect.x + enterButton.rect.w) && mousey >= enterButton.rect.y && mousey <= (enterButton.rect.y + enterButton.rect.h)))
        {
            variables.levelOne = 1;
            variables.levelTwo = 0;
            variables.chooseLevel = 0;
            variables.gameWindowBegin = 0;
            variables.levelOneCompleted = 0;
            variables.levelOnePlayerName = 0;
            variables.newScore = 1;
            variables.ScoreBoard = 0;
        }
        if (variables.gameWindowBegin == 1 && (mousex >= welcomeWindowControlsButton.rect.x && mousex <= (welcomeWindowControlsButton.rect.x + welcomeWindowControlsButton.rect.w) && mousey >= welcomeWindowControlsButton.rect.y && mousey <= (welcomeWindowControlsButton.rect.y + welcomeWindowControlsButton.rect.h)))
        {
            variables.levelOne = 0;
            variables.levelTwo = 0;
            variables.chooseLevel = 0;
            variables.gameWindowBegin = 0;
            variables.levelOneCompleted = 0;
            variables.levelOnePlayerName = 0;
            variables.newScore = 0;
            variables.ScoreBoard = 1;
        }
        if (mousex >= back.rect.x && mousex <= (back.rect.x + back.rect.w) && mousey >= back.rect.y && mousey <= (back.rect.y + back.rect.h))
        {

            resetAll();
        }
    }
}
