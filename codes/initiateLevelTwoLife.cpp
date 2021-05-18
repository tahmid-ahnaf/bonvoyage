#include "initiateLevelTwoLife.h"
void LevelTwoLifeLoad()
{
    window.surface = IMG_Load("images/level2obstacles/hearts.png");

    if (!window.surface)
    {
        printf("HEART Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoHeart.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);

    if (!levelTwoHeart.tex)
    {
        printf("HEART Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoHeart.rect;

    SDL_QueryTexture(levelTwoHeart.tex, NULL, NULL, &levelTwoHeart.rect.w, &levelTwoHeart.rect.h);
    
    levelTwoHeart.rect.w = (int)100;
    levelTwoHeart.rect.h = (int)100;
    levelTwoHeart.rect.x = (int)levelTwoBox.rect.x + 50;
    levelTwoHeart.rect.y = (int)levelTwoBox.rect.y - 70;

    /*#######################################   VARIABLES FOR ANIMATE THE HEART SPRITESHEET #############################################*/

   

    levelTwoRotatingHeart.rect;
    SDL_QueryTexture(levelTwoHeart.tex, NULL, NULL, &heartTextureHeight, &heartTextureWidth);

    int HEART_FRAME_WIDTH = heartTextureWidth / 2;
    int HEART_FRAME_HEIGHT = heartTextureHeight / 2;

    levelTwoRotatingHeart.rect.w = (int)HEART_FRAME_WIDTH;
    levelTwoRotatingHeart.rect.h = (int)HEART_FRAME_HEIGHT;
    levelTwoRotatingHeart.rect.x = (int)0;
    levelTwoRotatingHeart.rect.y = (int)0;


    window.surface = IMG_Load("images/level2obstacles/point.png");

    if (!window.surface)
    {
        printf("LIFEBONUS ERROR: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoLifeBonusPopUp.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);

    if (!levelTwoLifeBonusPopUp.tex)
    {
        printf("LIFEBONUS Texture ERROR %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoLifeBonusPopUp.rect;
    SDL_QueryTexture(levelTwoLifeBonusPopUp.tex, NULL, NULL, &levelTwoLifeBonusPopUp.rect.w, &levelTwoLifeBonusPopUp.rect.h);

   levelTwoLifeBonusPopUp.rect.w = (int)0;
   levelTwoLifeBonusPopUp.rect.h = (int)0;
   levelTwoLifeBonusPopUp.rect.x = (int)WINDOW_WIDTH / 2;
   levelTwoLifeBonusPopUp.rect.y = (int)WINDOW_HEIGHT / 2;

    /*********************************************** CREATING POINT POP UP AGAIN FOR LIFE BONUS ENDS  *******************************************/
    /*********************************************** CREATING RECT FOR DISPLAYING LIFE SCORE STARTS  ********************************************/

    window.surface = IMG_Load("images/level2obstacles/lifescore.png");

    if (!window.surface)
    {
        printf("LIFE_SCORE_DISPLAY Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoLifeScoreDisplay.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);

    if (!levelTwoLifeScoreDisplay.tex)
    {
        printf("LIFE_SCORE_DISPLAY  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoLifeScoreDisplay.rect;
    SDL_QueryTexture(levelTwoLifeScoreDisplay.tex, NULL, NULL, &levelTwoLifeScoreDisplay.rect.w, &levelTwoLifeScoreDisplay.rect.h);
   
    levelTwoLifeScoreDisplay.rect.w = (int)125;
    levelTwoLifeScoreDisplay.rect.h = (int)39;
    levelTwoLifeScoreDisplay.rect.x = (int)1110;
    levelTwoLifeScoreDisplay.rect.y = (int)63;

    /*********************************************** CREATING RECT FOR DISPLAYING LIFE SCORE ENDS  ********************************************/

    /*********************************************** CREATING RECT FOR DISPLAYING STATIC HEART BEFORE LIFE SCORE STARTS  ********************************************/
    window.surface = IMG_Load("images/level2obstacles/life.png");

    if (!window.surface)
    {
        printf("LIFE_HEART_DISPLAY Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoHeartDisplay.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);

    if (!levelTwoHeartDisplay.tex)
    {
        printf("LIFE_HEART_DISPLAY  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
     levelTwoHeartDisplay.rect;
    SDL_QueryTexture(levelTwoHeartDisplay.tex, NULL, NULL, &levelTwoHeartDisplay.rect.w, &levelTwoHeartDisplay.rect.h);
    
    levelTwoHeartDisplay.rect.w = (int)90;
    levelTwoHeartDisplay.rect.h = (int)72;
    levelTwoHeartDisplay.rect.x = (int)1078;
    levelTwoHeartDisplay.rect.y = (int)31;

}




void HeartCleanUp()
{
     
 
    // SDL_FreeSurface(levelTwoHeart.surface);
    SDL_DestroyTexture(levelTwoHeart.tex);
    // SDL_FreeSurface(levelTwoRotatingHeart.surface);
    SDL_DestroyTexture(levelTwoRotatingHeart.tex);
    // SDL_FreeSurface(levelTwoLifeBonusPopUp.surface);
    SDL_DestroyTexture(levelTwoLifeBonusPopUp.tex);
    IMG_Quit();
}

