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
    variables.font = TTF_OpenFont("Freshman.ttf", 30); //OPENING FONT FROM LOCAL STORAGE
                                                       // SDL_Color color = {244, 189, 2};
    // variables.color = {25, 25, 112};
    variables.color = {0, 230, 64};
    //Welcome screen sky
    // updatePlayerName();


    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
    background = Mix_LoadMUS("audio/Delusion.mp3");
    coingain = Mix_LoadMUS("audio/coingain.mp3");
    explosionsound = Mix_LoadMUS("audio/explosionsound.mp3");
    jumpsound = Mix_LoadMUS("audio/jump.mp3");
    pointgainsound = Mix_LoadMUS("audio/pointgain.mp3");



    SDL_StartTextInput();

    welcomewindow();

    newgamewindow();

    updatePlayerName();

    levelonewindow();

    leveltwowindow();
    levelonecompleted();
    scoreboard();

    //back
    window.surface = IMG_Load("images/backbutton.png");

    if (!window.surface)
    {
        printf("back_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    back.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!back.tex)
    {
        printf("back_BUTTON  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(back.tex, NULL, NULL, &back.rect.w, &back.rect.h);
    back.rect.w = (int)115;
    back.rect.h = (int)47;
    back.rect.x = (int)30;
    back.rect.y = (int)890;
}
void cleanup(void)
{

    welcomeWindowCleanUp();
    newGameWindowCleanUp();
    levelTwoWindowCleanUp();
    levelOneWindowCleanUp();
    SDL_StopTextInput();
    TTF_CloseFont(variables.font);
    TTF_Quit();
    IMG_Quit();

    SDL_DestroyRenderer(app.rend);

    SDL_DestroyWindow(app.window);
    SDL_Quit();
}
