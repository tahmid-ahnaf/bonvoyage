#include "initiateWelcomeWindow.h"

void welcomewindow(void)
{
    welcome_window.sky.surface = IMG_Load("./images/frontbackground/sky.png"); // LOADING THE IMAGE TO CREATED SURFACE FOR BACKGROUND ! WILL CONTINUE THIS PROCESS FOR ALL FUTURE SURFACES
    if (!welcome_window.sky.surface)
    {
        printf("Welcome window sky Surface Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    welcome_window.sky.tex = SDL_CreateTextureFromSurface(app.rend, welcome_window.sky.surface); //  LOADING CREATED TEXTURE TO PREVIOUSLY CREATED SURFACE ! WILL CONTINUE THIS PROCESS FOR ALL FUTURE TEXTURES
    if (!welcome_window.sky.tex)
    {
        printf("Welcome window sky Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(welcome_window.sky.tex, NULL, NULL, &welcome_window.sky.rect.w, &welcome_window.sky.rect.h);
    welcome_window.sky.rect.w = (int)WINDOW_WIDTH;
    welcome_window.sky.rect.h = (int)WINDOW_HEIGHT;
    welcome_window.sky.rect.x = 0;
    welcome_window.sky.rect.y = 0;

    // welcome screen birds

    welcome_window.birds.surface = IMG_Load("./images/frontbackground/birds.png"); // LOADING THE IMAGE TO CREATED SURFACE FOR BACKGROUND ! WILL CONTINUE THIS PROCESS FOR ALL FUTURE SURFACES
    if (!welcome_window.birds.surface)
    {
        printf("Welcome window sky Surface Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    welcome_window.birds.tex = SDL_CreateTextureFromSurface(app.rend, welcome_window.birds.surface); //  LOADING CREATED TEXTURE TO PREVIOUSLY CREATED SURFACE ! WILL CONTINUE THIS PROCESS FOR ALL FUTURE TEXTURES
    if (!welcome_window.birds.tex)
    {
        printf("Welcome window sky Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(welcome_window.birds.tex, NULL, NULL, &welcome_window.birds.rect.w, &welcome_window.birds.rect.h);
    welcome_window.birds.rect.w = (int)WINDOW_WIDTH;
    welcome_window.birds.rect.h = (int)100;
    welcome_window.birds.rect.x = 0;
    welcome_window.birds.rect.y = 100;

    //welcome screen mountains
    welcome_window.mountains.surface = IMG_Load("./images/frontbackground/mountains.png"); // LOADING THE IMAGE TO CREATED SURFACE FOR BACKGROUND ! WILL CONTINUE THIS PROCESS FOR ALL FUTURE SURFACES
    if (!welcome_window.mountains.surface)
    {
        printf("Welcome window sky Surface Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    welcome_window.mountains.tex = SDL_CreateTextureFromSurface(app.rend, welcome_window.mountains.surface); //  LOADING CREATED TEXTURE TO PREVIOUSLY CREATED SURFACE ! WILL CONTINUE THIS PROCESS FOR ALL FUTURE TEXTURES
    if (!welcome_window.mountains.tex)
    {
        printf("Welcome window sky Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(welcome_window.mountains.tex, NULL, NULL, &welcome_window.mountains.rect.w, &welcome_window.mountains.rect.h);
    welcome_window.mountains.rect.w = (int)WINDOW_WIDTH;
    welcome_window.mountains.rect.h = (int)800;
    welcome_window.mountains.rect.x = 0;
    welcome_window.mountains.rect.y = 200;

    //welcome screen trees
    welcome_window.trees.surface = IMG_Load("./images/frontbackground/treeandgrass.png"); // LOADING THE IMAGE TO CREATED SURFACE FOR BACKGROUND ! WILL CONTINUE THIS PROCESS FOR ALL FUTURE SURFACES
    if (!welcome_window.trees.surface)
    {
        printf("Welcome window sky Surface Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    welcome_window.trees.tex = SDL_CreateTextureFromSurface(app.rend, welcome_window.trees.surface); //  LOADING CREATED TEXTURE TO PREVIOUSLY CREATED SURFACE ! WILL CONTINUE THIS PROCESS FOR ALL FUTURE TEXTURES
    if (!welcome_window.trees.tex)
    {
        printf("Welcome window sky Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(welcome_window.trees.tex, NULL, NULL, &welcome_window.trees.rect.w, &welcome_window.trees.rect.h);
    welcome_window.trees.rect.w = (int)WINDOW_WIDTH + 50;
    welcome_window.trees.rect.h = (int)WINDOW_HEIGHT;
    welcome_window.trees.rect.x = 0;
    welcome_window.trees.rect.y = 0;

    //buttons

    //title
    welcome_window.game_title.surface = IMG_Load("images/title.png");

    if (!welcome_window.game_title.surface)
    {
        printf("game_title Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    welcome_window.game_title.tex = SDL_CreateTextureFromSurface(app.rend, welcome_window.game_title.surface);

    if (!welcome_window.game_title.tex)
    {
        printf("game_title  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    SDL_QueryTexture(welcome_window.game_title.tex, NULL, NULL, &welcome_window.game_title.rect.w, &welcome_window.game_title.rect.h);
    /* adjusting the poster for wide screen */
    welcome_window.game_title.rect.w = (int)1000;
    welcome_window.game_title.rect.h = (int)200;
    welcome_window.game_title.rect.x = (int)WINDOW_WIDTH / 2 - 500;
    welcome_window.game_title.rect.y = (int)WINDOW_HEIGHT / 2 - 470;

    //newgame
    welcome_window.newgame.surface = IMG_Load("images/newgame.png");

    if (!welcome_window.newgame.surface)
    {
        printf("NEWGAME_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    welcome_window.newgame.tex = SDL_CreateTextureFromSurface(app.rend, welcome_window.newgame.surface);

    if (!welcome_window.newgame.tex)
    {
        printf("NEWGAME_BUTTON  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    welcome_window.newgame.rect;
    SDL_QueryTexture(welcome_window.newgame.tex, NULL, NULL, &welcome_window.newgame.rect.w, &welcome_window.newgame.rect.h);
    welcome_window.newgame.rect.w = (int)400;
    welcome_window.newgame.rect.h = (int)100;
    welcome_window.newgame.rect.x = (int)WINDOW_WIDTH / 2 + 100;
    welcome_window.newgame.rect.y = (int)WINDOW_HEIGHT / 2 - 170;

    //controls
    welcome_window.controls.surface = IMG_Load("images/controls.png");

    if (!welcome_window.controls.surface)
    {
        printf("controls_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    welcome_window.controls.tex = SDL_CreateTextureFromSurface(app.rend, welcome_window.controls.surface);

    if (!welcome_window.controls.tex)
    {
        printf("controls_BUTTON  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    welcome_window.controls.rect;
    SDL_QueryTexture(welcome_window.controls.tex, NULL, NULL, &welcome_window.controls.rect.w, &welcome_window.controls.rect.h);
    welcome_window.controls.rect.w = (int)400;
    welcome_window.controls.rect.h = (int)100;
    welcome_window.controls.rect.x = (int)WINDOW_WIDTH / 2 + 100;
    welcome_window.controls.rect.y = (int)WINDOW_HEIGHT / 2 - 50;

    //details
    welcome_window.details.surface = IMG_Load("images/details.png");

    if (!welcome_window.details.surface)
    {
        printf("details_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    welcome_window.details.tex = SDL_CreateTextureFromSurface(app.rend, welcome_window.details.surface);

    if (!welcome_window.details.tex)
    {
        printf("details_BUTTON  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    welcome_window.details.rect;
    SDL_QueryTexture(welcome_window.details.tex, NULL, NULL, &welcome_window.details.rect.w, &welcome_window.details.rect.h);
    welcome_window.details.rect.w = (int)400;
    welcome_window.details.rect.h = (int)100;
    welcome_window.details.rect.x = (int)WINDOW_WIDTH / 2 + 100;
    welcome_window.details.rect.y = (int)WINDOW_HEIGHT / 2 + 70;
}

void welcomeWindowCleanUp()
{
    SDL_FreeSurface(welcome_window.sky.surface);
    SDL_DestroyTexture(welcome_window.sky.tex);
    SDL_FreeSurface(welcome_window.birds.surface);
    SDL_DestroyTexture(welcome_window.birds.tex);
    SDL_FreeSurface(welcome_window.mountains.surface);
    SDL_DestroyTexture(welcome_window.mountains.tex);
    SDL_FreeSurface(welcome_window.trees.surface);
    SDL_DestroyTexture(welcome_window.trees.tex);
    SDL_FreeSurface(welcome_window.game_title.surface);
    SDL_DestroyTexture(welcome_window.game_title.tex);
    SDL_FreeSurface(welcome_window.newgame.surface);
    SDL_DestroyTexture(welcome_window.newgame.tex);

    SDL_FreeSurface(welcome_window.details.surface);
    SDL_DestroyTexture(welcome_window.details.tex);
    SDL_FreeSurface(welcome_window.controls.surface);
    SDL_DestroyTexture(welcome_window.controls.tex);
}