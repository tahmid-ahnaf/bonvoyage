// #include "inputs.h"

// void doInput(void)
// {
//     SDL_Event event;
// //level1 
//     // while (SDL_PollEvent(&event) && variables.levelOne==1)
//     // {
//     //     switch (event.type)
//     //     {
//     //     case SDL_QUIT:
//     //         exit(0);
//     //         break;
//     //     case SDL_KEYDOWN:
//     //         switch (event.key.keysym.scancode)
//     //         {
//     //         case SDL_SCANCODE_SPACE:
//     //             variables.levelOneVars.space = 1;
//     //             break;
//     //         case SDL_SCANCODE_UP:
//     //             variables.levelOneVars.characterYposition -= variables.levelOneVars.moveSpeed * variables.levelOneVars.characterDeltatime + 400;
//     //             break;
//     //         }
//     //     default:
//     //         break;
//     //     }
//     // }
// //level2
//  while (SDL_PollEvent(&event)  )
//         {   
            
//         switch (event.type)
//         {
//         case SDL_QUIT:
//             exit(1);
//             break;

//         case SDL_KEYDOWN:
//         if(variables.levelTwo==1){
//                     switch (event.key.keysym.scancode)
//                     {
//                         case SDL_SCANCODE_SPACE: //IF SPACE IS PRESSED GAME STARTS
//                    variables.levelTwoVars.isspaceclicked=1;
//                             if (levelTwoWindow.character2Position.rect.y- ( levelTwoWindow.invisibleborder.rect.y + levelTwoWindow.invisibleborder.rect.h) < 120 && levelTwoWindow.character2Position.rect.y - ( levelTwoWindow.invisibleborder.rect.y +  levelTwoWindow.invisibleborder.rect.h) > 0 && (abs((variables.levelTwoVars.CHARACTER2_X_POS)-levelTwoWindow.invisibleborder.rect.x) <= levelTwoWindow.invisibleborder.rect.w))
//                             {

//                                 variables.levelTwoVars.CHARACTER2_Y_POS -= levelTwoWindow.character2Position.rect.y - (levelTwoWindow.invisibleborder.rect.y + levelTwoWindow.invisibleborder.rect.h) + 20;
//                             }
//                             else if (variables.levelTwoVars.CHARACTER2_Y_POS > 300)
//                             {
//                                variables.levelTwoVars.CHARACTER2_Y_POS -= 120;
//                             }
//                                 break;
                        
    
//                 case SDL_SCANCODE_RIGHT:
//                 if(variables.levelTwoVars.CHARACTER2_X_POS<WINDOW_WIDTH-300){
//   variables.levelTwoVars.CHARACTER2_X_POS += variables.levelTwoVars.moveSpeed * variables.levelTwoVars.character2Deltatime;
//                 }
                  
//                     break;
//                 case SDL_SCANCODE_LEFT:
//                     variables.levelTwoVars.CHARACTER2_X_POS -= variables.levelTwoVars.moveSpeed * variables.levelTwoVars.character2Deltatime;
//        break;

//                 case SDL_SCANCODE_UP:
              
//                     variables.levelTwoVars.CHARACTER2_Y_POS = WINDOW_HEIGHT-500;
//                     break;
             

//                 case SDL_SCANCODE_DOWN:
                     
//                            variables.levelTwoVars.CHARACTER2_Y_POS += variables.levelTwoVars.moveSpeed * variables.levelTwoVars.character2Deltatime;
//                            break;
                        
//               }

//  }
//  if(variables.levelOne==1){

      
//             switch (event.key.keysym.scancode)
//             {
//             case SDL_SCANCODE_SPACE:
//                 variables.levelOneVars.space = 1;
//                 break;
//             case SDL_SCANCODE_UP:
//                 variables.levelOneVars.characterYposition -= variables.levelOneVars.moveSpeed * variables.levelOneVars.characterDeltatime + 400;
//                 break;
//             }
//         default:
//             break;

//  }
 
 
 
 
 
 
 
 
//  }




//         }


 


//     int mousex, mousey;
//     int buttons = SDL_GetMouseState(&mousex, &mousey);
//     if (buttons & SDL_BUTTON(SDL_BUTTON_LEFT))
//     {
//         if ((mousex >= welcome_window.newgame.rect.x && mousex <= (welcome_window.newgame.rect.x + welcome_window.newgame.rect.w) && mousey >= welcome_window.newgame.rect.y && mousey <= (welcome_window.newgame.rect.y + welcome_window.newgame.rect.h)))
//         {

//             // welcome_window.newgame.rect.w = (int)0;
//             // welcome_window.newgame.rect.h = (int)0;
//             variables.chooseLevel = 1;
//             variables.gameWindowBegin = 0;
//             variables.levelOne = 0;

//             printf("%d", variables.chooseLevel);
//         }
//         if ((mousex >= welcome_window.levelOneButton.rect.x && mousex <= (welcome_window.levelOneButton.rect.x + welcome_window.levelOneButton.rect.w) && mousey >= welcome_window.levelOneButton.rect.y && mousey <= (welcome_window.levelOneButton.rect.y + welcome_window.levelOneButton.rect.h)))
//         {
//             variables.levelOne = 1;
//             variables.chooseLevel = 0;
//             variables.gameWindowBegin = 0;
//         }

//         if ((mousex >= welcome_window.levelTwoButton.rect.x && mousex <= (welcome_window.levelTwoButton.rect.x + welcome_window.levelTwoButton.rect.w) && mousey >= welcome_window.levelTwoButton.rect.y && mousey <= (welcome_window.levelTwoButton.rect.y + welcome_window.levelTwoButton.rect.h)))
//         {
//             variables.levelOne = 0;
//             variables.levelTwo = 1;
//             variables.chooseLevel = 0;
//             variables.gameWindowBegin = 0;
//         }
//         // if (mousex >= LEVEL2_BUTTON_rect.x && mousex <= (LEVEL2_BUTTON_rect.x + LEVEL2_BUTTON_rect.w) && mousey >= LEVEL2_BUTTON_rect.y && mousey <= (LEVEL2_BUTTON_rect.y + LEVEL2_BUTTON_rect.h) && NEWGAME_MENU == 1)
//         // {
//         //     GAME_WINDOW_BEGIN = 0;
//         //     SPACE_PRESSED = 0;
//         //     CURRENT_SCORE = 0;
//         //     NEWGAME_MENU = 0;
//         //     LEVEL1_BEGIN = 0;
//         //     LEVEL2_BEGIN = 1;
//         //     CURRENT_LIFE = 100;
//         //     LEVEL1_BUTTON_rect.w = (int)0;
//         //     LEVEL1_BUTTON_rect.h = (int)0;
//         //     LEVEL2_BUTTON_rect.w = (int)0;
//         //     LEVEL2_BUTTON_rect.h = (int)0;
//         //     NEWGAME_BUTTON_rect.w = (int)0;
//         //     NEWGAME_BUTTON_rect.h = (int)0;
//         // }
//         if (mousex >= welcome_window.back.rect.x && mousex <= (welcome_window.back.rect.x + welcome_window.back.rect.w) && mousey >= welcome_window.back.rect.y && mousey <= (welcome_window.back.rect.y + welcome_window.back.rect.h))
//         {

//             resetAll();
//                 }
//     }
// }
