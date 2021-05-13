#include "initiatebox.h"

void invisibleborderload()
{
    levelTwoWindow.invisibleborder.surface = IMG_Load("images/level2obstacles/border.png");

    if (!levelTwoWindow.invisibleborder.surface)
    {
        printf("BORDER Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindow.invisibleborder.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.invisibleborder.surface);

    if (!levelTwoWindow.invisibleborder.tex)
    {
        printf("levelTwoWindow.invisibleborder.tex %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindow.invisibleborder.rect;
    SDL_QueryTexture(levelTwoWindow.invisibleborder.tex, NULL, NULL, & levelTwoWindow.invisibleborder.rect.w, & levelTwoWindow.invisibleborder.rect.h);
    levelTwoWindow.invisibleborder.rect.w = (int)260;
    levelTwoWindow.invisibleborder.rect.h = (int)20;
    levelTwoWindow.invisibleborder.rect.x = (int)WINDOW_WIDTH / 2;
    levelTwoWindow.invisibleborder.rect.y = (int)WINDOW_HEIGHT / 2 - 100 + 30;

}

void InvisibleBorderCleanUp()
{
     
 
    SDL_FreeSurface(levelTwoWindow.invisibleborder.surface);
    SDL_DestroyTexture(levelTwoWindow.invisibleborder.tex);
    IMG_Quit();
}

void boxload(void)
{
    levelTwoWindow.box.surface = IMG_Load("images/level2obstacles/boxh2.png");

    if (!levelTwoWindow.box.surface)
    {
        printf("BOX Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindow.box.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.box.surface);

    if (!levelTwoWindow.box.tex)
    {
        printf("BOX TEXTURE ERROR%s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoWindow.box.rect;
    SDL_QueryTexture(levelTwoWindow.box.tex, NULL, NULL, &levelTwoWindow.box.rect.w, &levelTwoWindow.box.rect.h);
    
    levelTwoWindow.box.rect.w = (int)300;
    levelTwoWindow.box.rect.h = (int)50;
    levelTwoWindow.box.rect.x = (int)WINDOW_WIDTH / 2;
    levelTwoWindow.box.rect.y = (int)WINDOW_HEIGHT / 2 - 100;
    invisibleborderload();
}


void BoxCleanUp()
{
     
 
    SDL_FreeSurface(levelTwoWindow.box.surface);
    SDL_DestroyTexture(levelTwoWindow.box.tex);
    InvisibleBorderCleanUp();
    IMG_Quit();
}




