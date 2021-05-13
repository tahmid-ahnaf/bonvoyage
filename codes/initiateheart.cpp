#include "initiateheart.h"
void heartload()
{
    levelTwoWindow.heart.surface = IMG_Load("images/level2obstacles/hearts.png");

    if (!levelTwoWindow.heart.surface)
    {
        printf("HEART Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindow.heart.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.heart.surface);

    if (!levelTwoWindow.heart.tex)
    {
        printf("HEART Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindow.heart.rect;

    SDL_QueryTexture(levelTwoWindow.heart.tex, NULL, NULL, &levelTwoWindow.heart.rect.w, &levelTwoWindow.heart.rect.h);
    
    levelTwoWindow.heart.rect.w = (int)100;
    levelTwoWindow.heart.rect.h = (int)100;
    levelTwoWindow.heart.rect.x = (int)levelTwoWindow.box.rect.x + 50;
    levelTwoWindow.heart.rect.y = (int)levelTwoWindow.box.rect.y - 70;

    /*#######################################   VARIABLES FOR ANIMATE THE HEART SPRITESHEET #############################################*/

   

    levelTwoWindow.rotatingheart.rect;
    SDL_QueryTexture(levelTwoWindow.heart.tex, NULL, NULL, &variables.levelTwoVars.HEART_TEXTURE_HEIGHT, &variables.levelTwoVars.HEART_TEXTURE_WIDTH);

    int HEART_FRAME_WIDTH = variables.levelTwoVars.HEART_TEXTURE_WIDTH / 2;
    int HEART_FRAME_HEIGHT = variables.levelTwoVars.HEART_TEXTURE_HEIGHT / 2;

    levelTwoWindow.rotatingheart.rect.w = (int)HEART_FRAME_WIDTH;
    levelTwoWindow.rotatingheart.rect.h = (int)HEART_FRAME_HEIGHT;
    levelTwoWindow.rotatingheart.rect.x = (int)0;
    levelTwoWindow.rotatingheart.rect.y = (int)0;


    levelTwoWindow.lifebonuspopup.surface = IMG_Load("images/level2obstacles/point.png");

    if (!levelTwoWindow.lifebonuspopup.surface)
    {
        printf("LIFEBONUS ERROR: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindow.lifebonuspopup.tex = SDL_CreateTextureFromSurface(app.rend,levelTwoWindow.lifebonuspopup.surface);

    if (!levelTwoWindow.lifebonuspopup.tex)
    {
        printf("LIFEBONUS Texture ERROR %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoWindow.lifebonuspopup.rect;
    SDL_QueryTexture(levelTwoWindow.lifebonuspopup.tex, NULL, NULL, &levelTwoWindow.lifebonuspopup.rect.w, &levelTwoWindow.lifebonuspopup.rect.h);

   levelTwoWindow.lifebonuspopup.rect.w = (int)0;
   levelTwoWindow.lifebonuspopup.rect.h = (int)0;
   levelTwoWindow.lifebonuspopup.rect.x = (int)WINDOW_WIDTH / 2;
   levelTwoWindow.lifebonuspopup.rect.y = (int)WINDOW_HEIGHT / 2;

    /*********************************************** CREATING POINT POP UP AGAIN FOR LIFE BONUS ENDS  *******************************************/
    /*********************************************** CREATING RECT FOR DISPLAYING LIFE SCORE STARTS  ********************************************/

    levelTwoWindow.lifescoredisplay.surface = IMG_Load("images/level2obstacles/lifescore.png");

    if (!levelTwoWindow.lifescoredisplay.surface)
    {
        printf("LIFE_SCORE_DISPLAY Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindow.lifescoredisplay.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.lifescoredisplay.surface);

    if (!levelTwoWindow.lifescoredisplay.tex)
    {
        printf("LIFE_SCORE_DISPLAY  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
     levelTwoWindow.lifescoredisplay.rect;
    SDL_QueryTexture(levelTwoWindow.lifescoredisplay.tex, NULL, NULL, &levelTwoWindow.lifescoredisplay.rect.w, &levelTwoWindow.lifescoredisplay.rect.h);
   
    levelTwoWindow.lifescoredisplay.rect.w = (int)125;
    levelTwoWindow.lifescoredisplay.rect.h = (int)39;
    levelTwoWindow.lifescoredisplay.rect.x = (int)1110;
    levelTwoWindow.lifescoredisplay.rect.y = (int)63;

    /*********************************************** CREATING RECT FOR DISPLAYING LIFE SCORE ENDS  ********************************************/

    /*********************************************** CREATING RECT FOR DISPLAYING STATIC HEART BEFORE LIFE SCORE STARTS  ********************************************/
    levelTwoWindow.lifeheartdisplay.surface = IMG_Load("images/level2obstacles/life.png");

    if (!levelTwoWindow.lifeheartdisplay.surface)
    {
        printf("LIFE_HEART_DISPLAY Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindow.lifeheartdisplay.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.lifeheartdisplay.surface);

    if (!levelTwoWindow.lifeheartdisplay.tex)
    {
        printf("LIFE_HEART_DISPLAY  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
     levelTwoWindow.lifeheartdisplay.rect;
    SDL_QueryTexture(levelTwoWindow.lifeheartdisplay.tex, NULL, NULL, &levelTwoWindow.lifeheartdisplay.rect.w, &levelTwoWindow.lifeheartdisplay.rect.h);
    /* adjusting the poster for wide screen */
    levelTwoWindow.lifeheartdisplay.rect.w = (int)90;
    levelTwoWindow.lifeheartdisplay.rect.h = (int)72;
    levelTwoWindow.lifeheartdisplay.rect.x = (int)1078;
    levelTwoWindow.lifeheartdisplay.rect.y = (int)31;

}




void HeartCleanUp()
{
     
 
    SDL_FreeSurface(levelTwoWindow.heart.surface);
    SDL_DestroyTexture(levelTwoWindow.heart.tex);
    SDL_FreeSurface(levelTwoWindow.rotatingheart.surface);
    SDL_DestroyTexture(levelTwoWindow.rotatingheart.tex);
    SDL_FreeSurface(levelTwoWindow.lifebonuspopup.surface);
    SDL_DestroyTexture(levelTwoWindow.lifebonuspopup.tex);
    IMG_Quit();
}

