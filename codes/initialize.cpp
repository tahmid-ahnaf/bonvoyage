#include "initialize.h"

 

void initSDL(void)
{

    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_AUDIO) == 0)
    {
        printf("video and timer: %s\n", SDL_GetError());
    }
    if (TTF_Init() < 0)
    {
        printf("Text: Can't laod %s\n", SDL_GetError());
    }
    if (!(IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG)))
        printf("image: %s\n", SDL_GetError());

    app.window = SDL_CreateWindow("Bon Voyage", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH, WINDOW_HEIGHT, 0);

    if (!app.window)
    {
        printf("window: %s\n", SDL_GetError());
        SDL_Quit();
        exit(1);
    }

    Uint32 render_flags = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC;
    app.rend = SDL_CreateRenderer(app.window, -1, render_flags);

    if (!app.rend)
    {
        printf("renderer: %s\n", SDL_GetError());
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    
   
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
    variables.levelTwoVars.background = Mix_LoadMUS("audio/Delusion.mp3");
    variables.levelTwoVars.coingain = Mix_LoadMUS("audio/coingain.mp3");
    variables.levelTwoVars.explosionsound = Mix_LoadMUS("audio/explosionsound.mp3");
    variables.levelTwoVars.jumpsound = Mix_LoadMUS("audio/jump.mp3");
    variables.levelTwoVars.pointgainsound = Mix_LoadMUS("audio/pointgain.mp3");



    //Welcome screen sky

    variables.levelOneVars.font = TTF_OpenFont("Freshman.ttf", 30); //OPENING FONT FROM LOCAL STORAGE
                                                                    // SDL_Color color = {244, 189, 2};
    variables.levelOneVars.color = {25, 25, 112};

    welcomewindow();

    newgamewindow();

    levelonewindow();

    leveltwowindow();

    //back
    welcome_window.back.surface = IMG_Load("images/back.png");

    if (!welcome_window.back.surface)
    {
        printf("back_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    welcome_window.back.tex = SDL_CreateTextureFromSurface(app.rend, welcome_window.back.surface);

    if (!welcome_window.back.tex)
    {
        printf("back_BUTTON  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    welcome_window.back.rect;
    SDL_QueryTexture(welcome_window.back.tex, NULL, NULL, &welcome_window.back.rect.w, &welcome_window.back.rect.h);
    welcome_window.back.rect.w = (int)160;
    welcome_window.back.rect.h = (int)70;
    welcome_window.back.rect.x = (int)30;
    welcome_window.back.rect.y = (int)840;

}

void cleanup(void)
{

    welcomeWindowCleanUp();
    newGameWindowCleanUp();
    levelTwoWindowCleanUp();
    levelOneWindowCleanUp();
    SDL_DestroyRenderer(app.rend);

    SDL_DestroyWindow(app.window);
    TTF_CloseFont(variables.levelOneVars.font);
    TTF_CloseFont(variables.levelTwoVars.font);
    TTF_Quit();
    IMG_Quit();
    SDL_Quit();
}
