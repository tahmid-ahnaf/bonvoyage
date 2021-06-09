#include "initiateLevelOneWindow.h"

void levelOneWindowLoad(void)
{
    //sky

    window.surface = IMG_Load("images/levelone/newsky.png");

    if (!window.surface)
    {
        printf("sky_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindowSky.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelOneWindowSky.tex)
    {
        printf("sky_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelOneWindowSky.rect;
    SDL_QueryTexture(levelOneWindowSky.tex, NULL, NULL, &levelOneWindowSky.rect.w, &levelOneWindowSky.rect.h);
    levelOneWindowSky.rect.w = (int)WINDOW_WIDTH;
    levelOneWindowSky.rect.h = (int)WINDOW_HEIGHT;
    levelOneWindowSky.rect.x = (int)0;
    levelOneWindowSky.rect.y = (int)0;

    //sun
    window.surface = IMG_Load("images/levelone/sun-min.png");

    if (!window.surface)
    {
        printf("sun_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindowSun.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelOneWindowSun.tex)
    {
        printf("mountains_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelOneWindowSun.rect;
    SDL_QueryTexture(levelOneWindowSun.tex, NULL, NULL, &levelOneWindowSun.rect.w, &levelOneWindowSun.rect.h);
    levelOneWindowSun.rect.w = (int)110;
    levelOneWindowSun.rect.h = (int)110;
    levelOneWindowSun.rect.x = WINDOW_WIDTH / 2;
    levelOneWindowSun.rect.y = 150;

    //clouds
    window.surface = IMG_Load("images/levelone/clouds-min.png");

    if (!window.surface)
    {
        printf("clouds_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindowClouds.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelOneWindowClouds.tex)
    {
        printf("clouds Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelOneWindowClouds.rect;
    SDL_QueryTexture(levelOneWindowClouds.tex, NULL, NULL, &levelOneWindowClouds.rect.w, &levelOneWindowClouds.rect.h);
    levelOneWindowClouds.rect.w = (int)WINDOW_WIDTH - 200;
    levelOneWindowClouds.rect.h = (int)226;
    levelOneWindowClouds.rect.x = (int)0;
    levelOneWindowClouds.rect.y = 50;
    //mountains

    window.surface = IMG_Load("images/levelone/newmountains.png");

    if (!window.surface)
    {
        printf("mountains_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindowMountains.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelOneWindowMountains.tex)
    {
        printf("mountains_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelOneWindowMountains.rect;
    SDL_QueryTexture(levelOneWindowMountains.tex, NULL, NULL, &levelOneWindowMountains.rect.w, &levelOneWindowMountains.rect.h);
    levelOneWindowMountains.rect.w = (int)WINDOW_WIDTH;
    levelOneWindowMountains.rect.h = (int)584;
    levelOneWindowMountains.rect.x = (int)0;
    levelOneWindowMountains.rect.y = (int)180;

    //treeshade
    window.surface = IMG_Load("images/levelone/treeshadegreen.png");

    if (!window.surface)
    {
        printf("treeshade_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindowTreeShade.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelOneWindowTreeShade.tex)
    {
        printf("treeshade_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelOneWindowTreeShade.rect;
    SDL_QueryTexture(levelOneWindowTreeShade.tex, NULL, NULL, &levelOneWindowTreeShade.rect.w, &levelOneWindowTreeShade.rect.h);
    levelOneWindowTreeShade.rect.w = (int)WINDOW_WIDTH;
    levelOneWindowTreeShade.rect.h = (int)357;
    //  levelOneWindowTreeShade.rect.h = (int)445;
    levelOneWindowTreeShade.rect.x = (int)0;
    levelOneWindowTreeShade.rect.y = (int)330;

    // trees
    window.surface = IMG_Load("images/levelone/newtrees.png");

    if (!window.surface)
    {
        printf("trees_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindowTrees.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelOneWindowTrees.tex)
    {
        printf("trees_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelOneWindowTrees.rect;
    SDL_QueryTexture(levelOneWindowTrees.tex, NULL, NULL, &levelOneWindowTrees.rect.w, &levelOneWindowTrees.rect.h);
    levelOneWindowTrees.rect.w = (int)WINDOW_WIDTH;
    levelOneWindowTrees.rect.h = (int)207;
    levelOneWindowTrees.rect.x = (int)0;
    levelOneWindowTrees.rect.y = (int)580;

    //clouds

    //track
    window.surface = IMG_Load("images/levelone/newtrack.png");

    if (!window.surface)
    {
        printf("track_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindowTrack.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelOneWindowTrack.tex)
    {
        printf("track Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelOneWindowTrack.rect;
    SDL_QueryTexture(levelOneWindowTrack.tex, NULL, NULL, &levelOneWindowTrack.rect.w, &levelOneWindowTrack.rect.h);
    levelOneWindowTrack.rect.w = (int)WINDOW_WIDTH;
    levelOneWindowTrack.rect.h = (int)200;
    levelOneWindowTrack.rect.x = (int)0;
    levelOneWindowTrack.rect.y = (int)760;

    //tiger
    window.surface = IMG_Load("images/levelone/tiger_sprite.png");

    if (!window.surface)
    {
        printf("character_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindowTiger.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelOneWindowTiger.tex)
    {
        printf("Tiger Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(levelOneWindowTiger.tex, NULL, NULL, &levelOneTigerTexturewidth, &levelOneTigerTextureheight);
    levelOneTigerFramewidth = levelOneTigerTexturewidth / 6 + 1;
    //for red sprite                                        //for green sprite
    levelOneTigerFrameheight = levelOneTigerTextureheight / 2;
    levelOneWindowTiger.rect.w = levelOneTigerFramewidth;
    levelOneWindowTiger.rect.h = levelOneTigerFrameheight;
    levelOneWindowTiger.rect.x = 0;
    levelOneWindowTiger.rect.y = 0;
    tigerFramePosition.rect.w = levelOneTigerFramewidth;
    tigerFramePosition.rect.h = levelOneTigerFrameheight;
    tigerFramePosition.rect.x = WINDOW_WIDTH / 2 - 400;
    tigerFramePosition.rect.y = 730;

    //character
    window.surface = IMG_Load("images/levelone/Transparent_sprite-min.png");

    if (!window.surface)
    {
        printf("character_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindowCharacter.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelOneWindowCharacter.tex)
    {
        printf("character Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(levelOneWindowCharacter.tex, NULL, NULL, &levelOneCharacterTexturewidth, &levelOneCharacterTextureheight);
    levelOneCharacterFramewidth = levelOneCharacterTexturewidth / 6 + 1;
    //for red sprite                                        //for green sprite
    levelOneCharacterFrameheight = levelOneCharacterTextureheight / 2;
    levelOneWindowCharacter.rect.w = levelOneCharacterFramewidth;
    levelOneWindowCharacter.rect.h = levelOneCharacterFrameheight;
    levelOneWindowCharacter.rect.x = 0;
    levelOneWindowCharacter.rect.y = 0;
    characterFramePosition.rect.w = levelOneCharacterFramewidth - 50;
    characterFramePosition.rect.h = levelOneCharacterFrameheight - 50;
    characterFramePosition.rect.x = WINDOW_WIDTH / 2 - 100;
    characterFramePosition.rect.y = 665;

    //score
    window.surface = IMG_Load("images/levelone/coins-min.png");

    if (!window.surface)
    {
        printf("score_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindowScore.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!levelOneWindowScore.tex)
    {
        printf("score Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelOneWindowScore.rect;
    SDL_QueryTexture(levelOneWindowScore.tex, NULL, NULL, &levelOneWindowScore.rect.w, &levelOneWindowScore.rect.h);
    levelOneWindowScore.rect.w = (int)35;
    levelOneWindowScore.rect.h = (int)40;
    levelOneWindowScore.rect.x = (int)60;
    levelOneWindowScore.rect.y = (int)33;

    //highScore
    window.surface = IMG_Load("images/levelone/trophy.png");

    if (!window.surface)
    {
        printf("highScore_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindowHighScore.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!levelOneWindowHighScore.tex)
    {
        printf("highScore Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelOneWindowHighScore.rect;
    SDL_QueryTexture(levelOneWindowHighScore.tex, NULL, NULL, &levelOneWindowHighScore.rect.w, &levelOneWindowHighScore.rect.h);
    levelOneWindowHighScore.rect.w = (int)35;
    levelOneWindowHighScore.rect.h = (int)40;
    levelOneWindowHighScore.rect.x = (int)60;
    levelOneWindowHighScore.rect.y = (int)100;

    //curzon
    window.surface = IMG_Load("images/levelone/curzonre.png");

    if (!window.surface)
    {
        printf("highScore_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneCurzon.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!levelOneCurzon.tex)
    {
        printf("highScore Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelOneCurzon.rect;
    SDL_QueryTexture(levelOneCurzon.tex, NULL, NULL, &levelOneCurzon.rect.w, &levelOneCurzon.rect.h);
    levelOneCurzon.rect.w = (int)400;
    levelOneCurzon.rect.h = (int)200;
    levelOneCurzon.rect.x = (int)curzonPosition;
    levelOneCurzon.rect.y = (int)630;

    levelOneCoinsLoad();
    levelOneObstacleLoad();
    levelOneCoinsEffectLoad();
    levelOneLifeLoad();
    levelOneLifeLossLoad();
    updateScore();
}

void levelOneWindowCleanUp()
{

    SDL_DestroyTexture(levelOneWindowSky.tex);
    SDL_DestroyTexture(levelOneWindowMountains.tex);
    SDL_DestroyTexture(levelOneWindowTreeShade.tex);
    SDL_DestroyTexture(levelOneWindowTrees.tex);
    SDL_DestroyTexture(levelOneWindowClouds.tex);
    SDL_DestroyTexture(levelOneWindowTrack.tex);
    SDL_DestroyTexture(levelOneWindowCharacter.tex);
    SDL_DestroyTexture(levelOneWindowScore.tex);
    SDL_DestroyTexture(levelOneWindowHighScore.tex);
    SDL_DestroyTexture(levelOneCurzon.tex);
    SDL_DestroyTexture(levelOneWindowSun.tex);
    IMG_Quit();
}