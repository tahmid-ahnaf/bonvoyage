#include "initiatebombandplane.h"
void bombandplaneload()
{
    
    levelTwoWindow.bomb.surface = IMG_Load("images/level2obstacles/bomb.png");

    if (! levelTwoWindow.bomb.surface)
    {
        printf("BOMB Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindow.bomb.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.bomb.surface);

    if (!levelTwoWindow.bomb.tex)
    {
        printf("BOMB TEXTURE ERROR %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoWindow.bomb.rect;
    SDL_QueryTexture(levelTwoWindow.bomb.tex, NULL, NULL, &levelTwoWindow.bomb.rect.w, &levelTwoWindow.bomb.rect.h);
  
    levelTwoWindow.bomb.rect.w = (int)100;
    levelTwoWindow.bomb.rect.h = (int)100;
    levelTwoWindow.bomb.rect.x = (int)-150;
    levelTwoWindow.bomb.rect.y = (int)WINDOW_HEIGHT + 10;

    /********************************************************** CREATING BOMBS ENDS  **************************************************************/

    /****************************************************** CREATING PLANE STARTS  ***********************************************************/
    levelTwoWindow.plane.surface = IMG_Load("images/level2obstacles/plane.png");

    if (!levelTwoWindow.plane.surface)
    {
        printf("PLANE ERROR: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindow.plane.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.plane.surface);

    if (!levelTwoWindow.plane.tex)
    {
        printf("PLANE Texture ERROR %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoWindow.plane.rect;
    SDL_QueryTexture(levelTwoWindow.plane.tex, NULL, NULL, &levelTwoWindow.plane.rect.w, &levelTwoWindow.plane.rect.h);

    levelTwoWindow.plane.rect.w = (int)1322 / 6;
    levelTwoWindow.plane.rect.h = (int)613 / 6;
    levelTwoWindow.plane.rect.x = (int)WINDOW_WIDTH - 150;
    levelTwoWindow.plane.rect.y = (int)30;


    levelTwoWindow.explosion.surface = IMG_Load("images/level2obstacles/explosion.png");

    if (!levelTwoWindow.explosion.surface)
    {
        printf("EXPLOSION ERROR: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindow.explosion.tex= SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.explosion.surface);

    if (!levelTwoWindow.explosion.tex)
    {
        printf("Explosion Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoWindow.explosion.rect;
    SDL_QueryTexture(levelTwoWindow.explosion.tex, NULL, NULL, &levelTwoWindow.explosion.rect.w, &levelTwoWindow.explosion.rect.h);

    levelTwoWindow.explosion.rect.w = (int)0;
    levelTwoWindow.explosion.rect.h = (int)0;
    levelTwoWindow.explosion.rect.x = (int)WINDOW_WIDTH - 150;
    levelTwoWindow.explosion.rect.y = (int)30;

}
    void BombandPlaneCleanUp()
    {
      SDL_FreeSurface(levelTwoWindow.bomb.surface);
      SDL_DestroyTexture(levelTwoWindow.plane.tex);
      SDL_FreeSurface(levelTwoWindow.plane.surface);
      SDL_DestroyTexture(levelTwoWindow.bomb.tex);

      IMG_Quit();
    }



