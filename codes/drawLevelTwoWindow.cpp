#include "drawLevelTwoWindow.h"

void updateAnimationSpeedForLevelTwoWindow()
{   

    character2Prevtime = character2Currentime;
    character2Currentime = SDL_GetTicks();
    character2Deltatime = (character2Currentime - character2Prevtime) / 280.0f;

     
    if(DelayCountForCharacterCollisionEffect==250)
    {
     if(CurrentLife>10)
     {
   levelTwoWindowCharacter.surface = IMG_Load("images/level2obstacles/sonicsprite.png");
       levelTwoWindowCharacter.tex = SDL_CreateTextureFromSurface(app.rend,levelTwoWindowCharacter.surface);
     }else
     {
         levelTwoWindowCharacter.surface = IMG_Load("images/level2obstacles/sonicsprite3.png");
       levelTwoWindowCharacter.tex = SDL_CreateTextureFromSurface(app.rend,levelTwoWindowCharacter.surface); 
     }
       DelayCountForCharacterCollisionEffect=0; 
    
    }
    if(DelayCountForCharacterCollisionEffect>0)
    {
       DelayCountForCharacterCollisionEffect++;
    }

    rectx =levelTwoWindowCharacter.rect.x;   
    recty =levelTwoWindowCharacter.rect.y ;
    character2Frametime += character2Deltatime;

 
        if (character2Frametime >= (0.25f))
        {
            character2Frametime = 0;
          rectx += levelTwoCharacterFrameWidth;
        if(rectx == levelTwoCharacterTextureWidth && recty == 130)
        {
           recty = 0; 
            rectx = 0;
        }
        else  if (rectx== levelTwoCharacterTextureWidth)
        {
           rectx = 0;
            recty = levelTwoCharacterFrameHeight; 
        } 
    } 

 levelTwoWindowCharacter.rect.x=  levelTwoRotatingCoin.rect.x = levelTwoRotatingHeart.rect.x =    rectx;
 levelTwoWindowCharacter.rect.y =  levelTwoRotatingCoin.rect.y = levelTwoRotatingHeart.rect.y =    recty ;


 
 drawLevelTwoLifeText();
  boxmotion();
  updateHeartPosition();

 
//   if (currentScore >highScore)
//             {
//   updateHighScoreOnFileLevel2();
//   }
collisionsLevelTwo();
lifeatstakeaftereffect();
  updateLifeBonusPopupFunction();
   updateScoreLevel2();
     sprintf(LifeString, "%i", CurrentLife);


 
        
        if (CHARACTER2_Y_POS <= 40)
        {
            CHARACTER2_Y_POS = 40;
        }
        if (CHARACTER2_X_POS <= 40)
        {
            CHARACTER2_X_POS = 40;
        }
        if (CHARACTER2_Y_POS>= 800)
        {
            CHARACTER2_Y_POS= 800;
        }
        if (CHARACTER2_X_POS >= WINDOW_WIDTH)
        {
            CHARACTER2_X_POS = 0;
        }
         /*############### KEEPING THE CHARACTER INTO THE FRAME ENDS ####################*/

        levelTwoWindowCharacterPosition.rect.x = CHARACTER2_X_POS;
        levelTwoWindowCharacterPosition.rect.y = CHARACTER2_Y_POS;





    // levelTwoWindow.characterFramePosition.rect.x = 500;
    // levelOneWindow.characterFramePosition.rect.y = 630;

   levelTwoSkyAnimationSpeed -= 0.5;
    if (levelTwoSkyAnimationSpeed < -levelTwoWindowSky.rect.w)
    {
        levelTwoSkyAnimationSpeed = 0;
    }

    levelTwoMountainsAnimationSpeed-= 2;
    if (levelTwoMountainsAnimationSpeed< -levelTwoWindowMountains.rect.w)
    {
        levelTwoMountainsAnimationSpeed= 0;
    }

    levelTwoTreeShadeAnimationSpeed -= 4;
    if (levelTwoTreeShadeAnimationSpeed < -levelTwoWindowTreeShade.rect.w)
    {
        levelTwoTreeShadeAnimationSpeed = 0;
    }
    levelTwoCloudsAnimationSpeed -= 1;
    if (levelTwoCloudsAnimationSpeed < -levelTwoWindowClouds.rect.w)
    {
        levelTwoCloudsAnimationSpeed = 0;
    }

    levelTwoTrackAnimationSpeed -= 6;
    if (levelTwoTrackAnimationSpeed < -levelTwoWindowTrack.rect.w)
    {
        levelTwoTrackAnimationSpeed = 0;
    }
    /*
    // characterPrevtime = characterCurrentime;
    // characterCurrentime = SDL_GetTicks();
    // variables.levelOneVars.characterDeltatime = (variables.levelOneVars.characterCurrentime - variables.levelOneVars.characterPrevtime) / 280.0f;

    // characterFrametime += characterDeltatime;
    // if (characterFrametime >= (0.25f))
    // {
    //     characterFrametime = 0.0;
    //     levelTwoWindowCharacter.rect.x += characterFramewidth;

    //     if (levelTwoWindowCharacter.rect.x >= characterTexturewidth)
    //     {
    //         levelTwoWindowCharacter.rect.x = 0;
    //     }
    // }
    characterFramePosition.rect.x = 500;
    characterFramePosition.rect.y = 630;

    levelTwoSkyAnimationSpeed -= 0.5;
    if (levelTwoSkyAnimationSpeed < -levelTwoWindowSky.rect.w)
    {
        levelTwoSkyAnimationSpeed = 0;
    }

    levelTwoMountainsAnimationSpeed-= 2;
    if (levelTwoMountainsAnimationSpeed< -levelTwoWindowMountains.rect.w)
    {
        levelTwoMountainsAnimationSpeed= 0;
    }

    levelTwoTreeShadeAnimationSpeed -= 4;
    if (levelTwoTreeShadeAnimationSpeed < -levelTwoWindowTreeShade.rect.w)
    {
        levelTwoTreeShadeAnimationSpeed = 0;
    }
    levelTwoCloudsAnimationSpeed -= 1;
    if (levelTwoCloudsAnimationSpeed < -levelTwoWindowClouds.rect.w)
    {
        levelTwoCloudsAnimationSpeed = 0;
    }

    levelTwoTrackAnimationSpeed -= 6;
    if (levelTwoTrackAnimationSpeed < -levelTwoWindowTrack.rect.w)
    {
        levelTwoTrackAnimationSpeed = 0;
    }
    */
}
void drawLevelTwoWindowFunction()
{
    if (isspaceclicked == 1 && variables.levelTwo == 1)
    {
        updateAnimationSpeedForLevelTwoWindow();
       
        
    }

    levelTwoWindowSky.rect.x = levelTwoSkyAnimationSpeed;
    levelTwoWindowMountains.rect.x = levelTwoMountainsAnimationSpeed;
    levelTwoWindowTreeShade.rect.x = levelTwoTreeShadeAnimationSpeed;
    levelTwoWindowClouds.rect.x = levelTwoCloudsAnimationSpeed;
    levelTwoWindowTrack.rect.x = levelTwoTrackAnimationSpeed;
    SDL_RenderClear(app.rend);

    SDL_RenderCopy(app.rend, levelTwoWindowSky.tex, NULL, &levelTwoWindowSky.rect);
    levelTwoWindowSky.rect.x = levelTwoSkyAnimationSpeed + levelTwoWindowSky.rect.w;
    SDL_RenderCopy(app.rend, levelTwoWindowSky.tex, NULL, &levelTwoWindowSky.rect);

    SDL_RenderCopy(app.rend, levelTwoWindowMountains.tex, NULL, &levelTwoWindowMountains.rect);
    levelTwoWindowMountains.rect.x = levelTwoMountainsAnimationSpeed+ levelTwoWindowMountains.rect.w;
    SDL_RenderCopy(app.rend, levelTwoWindowMountains.tex, NULL, &levelTwoWindowMountains.rect);

    SDL_RenderCopy(app.rend, levelTwoWindowTreeShade.tex, NULL, &levelTwoWindowTreeShade.rect);
    levelTwoWindowTreeShade.rect.x = levelTwoTreeShadeAnimationSpeed + levelTwoWindowTreeShade.rect.w;
    SDL_RenderCopy(app.rend, levelTwoWindowTreeShade.tex, NULL, &levelTwoWindowTreeShade.rect);

    SDL_RenderCopy(app.rend, levelTwoWindowTrack.tex, NULL, &levelTwoWindowTrack.rect);
    levelTwoWindowTrack.rect.x = levelTwoTrackAnimationSpeed + levelTwoWindowTrack.rect.w;
    SDL_RenderCopy(app.rend, levelTwoWindowTrack.tex, NULL, &levelTwoWindowTrack.rect);

    SDL_RenderCopy(app.rend, levelTwoWindowMoon.tex, NULL, &levelTwoWindowMoon.rect);

    SDL_RenderCopy(app.rend, levelTwoWindowClouds.tex, NULL, &levelTwoWindowClouds.rect);
    levelTwoWindowClouds.rect.x = levelTwoCloudsAnimationSpeed + levelTwoWindowClouds.rect.w;
    SDL_RenderCopy(app.rend, levelTwoWindowClouds.tex, NULL, &levelTwoWindowClouds.rect);

    SDL_RenderCopy(app.rend, levelTwoWindowCharacter.tex, &levelTwoWindowCharacter.rect, & levelTwoWindowCharacterPosition.rect);

    SDL_RenderCopy(app.rend, back.tex, NULL, &back.rect);

    if (isspaceclicked == 1 && variables.levelTwo == 1)
    {
        // drawBoxFunction(); 
        // drawLevelTwoCoinsFunction();
        // drawLevelTwoCoinsPopupFunction();
        // drawBombandPlaneFunction();
        // drawLevelTwoLifeFunction();
        // drawLevelTwoHeartFunction();


    drawBoxFunction();
    drawLevelTwoCoinsFunction();
    drawBombandPlaneFunction();
    drawLevelTwoHeartFunction();
    drawLevelTwoLifeFunction();
    drawLevelTwoCoinsPopupFunction();
    drawLevelTwoHeartPopupFunction();
    LevelTwoLifeTextCleanUp();


    }
     

     
    
}