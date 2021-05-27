#include "drawlevelTwoTracks.h"


void JumpingEffectCharacter(){
    
    
        if ( levelTwoTrack[0].rect.y == yPosLevelTwoCharacter + levelTwoWindowCharacter.rect.h -5  && (xPosLevelTwoCharacter + levelTwoWindowCharacter.rect.w >= levelTwoTrack[0].rect.x && xPosLevelTwoCharacter + levelTwoWindowCharacter.rect.w - 100 <= levelTwoTrack[0].rect.x + levelTwoTrack[0].rect.w))
        {
            yPosLevelTwoCharacter = levelTwoTrack[0].rect.y - levelTwoWindowCharacter.rect.h+5;
        }
        else if (abs(yPosLevelTwoCharacter - (levelTwoTrack[0].rect.y - levelTwoWindowCharacter.rect.h)) <= 4)
        {
            yPosLevelTwoCharacter += 1;
        }else     if ( levelTwoTrack[1].rect.y == yPosLevelTwoCharacter + levelTwoWindowCharacter.rect.h -5  && (xPosLevelTwoCharacter + levelTwoWindowCharacter.rect.w >= levelTwoTrack[1].rect.x && xPosLevelTwoCharacter + levelTwoWindowCharacter.rect.w - 100 <= levelTwoTrack[1].rect.x + levelTwoTrack[1].rect.w))
        {
            yPosLevelTwoCharacter = levelTwoTrack[1].rect.y - levelTwoWindowCharacter.rect.h+5;
        }
        else if (abs(yPosLevelTwoCharacter - (levelTwoTrack[1].rect.y - levelTwoWindowCharacter.rect.h)) <= 4)
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
void levelTwoTrackmotion()
{    
    // levelTwoTrack.rect.x = xPosLevelTwoTrack;
    // levelTwoTrack2.rect.x = xPosLevelTwoTrack2;
    levelOneCharacterPrevtime = levelOneCharacterCurrentime;  
    levelOneCharacterCurrentime = SDL_GetTicks();
    levelOneCharacterDeltatime = (levelOneCharacterCurrentime - levelOneCharacterPrevtime) / 280.0f;

    xPosLevelTwoTrack -= moveSpeed / 3 * levelOneCharacterDeltatime;
    xPosLevelTwoTrack2 -= moveSpeed / 3 * levelOneCharacterDeltatime;

        if (xPosLevelTwoTrack + levelTwoTrack[0].rect.w <=0)
        {

            xPosLevelTwoTrack = WINDOW_WIDTH;
            levelTwoTrack[0].rect.y = rand() % WINDOW_HEIGHT;
            updateCoinsPosition();
        }

        if (xPosLevelTwoTrack2 + levelTwoTrack[0].rect.w <=0)
        {

            xPosLevelTwoTrack2 = xPosLevelTwoTrack + 820;
            levelTwoTrack[1].rect.y = levelTwoTrack[0].rect.y -100;
            updateCoinsPosition2();
        }

        levelTwoInvisibleBorder[0].rect.y = levelTwoTrack[0].rect.y + 30; 
        levelTwoInvisibleBorder[0].rect.x = xPosLevelTwoTrack;
        levelTwoInvisibleBorder[1].rect.y = levelTwoTrack[1].rect.y + 30; 
        levelTwoInvisibleBorder[1].rect.x = xPosLevelTwoTrack2;

        levelTwoTrack[0].rect.x =xPosLevelTwoTrack;
        levelTwoTrack[1].rect.x =xPosLevelTwoTrack2;

        levelTwoWindowCoins[0].rect.x = levelTwoTrack[0].rect.x + levelTwoWindowCoins[0].rect.y / 4;
        levelTwoWindowCoins[1].rect.x  =  levelTwoTrack[0].rect.x + levelTwoWindowCoins[1].rect.y / 4 + 300;
        levelTwoWindowCoins[2].rect.x = levelTwoTrack[0].rect.x - 200;
        levelTwoWindowCoins[3].rect.x = levelTwoTrack[0].rect.x  - 300;
        levelTwoWindowCoins[4].rect.x = levelTwoTrack[0].rect.x  + levelTwoTrack[0].rect.w + 200;
        
        levelTwoWindowCoins[5].rect.x = levelTwoTrack[1].rect.x + levelTwoWindowCoins[5].rect.y / 4;
        levelTwoWindowCoins[6].rect.x  =  levelTwoTrack[1].rect.x + levelTwoWindowCoins[6].rect.y / 4 + 300;
 
        JumpingEffectCharacter();
     
}
void drawLevelTwoTrackFunction()
{
    
    SDL_RenderCopy(app.rend, levelTwoTrack[0].tex, NULL, &levelTwoTrack[0].rect);
    levelTwoTrack[0].rect.x = xPosLevelTwoTrack + levelTwoTrack[0].rect.w ;
    SDL_RenderCopy(app.rend, levelTwoTrack[1].tex, NULL, &levelTwoTrack[1].rect);
    levelTwoTrack[1].rect.x = xPosLevelTwoTrack2 + levelTwoTrack[1].rect.w ;
    // SDL_RenderCopy(app.rend, levelTwoInvisibleBorder2.tex, NULL, &levelTwoInvisibleBorder2.rect);

     
}

