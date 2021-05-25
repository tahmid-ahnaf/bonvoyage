#include "initiateLevelTwoBombandDragon.h"
void BombandDragonLoad()
{

    window.surface = IMG_Load("images/level2obstacles/dragonerr.png");

    if (!window.surface)
    {
        printf("BOMB Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoBomb.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!levelTwoBomb.tex)
    {
        printf("BOMB TEXTURE ERROR %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoBomb.rect;
    SDL_QueryTexture(levelTwoBomb.tex, NULL, NULL, &levelTwoBomb.rect.w, &levelTwoBomb.rect.h);

    levelTwoBomb.rect.w = (int)100;
    levelTwoBomb.rect.h = (int)100;
    levelTwoBomb.rect.x = (int)-150;
    levelTwoBomb.rect.y = (int)WINDOW_HEIGHT + 10;

    /********************************************************** CREATING BOMBS ENDS  **************************************************************/

    /****************************************************** CREATING Dragon STARTS  ***********************************************************/
    //dragon
    window.surface = IMG_Load("images/level2obstacles/dragon_sprite.png");

    if (!window.surface)
    {
        printf("character_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoDragon.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelTwoDragon.tex)
    {
        printf("Tiger Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(levelTwoDragon.tex, NULL, NULL, &levelTwoDragonTexturewidth, &levelTwoDragonTextureheight);
    levelTwoDragonFramewidth = levelTwoDragonTexturewidth / 6 + 1;
    //for red sprite                                        //for green sprite
    levelTwoDragonFrameheight = levelTwoDragonTextureheight / 2;
    levelTwoDragon.rect.w = levelTwoDragonFramewidth;
    levelTwoDragon.rect.h = levelTwoDragonFrameheight;
    levelTwoDragon.rect.x = 0;
    levelTwoDragon.rect.y = 0;
    levelTwoDragonPosition.rect.w = levelTwoDragonFramewidth;
    levelTwoDragonPosition.rect.h = levelTwoDragonFrameheight;
    levelTwoDragonPosition.rect.x = WINDOW_WIDTH + 10;
    levelTwoDragonPosition.rect.y = 30;
    //explosion

    window.surface = IMG_Load("images/level2obstacles/explosion.png");

    if (!window.surface)
    {
        printf("EXPLOSION ERROR: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoExplosion.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!levelTwoExplosion.tex)
    {
        printf("Explosion Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoExplosion.rect;
    SDL_QueryTexture(levelTwoExplosion.tex, NULL, NULL, &levelTwoExplosion.rect.w, &levelTwoExplosion.rect.h);

    levelTwoExplosion.rect.w = (int)0;
    levelTwoExplosion.rect.h = (int)0;
    levelTwoExplosion.rect.x = (int)WINDOW_WIDTH - 150;
    levelTwoExplosion.rect.y = (int)levelTwoDragonPosition.rect.y;
}
void BombandDragonCleanUp()
{
    SDL_DestroyTexture(levelTwoDragon.tex);
    SDL_DestroyTexture(levelTwoBomb.tex);
    SDL_DestroyTexture(levelTwoExplosion.tex);
    IMG_Quit();
}
