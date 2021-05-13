#include "drawLevelTwoWindow.h"

void updateAnimationSpeedForLevelTwoWindow()
{     
    // variables.levelTwoVars.font = TTF_OpenFont("Freshman.ttf", 30);

    variables.levelTwoVars.character2Prevtime = variables.levelTwoVars.character2Currentime;
    variables.levelTwoVars.character2Currentime = SDL_GetTicks();
    variables.levelTwoVars.character2Deltatime = (variables.levelTwoVars.character2Currentime - variables.levelTwoVars.character2Prevtime) / 280.0f;

     
    if(variables.levelTwoVars.DELAY_COUNT_FOR_CHARACTER_COLLISION_EFFECT==250)
    {
     if(variables.levelTwoVars.CURRENT_LIFE>10){
   levelTwoWindow.character2.surface = IMG_Load("images/level2obstacles/sonicsprite.png");
       levelTwoWindow.character2.tex = SDL_CreateTextureFromSurface(app.rend,levelTwoWindow.character2.surface);
     }else{
         levelTwoWindow.character2.surface = IMG_Load("images/level2obstacles/sonicsprite3.png");
       levelTwoWindow.character2.tex = SDL_CreateTextureFromSurface(app.rend,levelTwoWindow.character2.surface); 
     }
       variables.levelTwoVars.DELAY_COUNT_FOR_CHARACTER_COLLISION_EFFECT=0; 
    
    }
    if(variables.levelTwoVars.DELAY_COUNT_FOR_CHARACTER_COLLISION_EFFECT>0)
    {
       variables.levelTwoVars.DELAY_COUNT_FOR_CHARACTER_COLLISION_EFFECT++;
    }

  variables.levelTwoVars.rectx =levelTwoWindow.character2.rect.x;
variables.levelTwoVars.recty =levelTwoWindow.character2.rect.y ;
 variables.levelTwoVars.character2Frametime += variables.levelTwoVars.character2Deltatime;

 
        if (variables.levelTwoVars.character2Frametime >= (0.25f))
        {
            variables.levelTwoVars.character2Frametime = 0;
          variables.levelTwoVars.rectx += variables.levelTwoVars.CHARACTER2_FRAME_WIDTH;
        if(variables.levelTwoVars.rectx == variables.levelTwoVars.CHARACTER2_TEXTURE_WIDTH && variables.levelTwoVars.recty == 130)
        {
           variables.levelTwoVars.recty = 0; 
            variables.levelTwoVars.rectx = 0;
        }
        else  if (variables.levelTwoVars.rectx== variables.levelTwoVars.CHARACTER2_TEXTURE_WIDTH)
        {
           variables.levelTwoVars.rectx = 0;
            variables.levelTwoVars.recty = variables.levelTwoVars.CHARACTER2_FRAME_HEIGHT; 
        } 
    } 

 levelTwoWindow.character2.rect.x=  levelTwoWindow.rotatingcoin.rect.x = levelTwoWindow.rotatingheart.rect.x =   variables.levelTwoVars.rectx;
 levelTwoWindow.character2.rect.y =  levelTwoWindow.rotatingcoin.rect.y = levelTwoWindow.rotatingheart.rect.y =    variables.levelTwoVars.recty ;
 
 Leve2LifeText();
boxmotion();
  updateHeartPosition();

 
//   if (variables.levelTwoVars.currentScore >variables.levelTwoVars.highScore)
//             {
//   updateHighScoreOnFileLevel2();
//   }
collisions();
lifeatstakeaftereffect();
  updateLifeBonusPopupFunction();
  updateScoreLevel2();
     sprintf(variables.levelTwoVars.LIFE_STRING, "%i", variables.levelTwoVars.CURRENT_LIFE);


 
        
        if (variables.levelTwoVars.CHARACTER2_Y_POS <= 40)
        {
            variables.levelTwoVars.CHARACTER2_Y_POS = 40;
        }
        if (variables.levelTwoVars.CHARACTER2_X_POS <= 40)
        {
            variables.levelTwoVars.CHARACTER2_X_POS = 40;
        }
        if (variables.levelTwoVars.CHARACTER2_Y_POS>= 800)
        {
            variables.levelTwoVars.CHARACTER2_Y_POS= 800;
        }
        if (variables.levelTwoVars.CHARACTER2_X_POS >= WINDOW_WIDTH)
        {
            variables.levelTwoVars.CHARACTER2_X_POS = 0;
        }
         /*############### KEEPING THE CHARACTER INTO THE FRAME ENDS ####################*/

        levelTwoWindow.character2Position.rect.x = variables.levelTwoVars.CHARACTER2_X_POS;
        levelTwoWindow.character2Position.rect.y = variables.levelTwoVars.CHARACTER2_Y_POS;





    // levelTwoWindow.characterFramePosition.rect.x = 500;
    // levelOneWindow.characterFramePosition.rect.y = 630;

    variables.AnimationSpeed.levelTwoWindow.sky -= 0.5;
    if (variables.AnimationSpeed.levelTwoWindow.sky < -levelTwoWindow.sky.rect.w)
    {
        variables.AnimationSpeed.levelTwoWindow.sky = 0;
    }

    variables.AnimationSpeed.levelTwoWindow.mountains -= 2;
    if (variables.AnimationSpeed.levelTwoWindow.mountains < -levelTwoWindow.mountains.rect.w)
    {
        variables.AnimationSpeed.levelTwoWindow.mountains = 0;
    }

    variables.AnimationSpeed.levelTwoWindow.treeshade -= 4;
    if (variables.AnimationSpeed.levelTwoWindow.treeshade < -levelTwoWindow.treeshade.rect.w)
    {
        variables.AnimationSpeed.levelTwoWindow.treeshade = 0;
    }
    variables.AnimationSpeed.levelTwoWindow.clouds -= 1;
    if (variables.AnimationSpeed.levelTwoWindow.clouds < -levelTwoWindow.clouds.rect.w)
    {
        variables.AnimationSpeed.levelTwoWindow.clouds = 0;
    }

    variables.AnimationSpeed.levelTwoWindow.track -= 6;
    if (variables.AnimationSpeed.levelTwoWindow.track < -levelTwoWindow.track.rect.w)
    {
        variables.AnimationSpeed.levelTwoWindow.track = 0;
    }
}

 

void drawLevelTwoWindowFunction()
{   
    if(variables.levelTwoVars.isspaceclicked==1){
 updateAnimationSpeedForLevelTwoWindow();
    }else{
        //  SDL_RenderCopy(app.rend, levelTwoWindow.character2.tex, NULL, &levelTwoWindow.character2.rect);
    }
    
   
    

    levelTwoWindow.sky.rect.x = variables.AnimationSpeed.levelTwoWindow.sky;
    levelTwoWindow.mountains.rect.x = variables.AnimationSpeed.levelTwoWindow.mountains;
    levelTwoWindow.treeshade.rect.x = variables.AnimationSpeed.levelTwoWindow.treeshade;
    levelTwoWindow.clouds.rect.x = variables.AnimationSpeed.levelTwoWindow.clouds;
    levelTwoWindow.track.rect.x = variables.AnimationSpeed.levelTwoWindow.track;
    SDL_RenderClear(app.rend);

    SDL_RenderCopy(app.rend, levelTwoWindow.sky.tex, NULL, &levelTwoWindow.sky.rect);
    levelTwoWindow.sky.rect.x = variables.AnimationSpeed.levelTwoWindow.sky + levelTwoWindow.sky.rect.w;
    SDL_RenderCopy(app.rend, levelTwoWindow.sky.tex, NULL, &levelTwoWindow.sky.rect);

    SDL_RenderCopy(app.rend, levelTwoWindow.mountains.tex, NULL, &levelTwoWindow.mountains.rect);
    levelTwoWindow.mountains.rect.x = variables.AnimationSpeed.levelTwoWindow.mountains + levelTwoWindow.mountains.rect.w;
    SDL_RenderCopy(app.rend, levelTwoWindow.mountains.tex, NULL, &levelTwoWindow.mountains.rect);

    SDL_RenderCopy(app.rend, levelTwoWindow.treeshade.tex, NULL, &levelTwoWindow.treeshade.rect);
    levelTwoWindow.treeshade.rect.x = variables.AnimationSpeed.levelTwoWindow.treeshade + levelTwoWindow.treeshade.rect.w;
    SDL_RenderCopy(app.rend, levelTwoWindow.treeshade.tex, NULL, &levelTwoWindow.treeshade.rect);

    SDL_RenderCopy(app.rend, levelTwoWindow.track.tex, NULL, &levelTwoWindow.track.rect);
    levelTwoWindow.track.rect.x = variables.AnimationSpeed.levelTwoWindow.track + levelTwoWindow.track.rect.w;
    SDL_RenderCopy(app.rend, levelTwoWindow.track.tex, NULL, &levelTwoWindow.track.rect);

    SDL_RenderCopy(app.rend, levelTwoWindow.moon.tex, NULL, &levelTwoWindow.moon.rect);

    SDL_RenderCopy(app.rend, levelTwoWindow.clouds.tex, NULL, &levelTwoWindow.clouds.rect);
    levelTwoWindow.clouds.rect.x = variables.AnimationSpeed.levelTwoWindow.clouds + levelTwoWindow.clouds.rect.w;
    SDL_RenderCopy(app.rend, levelTwoWindow.clouds.tex, NULL, &levelTwoWindow.clouds.rect);
     SDL_RenderCopy(app.rend, levelTwoWindow.character2.tex, &levelTwoWindow.character2.rect, &levelTwoWindow.character2Position.rect);
    //    SDL_RenderCopyEx(app.rend, levelTwoWindow.character2.tex, &levelTwoWindow.character2.rect, &levelTwoWindow.character2Position.rect, NULL , NULL , SDL_FLIP_HORIZONTAL);
   
    SDL_RenderCopy(app.rend, welcome_window.back.tex, NULL, &welcome_window.back.rect);

 if(variables.levelTwoVars.isspaceclicked==1){
 

 drawBoxFunction();
    drawLevelTwoCoinsFunction();
    drawBombandPlaneFunction();
    drawLevelTwoHeartFunction();
    drawLevelTwoLifeFunction();
    drawLevelTwoCoinsPopupFunction();
drawLevelTwoHeartPopupFunction();
        Leve2LifeTextCleanUp();
    }
    
}