#include "initiateLevelTwoTracks.h"

void InvisibleBorderLoad()
{   
    for(int i=0; i<2; i++)
    {
        window.surface = IMG_Load("images/level2obstacles/border.png");

    if (!window.surface)
    {
        printf("BORDER Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoInvisibleBorder[i].tex = SDL_CreateTextureFromSurface(app.rend, window.surface);

    SDL_FreeSurface(window.surface);

    if (!levelTwoInvisibleBorder[i].tex)
    {
        printf("levelTwoInvisibleBorder[i].tex %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoInvisibleBorder[i].rect;
    SDL_QueryTexture(levelTwoInvisibleBorder[i].tex, NULL, NULL, &levelTwoInvisibleBorder[i].rect.w, &levelTwoInvisibleBorder[i].rect.h);
    levelTwoInvisibleBorder[i].rect.w = (int)594;
    levelTwoInvisibleBorder[i].rect.h = (int)75;
    levelTwoInvisibleBorder[i].rect.x = (int)WINDOW_WIDTH / 2;
    levelTwoInvisibleBorder[i].rect.y = (int)WINDOW_HEIGHT / 2 - 100 + 30;

    }
    
}

void InvisibleBorderCleanUp()
{
    for(int i=0; i<2; i++)
    {
       SDL_DestroyTexture(levelTwoInvisibleBorder[i].tex);
    }

    IMG_Quit();
}

void LevelTwoTracksLoad(void)
{
    for(int i=0; i<2; i++)
    {
        window.surface = IMG_Load("images/leveltwo/new/uppertrack.png");

    if (!window.surface)
    {
        printf("Track Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoTrack[i].tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!levelTwoTrack[i].tex)
    {
        printf("Track TEXTURE ERROR%s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoTrack[i].rect;
    SDL_QueryTexture(levelTwoTrack[i].tex, NULL, NULL, &levelTwoTrack[i].rect.w, &levelTwoTrack[i].rect.h);

    levelTwoTrack[i].rect.w = (int)634;
    levelTwoTrack[i].rect.h = (int)105;
    levelTwoTrack[i].rect.x = (int)WINDOW_WIDTH / 2;
    levelTwoTrack[i].rect.y = (int)WINDOW_HEIGHT / 2 - 100;


    }
    
    InvisibleBorderLoad();
}

void LevelTwoTracksCleanUp()
{   
    for(int i=0; i<2; i++)
    {
        SDL_DestroyTexture(levelTwoTrack[i].tex);
    }
   
    InvisibleBorderCleanUp();
    IMG_Quit();
}
