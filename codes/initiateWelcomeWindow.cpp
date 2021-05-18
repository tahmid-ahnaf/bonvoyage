#include "initiateWelcomeWindow.h"

void welcomewindow(void)
{
    window.surface = IMG_Load("./images/frontbackground/sky.png"); // LOADING THE IMAGE TO CREATED SURFACE FOR BACKGROUND ! WILL CONTINUE THIS PROCESS FOR ALL FUTURE SURFACES
    if (!window.surface)
    {
        printf("Welcome window sky Surface Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    welcomeWindowSky.tex = SDL_CreateTextureFromSurface(app.rend, window.surface); //  LOADING CREATED TEXTURE TO PREVIOUSLY CREATED SURFACE ! WILL CONTINUE THIS PROCESS FOR ALL FUTURE TEXTURES
    SDL_FreeSurface(window.surface);

    if (!welcomeWindowSky.tex)
    {
        printf("Welcome window sky Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(welcomeWindowSky.tex, NULL, NULL, &welcomeWindowSky.rect.w, &welcomeWindowSky.rect.h);
    welcomeWindowSky.rect.w = (int)WINDOW_WIDTH;
    welcomeWindowSky.rect.h = (int)WINDOW_HEIGHT;
    welcomeWindowSky.rect.x = 0;
    welcomeWindowSky.rect.y = 0;

    // welcome screen birds

    window.surface = IMG_Load("./images/frontbackground/birds.png"); // LOADING THE IMAGE TO CREATED SURFACE FOR BACKGROUND ! WILL CONTINUE THIS PROCESS FOR ALL FUTURE SURFACES
    if (!window.surface)
    {
        printf("Welcome window sky Surface Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    welcomeWindowBirds.tex = SDL_CreateTextureFromSurface(app.rend, window.surface); //  LOADING CREATED TEXTURE TO PREVIOUSLY CREATED SURFACE ! WILL CONTINUE THIS PROCESS FOR ALL FUTURE TEXTURES
    SDL_FreeSurface(window.surface);

    if (!welcomeWindowBirds.tex)
    {
        printf("Welcome window sky Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(welcomeWindowBirds.tex, NULL, NULL, &welcomeWindowBirds.rect.w, &welcomeWindowBirds.rect.h);
    welcomeWindowBirds.rect.w = (int)WINDOW_WIDTH;
    welcomeWindowBirds.rect.h = (int)100;
    welcomeWindowBirds.rect.x = 0;
    welcomeWindowBirds.rect.y = 100;

    //welcome screen mountains
    window.surface = IMG_Load("./images/frontbackground/mountains.png"); // LOADING THE IMAGE TO CREATED SURFACE FOR BACKGROUND ! WILL CONTINUE THIS PROCESS FOR ALL FUTURE SURFACES
    if (!window.surface)
    {
        printf("Welcome window sky Surface Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    welcomeWindowMountains.tex = SDL_CreateTextureFromSurface(app.rend, window.surface); //  LOADING CREATED TEXTURE TO PREVIOUSLY CREATED SURFACE ! WILL CONTINUE THIS PROCESS FOR ALL FUTURE TEXTURES
    SDL_FreeSurface(window.surface);

    if (!welcomeWindowMountains.tex)
    {
        printf("Welcome window sky Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(welcomeWindowMountains.tex, NULL, NULL, &welcomeWindowMountains.rect.w, &welcomeWindowMountains.rect.h);
    welcomeWindowMountains.rect.w = (int)WINDOW_WIDTH;
    welcomeWindowMountains.rect.h = (int)800;
    welcomeWindowMountains.rect.x = 0;
    welcomeWindowMountains.rect.y = 200;

    //welcome screen trees
    window.surface = IMG_Load("./images/frontbackground/frontwindowtrees.png"); // LOADING THE IMAGE TO CREATED SURFACE FOR BACKGROUND ! WILL CONTINUE THIS PROCESS FOR ALL FUTURE SURFACES
    if (!window.surface)
    {
        printf("Welcome window sky Surface Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    welcomeWindowTrees.tex = SDL_CreateTextureFromSurface(app.rend, window.surface); //  LOADING CREATED TEXTURE TO PREVIOUSLY CREATED SURFACE ! WILL CONTINUE THIS PROCESS FOR ALL FUTURE TEXTURES
    SDL_FreeSurface(window.surface);

    if (!welcomeWindowTrees.tex)
    {
        printf("Welcome window sky Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(welcomeWindowTrees.tex, NULL, NULL, &welcomeWindowTrees.rect.w, &welcomeWindowTrees.rect.h);
    welcomeWindowTrees.rect.w = (int)WINDOW_WIDTH + 50;
    welcomeWindowTrees.rect.h = (int)WINDOW_HEIGHT;
    welcomeWindowTrees.rect.x = 0;
    welcomeWindowTrees.rect.y = 0;

    //buttons

    //title
    window.surface = IMG_Load("images/title.png");

    if (!window.surface)
    {
        printf("game_title Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    welcomeWindowGameTitle.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!welcomeWindowGameTitle.tex)
    {
        printf("game_title  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    SDL_QueryTexture(welcomeWindowGameTitle.tex, NULL, NULL, &welcomeWindowGameTitle.rect.w, &welcomeWindowGameTitle.rect.h);
    /* adjusting the poster for wide screen */
    welcomeWindowGameTitle.rect.w = (int)800;
    welcomeWindowGameTitle.rect.h = (int)150;
    welcomeWindowGameTitle.rect.x = (int)WINDOW_WIDTH / 2 - 400;
    welcomeWindowGameTitle.rect.y = (int)WINDOW_HEIGHT / 2 - 440;

    //newgame
    window.surface = IMG_Load("images/buttons/playButton.png");

    if (!window.surface)
    {
        printf("NEWGAME_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    welcomeWindowNewgameButton.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!welcomeWindowNewgameButton.tex)
    {
        printf("NEWGAME_BUTTON  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    welcomeWindowNewgameButton.rect;
    SDL_QueryTexture(welcomeWindowNewgameButton.tex, NULL, NULL, &welcomeWindowNewgameButton.rect.w, &welcomeWindowNewgameButton.rect.h);
    welcomeWindowNewgameButton.rect.w = (int)267;
    welcomeWindowNewgameButton.rect.h = (int)53;
    welcomeWindowNewgameButton.rect.x = (int)WINDOW_WIDTH / 2 + 200;
    welcomeWindowNewgameButton.rect.y = (int)WINDOW_HEIGHT / 2 - 170;

    //controls
    window.surface = IMG_Load("images/buttons/legendsButton.png");

    if (!window.surface)
    {
        printf("controls_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    welcomeWindowControlsButton.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!welcomeWindowControlsButton.tex)
    {
        printf("controls_BUTTON  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    welcomeWindowControlsButton.rect;
    SDL_QueryTexture(welcomeWindowControlsButton.tex, NULL, NULL, &welcomeWindowControlsButton.rect.w, &welcomeWindowControlsButton.rect.h);
    welcomeWindowControlsButton.rect.w = (int)267;
    welcomeWindowControlsButton.rect.h = (int)54;
    welcomeWindowControlsButton.rect.x = (int)WINDOW_WIDTH / 2 + 200;
    welcomeWindowControlsButton.rect.y = (int)WINDOW_HEIGHT / 2 - 90;

    //details
    window.surface = IMG_Load("images/buttons/controlsButtonn.png");

    if (!window.surface)
    {
        printf("details_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    welcomeWindowDetailsButton.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!welcomeWindowDetailsButton.tex)
    {
        printf("details_BUTTON  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    welcomeWindowDetailsButton.rect;
    SDL_QueryTexture(welcomeWindowDetailsButton.tex, NULL, NULL, &welcomeWindowDetailsButton.rect.w, &welcomeWindowDetailsButton.rect.h);
    welcomeWindowDetailsButton.rect.w = (int)267;
    welcomeWindowDetailsButton.rect.h = (int)53;
    welcomeWindowDetailsButton.rect.x = (int)WINDOW_WIDTH / 2 + 200;
    welcomeWindowDetailsButton.rect.y = (int)WINDOW_HEIGHT / 2 - 10;

    //exit
    window.surface = IMG_Load("images/buttons/exitButton.png");

    if (!window.surface)
    {
        printf("details_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    welcomeWindowExitButton.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!welcomeWindowExitButton.tex)
    {
        printf("Exit_BUTTON  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    welcomeWindowExitButton.rect;
    SDL_QueryTexture(welcomeWindowExitButton.tex, NULL, NULL, &welcomeWindowExitButton.rect.w, &welcomeWindowExitButton.rect.h);
    welcomeWindowExitButton.rect.w = (int)267;
    welcomeWindowExitButton.rect.h = (int)53;
    welcomeWindowExitButton.rect.x = (int)WINDOW_WIDTH / 2 + 200;
    welcomeWindowExitButton.rect.y = (int)WINDOW_HEIGHT / 2 + 70;
}

void welcomeWindowCleanUp()
{
    // SDL_FreeSurface(welcome_window.sky.surface);
    SDL_DestroyTexture(welcomeWindowSky.tex);
    // SDL_FreeSurface(welcome_window.birds.surface);
    SDL_DestroyTexture(welcomeWindowBirds.tex);
    // SDL_FreeSurface(welcome_window.mountains.surface);
    SDL_DestroyTexture(welcomeWindowMountains.tex);
    // SDL_FreeSurface(welcome_window.trees.surface);
    SDL_DestroyTexture(welcomeWindowTrees.tex);
    // SDL_FreeSurface(welcome_window.game_title.surface);
    SDL_DestroyTexture(welcomeWindowGameTitle.tex);
    // SDL_FreeSurface(welcome_window.newgame.surface);
    SDL_DestroyTexture(welcomeWindowNewgameButton.tex);

    // SDL_FreeSurface(welcomeWindowDetailsButton.surface);
    SDL_DestroyTexture(welcomeWindowDetailsButton.tex);
    // SDL_FreeSurface(welcome_window.controls.surface);
    SDL_DestroyTexture(welcomeWindowControlsButton.tex);
    SDL_DestroyTexture(enterButton.tex);
    SDL_DestroyTexture(enterName.tex);
}