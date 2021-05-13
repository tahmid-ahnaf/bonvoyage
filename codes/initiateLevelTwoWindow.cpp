#include "initiateLevelTwoWindow.h"

void leveltwowindow(void)
{
    //sky

    levelTwoWindow.sky.surface = IMG_Load("images/leveltwo/new/sky.png");

    if (!levelTwoWindow.sky.surface)
    {
        printf("sky_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindow.sky.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.sky.surface);

    if (!levelTwoWindow.sky.tex)
    {
        printf("sky_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoWindow.sky.rect;
    SDL_QueryTexture(levelTwoWindow.sky.tex, NULL, NULL, &levelTwoWindow.sky.rect.w, &levelTwoWindow.sky.rect.h);
    levelTwoWindow.sky.rect.w = (int)WINDOW_WIDTH;
    levelTwoWindow.sky.rect.h = (int)WINDOW_HEIGHT;
    levelTwoWindow.sky.rect.x = (int)0;
    levelTwoWindow.sky.rect.y = (int)0;

     //moon

    levelTwoWindow.moon.surface = IMG_Load("images/leveltwo/new/final moon.png");

    if (!levelTwoWindow.moon.surface)
    {
        printf("moon_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindow.moon.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.moon.surface);

    if (!levelTwoWindow.moon.tex)
    {
        printf("mountains_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoWindow.moon.rect;
    SDL_QueryTexture(levelTwoWindow.moon.tex, NULL, NULL, &levelTwoWindow.moon.rect.w, &levelTwoWindow.moon.rect.h);
    levelTwoWindow.moon.rect.w = (int)110;
    levelTwoWindow.moon.rect.h = (int)110;
    levelTwoWindow.moon.rect.x = WINDOW_WIDTH / 2;
    levelTwoWindow.moon.rect.y = 150;

    //mountains

    levelTwoWindow.mountains.surface = IMG_Load("images/leveltwo/new/mountains.png");

    if (!levelTwoWindow.mountains.surface)
    {
        printf("mountains_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindow.mountains.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.mountains.surface);

    if (!levelTwoWindow.mountains.tex)
    {
        printf("mountains_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoWindow.mountains.rect;
    SDL_QueryTexture(levelTwoWindow.mountains.tex, NULL, NULL, &levelTwoWindow.mountains.rect.w, &levelTwoWindow.mountains.rect.h);
    levelTwoWindow.mountains.rect.w = (int)WINDOW_WIDTH;
    levelTwoWindow.mountains.rect.h = (int)650;
    levelTwoWindow.mountains.rect.x = (int)0;
    levelTwoWindow.mountains.rect.y = (int)220;

    // treeshade
    levelTwoWindow.treeshade.surface = IMG_Load("images/leveltwo/new/tree.png");

    if (!levelTwoWindow.treeshade.surface)
    {
        printf("treeshade_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindow.treeshade.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.treeshade.surface);

    if (!levelTwoWindow.treeshade.tex)
    {
        printf("treeshade_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoWindow.treeshade.rect;
    SDL_QueryTexture(levelTwoWindow.treeshade.tex, NULL, NULL, &levelTwoWindow.treeshade.rect.w, &levelTwoWindow.treeshade.rect.h);
    levelTwoWindow.treeshade.rect.w = (int)WINDOW_WIDTH;
    levelTwoWindow.treeshade.rect.h = (int)380;
    levelTwoWindow.treeshade.rect.x = (int)0;
    levelTwoWindow.treeshade.rect.y = (int)385;

    //clouds
    levelTwoWindow.clouds.surface = IMG_Load("images/leveltwo/new/cloudsfinal.png");

    if (!levelTwoWindow.clouds.surface)
    {
        printf("clouds_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindow.clouds.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.clouds.surface);

    if (!levelTwoWindow.clouds.tex)
    {
        printf("clouds Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoWindow.clouds.rect;
    SDL_QueryTexture(levelTwoWindow.clouds.tex, NULL, NULL, &levelTwoWindow.clouds.rect.w, &levelTwoWindow.clouds.rect.h);
    levelTwoWindow.clouds.rect.w = (int)WINDOW_WIDTH - 200;
    levelTwoWindow.clouds.rect.h = (int)226;
    levelTwoWindow.clouds.rect.x = (int)0;
    levelTwoWindow.clouds.rect.y = 50;

    //track
    levelTwoWindow.track.surface = IMG_Load("images/leveltwo/new/tracks1.png");

    if (!levelTwoWindow.track.surface)
    {
        printf("track_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindow.track.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.track.surface);

    if (!levelTwoWindow.track.tex)
    {
        printf("track Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoWindow.track.rect;
    SDL_QueryTexture(levelTwoWindow.track.tex, NULL, NULL, &levelTwoWindow.track.rect.w, &levelTwoWindow.track.rect.h);
    levelTwoWindow.track.rect.w = (int)WINDOW_WIDTH;
    levelTwoWindow.track.rect.h = (int)200;
    levelTwoWindow.track.rect.x = (int)0;
    levelTwoWindow.track.rect.y = (int)760;

    //character
    levelTwoWindow.character2.surface = IMG_Load("images/level2obstacles/sonicsprite.png");

    if (!levelTwoWindow.character2.surface)
    {
        printf("character_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindow.character2.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.character2.surface);

    if (!levelTwoWindow.character2.tex)
    {
        printf("character Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    // SDL_QueryTexture(levelTwoWindow.character.tex, NULL, NULL, &variables.levelTwoVars.characterTexturewidth, &variables.levelTwoVars.characterTextureheight);
    //  variables.levelOneVars.characterFramewidth = variables.levelOneVars.characterTexturewidth / 6 + 1;
    // //for red sprite                                        //for green sprite
    // variables.levelOneVars.characterFrameheight = variables.levelOneVars.characterTextureheight / 2;
    // levelTwoWindow.character.rect.w = variables.levelTwoVars.characterFramewidth;
    // levelTwoWindow.character.rect.h = variables.levelTwoVars.characterFrameheight;
    // levelTwoWindow.character.rect.x = 250;
    // levelTwoWindow.character.rect.y = 250;
    // levelOneWindow.characterFramePosition.rect.w = variables.levelOneVars.characterFramewidth;
    // levelOneWindow.characterFramePosition.rect.h = variables.levelOneVars.characterFrameheight;
    // levelTwoWindow.characterFramePosition.rect.x = 250;
    // levelTwoWindow.characterFramePosition.rect.y = 250;

    levelTwoWindow.character2.rect;
    levelTwoWindow.character2Position.rect;
  
    float FRAME_TIME = 0;
    int PREV_TIME = 0;
    float DELTA_TIME = 0;

    SDL_QueryTexture(levelTwoWindow.character2.tex, NULL, NULL, &variables.levelTwoVars.CHARACTER2_TEXTURE_HEIGHT, &variables.levelTwoVars.CHARACTER2_TEXTURE_WIDTH);

    variables.levelTwoVars.CHARACTER2_FRAME_WIDTH = variables.levelTwoVars.CHARACTER2_TEXTURE_WIDTH/ 2;
    variables.levelTwoVars.CHARACTER2_FRAME_HEIGHT = variables.levelTwoVars.CHARACTER2_TEXTURE_HEIGHT / 2;
    levelTwoWindow.character2.rect.w = variables.levelTwoVars.CHARACTER2_FRAME_WIDTH;
    levelTwoWindow.character2.rect.h = variables.levelTwoVars.CHARACTER2_FRAME_HEIGHT;
    levelTwoWindow.character2.rect.x = 0;
    levelTwoWindow.character2.rect.y = 0;
    levelTwoWindow.character2Position.rect.w = variables.levelTwoVars.CHARACTER2_FRAME_WIDTH;
    levelTwoWindow.character2Position.rect.h = variables.levelTwoVars.CHARACTER2_FRAME_HEIGHT;
    levelTwoWindow.character2Position.rect.x = 30;
    levelTwoWindow.character2Position.rect.y =720;
    float CHARACTER2_X_POS = (float)100;
    float CHARACTER2_Y_POS = (float)700;

    boxload();
    Level2Coinsload();
    bombandplaneload();
    heartload();
    LoadScoreFileLevel2();
}

void levelTwoWindowCleanUp()
{
    SDL_FreeSurface(levelTwoWindow.sky.surface);
    SDL_DestroyTexture(levelTwoWindow.sky.tex);
    SDL_FreeSurface(levelTwoWindow.moon.surface);
    SDL_DestroyTexture(levelTwoWindow.moon.tex);
    SDL_FreeSurface(levelTwoWindow.mountains.surface);
    SDL_DestroyTexture(levelTwoWindow.mountains.tex);
    SDL_FreeSurface(levelTwoWindow.treeshade.surface);
    SDL_DestroyTexture(levelTwoWindow.treeshade.tex);
    SDL_FreeSurface(levelTwoWindow.clouds.surface);
    SDL_DestroyTexture(levelTwoWindow.clouds.tex);
    SDL_FreeSurface(levelTwoWindow.track.surface);
    SDL_DestroyTexture(levelTwoWindow.track.tex);
    SDL_FreeSurface(levelTwoWindow.character2.surface);
    SDL_DestroyTexture(levelTwoWindow.character2.tex);
    IMG_Quit();
    BoxCleanUp();
    Level2CoinsCleanUp();
    BombandPlaneCleanUp();
    HeartCleanUp();
   Leve2LifeTextCleanUp();
   popuppointcleanup();
   
}