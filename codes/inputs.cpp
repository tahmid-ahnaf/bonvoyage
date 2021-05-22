#include "inputs.h"

void doInput(void)
{
    SDL_Event event;

     while (SDL_PollEvent(&event))
     {   
            
       if (event.type == SDL_QUIT)
       {
            exit(0);
       }
       if(variables.levelOnePlayerName == 1 || variables.levelOne == 1)
       {
           if (event.type == SDL_KEYDOWN)
           {
               if (event.key.keysym.sym == SDLK_BACKSPACE && strlen(playerName) > 1)
               {
                   playerName[strlen(playerName) - 1] = '\0';
                   updatePlayerName();
                }
                else if (event.key.keysym.scancode == SDL_SCANCODE_SPACE && variables.levelOne == 1)
                {
                    space = 1;
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

 }
  
    if(variables.levelTwo == 1)
    {

        switch (event.type)
        {
            case SDL_KEYDOWN:

            switch (event.key.keysym.scancode)
            {
                case SDL_SCANCODE_SPACE: //IF SPACE IS PRESSED GAME START
                isspaceclicked=1;

                if (levelTwoWindowCharacterPosition.rect.y- ( levelTwoInvisibleBorder.rect.y + levelTwoInvisibleBorder.rect.h) < 120 && levelTwoWindowCharacterPosition.rect.y - ( levelTwoInvisibleBorder.rect.y +  levelTwoInvisibleBorder.rect.h) > 0 && (abs((xPosLevelTwoCharacter)-levelTwoInvisibleBorder.rect.x) <= levelTwoInvisibleBorder.rect.w))
                {
                    yPosLevelTwoCharacter -= levelTwoWindowCharacterPosition.rect.y - (levelTwoInvisibleBorder.rect.y + levelTwoInvisibleBorder.rect.h) + 20;
                }
                else if (yPosLevelTwoCharacter > 300)
                {
                    yPosLevelTwoCharacter -= 120;
                }
            break;

            case SDL_SCANCODE_RIGHT:

                if(xPosLevelTwoCharacter<WINDOW_WIDTH-300)
                {
                   xPosLevelTwoCharacter += moveSpeed * characterTwoDeltatime;
                }
                  
                break;
                
            case SDL_SCANCODE_LEFT:
                xPosLevelTwoCharacter -= moveSpeed * characterTwoDeltatime;
                break;

            case SDL_SCANCODE_UP:
              
                yPosLevelTwoCharacter = WINDOW_HEIGHT-500;
                break;
             
            case SDL_SCANCODE_DOWN:
                     
                yPosLevelTwoCharacter += moveSpeed * characterTwoDeltatime;
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
            variables.gameOver1 = 0;
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
            variables.gameOver1 = 0;
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
            variables.gameOver1 = 0;
        }

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
            variables.gameOver1 = 0;
        }
        if (variables.gameWindowBegin == 1 && (mousex >= welcomeWindowLegendsButton.rect.x && mousex <= (welcomeWindowLegendsButton.rect.x + welcomeWindowLegendsButton.rect.w) && mousey >= welcomeWindowLegendsButton.rect.y && mousey <= (welcomeWindowLegendsButton.rect.y + welcomeWindowLegendsButton.rect.h)))
        {
            variables.levelOne = 0;
            variables.levelTwo = 0;
            variables.chooseLevel = 0;
            variables.gameWindowBegin = 0;
            variables.levelOneCompleted = 0;
            variables.levelOnePlayerName = 0;
            variables.newScore = 0;
            variables.ScoreBoard = 1;
            variables.gameOver1 = 0;
        }
        if (variables.gameWindowBegin == 1 && (mousex >= welcomeWindowExitButton.rect.x && mousex <= (welcomeWindowExitButton.rect.x + welcomeWindowExitButton.rect.w) && mousey >= welcomeWindowExitButton.rect.y && mousey <= (welcomeWindowExitButton.rect.y + welcomeWindowExitButton.rect.h)))
        {
            exit(0);
        }
        if (mousex >= back.rect.x && mousex <= (back.rect.x + back.rect.w) && mousey >= back.rect.y && mousey <= (back.rect.y + back.rect.h))
        {

            resetAll();
        }
    }
}
