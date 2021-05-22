#include "initiateLevelTwoBombandPlane.h"
void BombandPlaneLoad()
{
    
    window.surface = IMG_Load("images/level2obstacles/bomb.png");

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

    /****************************************************** CREATING PLANE STARTS  ***********************************************************/
    window.surface = IMG_Load("images/level2obstacles/plane.png");

    if (!window.surface)
    {
        printf("PLANE ERROR: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoPlane.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!levelTwoPlane.tex)
    {
        printf("PLANE Texture ERROR %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoPlane.rect;
    SDL_QueryTexture(levelTwoPlane.tex, NULL, NULL, &levelTwoPlane.rect.w, &levelTwoPlane.rect.h);

    levelTwoPlane.rect.w = (int)1322 / 6;
    levelTwoPlane.rect.h = (int)613 / 6;
    levelTwoPlane.rect.x = (int)WINDOW_WIDTH - 150;
    levelTwoPlane.rect.y = (int)30;


    window.surface = IMG_Load("images/level2obstacles/explosion.png");

    if (!window.surface)
    {
        printf("EXPLOSION ERROR: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoExplosion.tex= SDL_CreateTextureFromSurface(app.rend, window.surface);
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
    levelTwoExplosion.rect.y = (int)30;

}
    void BombandPlaneCleanUp()
    {
        SDL_DestroyTexture(levelTwoPlane.tex);
        SDL_DestroyTexture(levelTwoBomb.tex);
        SDL_DestroyTexture(levelTwoExplosion.tex);
        IMG_Quit();
    }



