#include "drawLevelTwoWindow.h"

void updateAnimationSpeedForLevelTwoWindow()
{
    characterTwoPrevtime = characterTwoCurrentime;
    characterTwoCurrentime = SDL_GetTicks();
    characterTwoDeltatime = (characterTwoCurrentime - characterTwoPrevtime) / 280.0f;

    levelTwoDragonPrevtime = levelTwoDragonCurrentime;
    levelTwoDragonCurrentime = SDL_GetTicks();
    levelTwoDragonDeltatime = (levelTwoDragonCurrentime - levelTwoDragonPrevtime) / 280.0f;

    levelTwoDragonFrametime += levelTwoDragonDeltatime;
    if (levelTwoDragonFrametime >= (0.25f))
    {
        levelTwoDragonFrametime = 0.0;
        levelTwoDragon.rect.x += levelTwoDragonFramewidth;

        if (levelTwoDragon.rect.x >= levelTwoDragonTexturewidth)
        {
            levelTwoDragon.rect.x = 0;
        }
    }

    if (delayCountForCharacterCollisionEffect == 250)
    {
        if (currentLife > 10)
        {
            levelTwoWindowCharacter.surface = IMG_Load("images/level2obstacles/sonicsprite.png");
            levelTwoWindowCharacter.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindowCharacter.surface);
        }
        else
        {
            levelTwoWindowCharacter.surface = IMG_Load("images/level2obstacles/sonicsprite3.png");
            levelTwoWindowCharacter.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindowCharacter.surface);
        }
        delayCountForCharacterCollisionEffect = 0;
    }
    if (delayCountForCharacterCollisionEffect > 0)
    {
        delayCountForCharacterCollisionEffect++;
    }

    rectx = levelTwoWindowCharacter.rect.x;
    recty = levelTwoWindowCharacter.rect.y;
    characterTwoFrametime += characterTwoDeltatime;

    if (characterTwoFrametime >= (0.25f))
    {
        characterTwoFrametime = 0;
        rectx += levelTwoCharacterFrameWidth;
        if (rectx == levelTwoCharacterTextureWidth && recty == 130)
        {
            recty = 0;
            rectx = 0;
        }
        else if (rectx == levelTwoCharacterTextureWidth)
        {
            rectx = 0;
            recty = levelTwoCharacterFrameHeight;
        }
    }

    levelTwoWindowCharacter.rect.x = levelTwoRotatingCoin.rect.x = levelTwoRotatingHeart.rect.x = rectx;

    levelTwoWindowCharacter.rect.y = levelTwoRotatingCoin.rect.y = levelTwoRotatingHeart.rect.y = recty;

    drawLevelTwoLifeText();
    boxmotion();
    updateHeartPosition();

    //   if (currentScore >highScore)
    //             {
    //   updateHighScoreOnFileLevel2();
    // //   }
    collisionsLevelTwo();
    lifeatstakeaftereffect();
    updateLevelTwoLifeBonusPopupFunction();
    updateLevelTwoScore();
    sprintf(lifeString, "%i", currentLife);

    if (yPosLevelTwoCharacter <= 40)
    {
        yPosLevelTwoCharacter = 40;
    }
    if (xPosLevelTwoCharacter <= 40)
    {
        xPosLevelTwoCharacter = 40;
    }
    if (yPosLevelTwoCharacter >= 800)
    {
        yPosLevelTwoCharacter = 800;
    }
    if (xPosLevelTwoCharacter >= WINDOW_WIDTH)
    {
        xPosLevelTwoCharacter = 0;
    }
    /*############### KEEPING THE CHARACTER INTO THE FRAME ENDS ####################*/

    levelTwoWindowCharacterPosition.rect.x = xPosLevelTwoCharacter;
    levelTwoWindowCharacterPosition.rect.y = yPosLevelTwoCharacter;

    levelTwoSkyAnimationSpeed -= 0.5;
    if (levelTwoSkyAnimationSpeed < -levelTwoWindowSky.rect.w)
    {
        levelTwoSkyAnimationSpeed = 0;
    }

    levelTwoMountainsAnimationSpeed -= 2;
    if (levelTwoMountainsAnimationSpeed < -levelTwoWindowMountains.rect.w)
    {
        levelTwoMountainsAnimationSpeed = 0;
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
    levelTwoWindowMountains.rect.x = levelTwoMountainsAnimationSpeed + levelTwoWindowMountains.rect.w;
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

    SDL_RenderCopy(app.rend, levelOneWindowScore.tex, NULL, &levelOneWindowScore.rect);
    SDL_RenderCopy(app.rend, levelOneWindowHighScore.tex, NULL, &levelOneWindowHighScore.rect);
    SDL_RenderCopy(app.rend, levelTwoWindowScoreText.tex, NULL, &levelTwoWindowScoreText.rect);
    SDL_RenderCopy(app.rend, levelTwoWindowHighScoreText.tex, NULL, &levelTwoWindowHighScoreText.rect);

    SDL_RenderCopy(app.rend, back.tex, NULL, &back.rect);

    if (isspaceclicked == 1 && variables.levelTwo == 1)
    {
        SDL_RenderCopy(app.rend, levelTwoWindowCharacter.tex, &levelTwoWindowCharacter.rect, &levelTwoWindowCharacterPosition.rect);
        drawBoxFunction();
        drawLevelTwoCoinsFunction();
        drawLevelTwoCoinsPopupFunction();
        drawBombandDragonFunction();
        drawLevelTwoLifeFunction();
        LevelTwoLifeTextCleanUp();
        drawLevelTwoHeartFunction();
        drawLevelTwoHeartPopupFunction();
    }
}