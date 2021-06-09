#include "initiateLevelTwoWindow.h"

void levelTwoWindowLoad(void)
{
    //sky

    window.surface = IMG_Load("images/leveltwo/new/sky.png");

    if (!window.surface)
    {
        printf("sky_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindowSky.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelTwoWindowSky.tex)
    {
        printf("sky_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoWindowSky.rect;
    SDL_QueryTexture(levelTwoWindowSky.tex, NULL, NULL, &levelTwoWindowSky.rect.w, &levelTwoWindowSky.rect.h);
    levelTwoWindowSky.rect.w = (int)WINDOW_WIDTH;
    levelTwoWindowSky.rect.h = (int)WINDOW_HEIGHT;
    levelTwoWindowSky.rect.x = (int)0;
    levelTwoWindowSky.rect.y = (int)0;

    //moon

    window.surface = IMG_Load("images/leveltwo/new/final moon.png");

    if (!window.surface)
    {
        printf("moon_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindowMoon.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelTwoWindowMoon.tex)
    {
        printf("mountains_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoWindowMoon.rect;
    SDL_QueryTexture(levelTwoWindowMoon.tex, NULL, NULL, &levelTwoWindowMoon.rect.w, &levelTwoWindowMoon.rect.h);
    levelTwoWindowMoon.rect.w = (int)110;
    levelTwoWindowMoon.rect.h = (int)110;
    levelTwoWindowMoon.rect.x = WINDOW_WIDTH / 2;
    levelTwoWindowMoon.rect.y = 150;

    //mountains

    window.surface = IMG_Load("images/leveltwo/new/mountains.png");

    if (!window.surface)
    {
        printf("mountains_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindowMountains.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelTwoWindowMountains.tex)
    {
        printf("mountains_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoWindowMountains.rect;
    SDL_QueryTexture(levelTwoWindowMountains.tex, NULL, NULL, &levelTwoWindowMountains.rect.w, &levelTwoWindowMountains.rect.h);
    levelTwoWindowMountains.rect.w = (int)WINDOW_WIDTH;
    levelTwoWindowMountains.rect.h = (int)650;
    levelTwoWindowMountains.rect.x = (int)0;
    levelTwoWindowMountains.rect.y = (int)220;

    // treeshade
    window.surface = IMG_Load("images/leveltwo/new/tree.png");

    if (!window.surface)
    {
        printf("treeshade_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindowTreeShade.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelTwoWindowTreeShade.tex)
    {
        printf("treeshade_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoWindowTreeShade.rect;
    SDL_QueryTexture(levelTwoWindowTreeShade.tex, NULL, NULL, &levelTwoWindowTreeShade.rect.w, &levelTwoWindowTreeShade.rect.h);
    levelTwoWindowTreeShade.rect.w = (int)WINDOW_WIDTH;
    levelTwoWindowTreeShade.rect.h = (int)380;
    levelTwoWindowTreeShade.rect.x = (int)0;
    levelTwoWindowTreeShade.rect.y = (int)385;

    //clouds
    window.surface = IMG_Load("images/leveltwo/new/cloudsfinal.png");

    if (!window.surface)
    {
        printf("clouds_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindowClouds.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelTwoWindowClouds.tex)
    {
        printf("clouds Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoWindowClouds.rect;
    SDL_QueryTexture(levelTwoWindowClouds.tex, NULL, NULL, &levelTwoWindowClouds.rect.w, &levelTwoWindowClouds.rect.h);
    levelTwoWindowClouds.rect.w = (int)WINDOW_WIDTH - 200;
    levelTwoWindowClouds.rect.h = (int)226;
    levelTwoWindowClouds.rect.x = (int)0;
    levelTwoWindowClouds.rect.y = 50;

    //track
    window.surface = IMG_Load("images/leveltwo/new/newnightTrack.png");

    if (!window.surface)
    {
        printf("track_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindowTrack.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelTwoWindowTrack.tex)
    {
        printf("track Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoWindowTrack.rect;
    SDL_QueryTexture(levelTwoWindowTrack.tex, NULL, NULL, &levelTwoWindowTrack.rect.w, &levelTwoWindowTrack.rect.h);
    levelTwoWindowTrack.rect.w = (int)WINDOW_WIDTH;
    levelTwoWindowTrack.rect.h = (int)200;
    levelTwoWindowTrack.rect.x = (int)0;
    levelTwoWindowTrack.rect.y = (int)760;

    levelTwoWindowCharacter.surface = IMG_Load("images/level2obstacles/sonicsprite.png");

    if (!levelTwoWindowCharacter.surface)
    {
        printf("character_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindowCharacter.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindowCharacter.surface);

    if (!levelTwoWindowCharacter.tex)
    {
        printf("character Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindowCharacter.rect;
    levelTwoWindowCharacterPosition.rect;

    float FRAME_TIME = 0;
    int PREV_TIME = 0;
    float DELTA_TIME = 0;

    SDL_QueryTexture(levelTwoWindowCharacter.tex, NULL, NULL, &levelTwoCharacterTextureHeight, &levelTwoCharacterTextureWidth);

    levelTwoCharacterFrameWidth = levelTwoCharacterTextureWidth / 2;
    levelTwoCharacterFrameHeight = levelTwoCharacterTextureHeight / 2;
    levelTwoWindowCharacter.rect.w = levelTwoCharacterFrameWidth;
    levelTwoWindowCharacter.rect.h = levelTwoCharacterFrameHeight;
    levelTwoWindowCharacter.rect.x = 0;
    levelTwoWindowCharacter.rect.y = 0;
    levelTwoWindowCharacterPosition.rect.w = levelTwoCharacterFrameWidth;
    levelTwoWindowCharacterPosition.rect.h = levelTwoCharacterFrameHeight;
    levelTwoWindowCharacterPosition.rect.x = 30;
    levelTwoWindowCharacterPosition.rect.y = 720;
    float CHARACTER2_X_POS = (float)100;
    float CHARACTER2_Y_POS = (float)700;

    LevelTwoTracksLoad();
    LevelTwoCoinsload();
    BombandDragonLoad();
    LevelTwoLifeLoad();
    updateLevelTwoScore();
}

void levelTwoWindowCleanUp()
{
    SDL_DestroyTexture(levelTwoWindowSky.tex);
    SDL_DestroyTexture(levelTwoWindowMoon.tex);
    SDL_DestroyTexture(levelTwoWindowMountains.tex);
    SDL_DestroyTexture(levelTwoWindowTreeShade.tex);
    SDL_DestroyTexture(levelTwoWindowClouds.tex);
    SDL_DestroyTexture(levelTwoWindowTrack.tex);
    SDL_FreeSurface(levelTwoWindowCharacter.surface);
    SDL_DestroyTexture(levelTwoWindowCharacter.tex);
    LevelTwoTracksCleanUp();
    LevelTwoCoinsCleanUp();
    BombandDragonCleanUp();
    LevelTwoCoinsPopCleanUp();
    IMG_Quit();
}
