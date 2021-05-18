#include "updatePlayerName.h"
void updatePlayerName()
{

    //Player name
    window.surface = TTF_RenderText_Solid(variables.font, playerName, variables.color);

    if (!window.surface)
    {
        printf("playername Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    enterName.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!enterName.tex)
    {
        printf("back_BUTTON  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(enterName.tex, NULL, NULL, &enterName.rect.w, &enterName.rect.h);
    enterName.rect.w = (int)150;
    enterName.rect.h = (int)23;
    enterName.rect.x = (int)WINDOW_WIDTH / 2 - 75;
    enterName.rect.y = (int)400;

    //boxforplayername
    window.surface = IMG_Load("images/levelone/hoverbox.png");

    if (!window.surface)
    {
        printf("playername Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    playerNameBox.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!playerNameBox.tex)
    {
        printf("back_BUTTON  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(playerNameBox.tex, NULL, NULL, &playerNameBox.rect.w, &playerNameBox.rect.h);
    playerNameBox.rect.w = (int)300;
    playerNameBox.rect.h = (int)53;
    playerNameBox.rect.x = (int)WINDOW_WIDTH / 2 - 150;
    playerNameBox.rect.y = (int)385;

    //enterbutton
    window.surface = IMG_Load("images/levelone/enterButton.png");

    if (!window.surface)
    {
        printf("enterbuttonBUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    enterButton.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!enterButton.tex)
    {
        printf("enterbutton  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    enterButton.rect;
    SDL_QueryTexture(enterButton.tex, NULL, NULL, &enterButton.rect.w, &enterButton.rect.h);
    enterButton.rect.w = (int)250;
    enterButton.rect.h = (int)92;
    enterButton.rect.x = (int)WINDOW_WIDTH / 2 - 125;
    enterButton.rect.y = (int)WINDOW_HEIGHT / 2;

    //entercommand
    window.surface = IMG_Load("images/levelone/EnterYourName.png");

    if (!window.surface)
    {
        printf("enterbuttonBUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    enterCommand.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!enterCommand.tex)
    {
        printf("enterCommand  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    enterCommand.rect;
    SDL_QueryTexture(enterCommand.tex, NULL, NULL, &enterCommand.rect.w, &enterCommand.rect.h);
    enterCommand.rect.w = (int)350;
    enterCommand.rect.h = (int)92;
    enterCommand.rect.x = (int)WINDOW_WIDTH / 2 - 175;
    enterCommand.rect.y = (int)WINDOW_HEIGHT / 2 - 200;
}