#include "updateLevelTwoPlayerName.h"
void updateLevelTwoPlayerName()
{

    //Player name

    levelTwoEnterName.surface = TTF_RenderText_Solid(variables.font, levelTwoPlayerName, variables.color);

    if (!levelTwoEnterName.surface)
    {
        printf("playername Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoEnterName.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoEnterName.surface);

    if (!levelTwoEnterName.tex)
    {
        printf("back_BUTTON  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(levelTwoEnterName.tex, NULL, NULL, &levelTwoEnterName.rect.w, &levelTwoEnterName.rect.h);
    levelTwoEnterName.rect.w = (int)levelTwoEnterName.surface->w;
    levelTwoEnterName.rect.h = (int)levelTwoEnterName.surface->h;
    levelTwoEnterName.rect.x = (int)WINDOW_WIDTH / 2 - 55;
    levelTwoEnterName.rect.y = (int)405;

    if (strlen(levelTwoPlayerName) > 7)
    {
        levelTwoEnterName.rect.x -= 25;
    }

    //boxforplayername
    window.surface = IMG_Load("images/levelone/nameSquare.png");

    if (!window.surface)
    {
        printf("playername Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoPlayerNameBox.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelTwoPlayerNameBox.tex)
    {
        printf("back_button  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(levelTwoPlayerNameBox.tex, NULL, NULL, &levelTwoPlayerNameBox.rect.w, &levelTwoPlayerNameBox.rect.h);
    levelTwoPlayerNameBox.rect.w = (int)374;
    levelTwoPlayerNameBox.rect.h = (int)66;
    levelTwoPlayerNameBox.rect.x = (int)WINDOW_WIDTH / 2 - 187;
    levelTwoPlayerNameBox.rect.y = (int)385;

    //levelTwoEnterButton
    window.surface = IMG_Load("images/buttons/newenterbutton.png");

    if (!window.surface)
    {
        printf("enterbuttonBUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoEnterButton.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelTwoEnterButton.tex)
    {
        printf("levelTwoEnterButton  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(levelTwoEnterButton.tex, NULL, NULL, &levelTwoEnterButton.rect.w, &levelTwoEnterButton.rect.h);
    levelTwoEnterButton.rect.w = (int)238;
    levelTwoEnterButton.rect.h = (int)69;
    levelTwoEnterButton.rect.x = (int)WINDOW_WIDTH / 2 - 119;
    levelTwoEnterButton.rect.y = (int)WINDOW_HEIGHT / 2;

    //levelTwoEnterCommand
    window.surface = IMG_Load("images/levelone/enterYourName.png");

    if (!window.surface)
    {
        printf("levelTwoEnterButtonBUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoEnterCommand.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelTwoEnterCommand.tex)
    {
        printf("levelTwoEnterCommand  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoEnterCommand.rect;
    SDL_QueryTexture(levelTwoEnterCommand.tex, NULL, NULL, &levelTwoEnterCommand.rect.w, &levelTwoEnterCommand.rect.h);
    levelTwoEnterCommand.rect.w = (int)384;
    levelTwoEnterCommand.rect.h = (int)73;
    levelTwoEnterCommand.rect.x = (int)WINDOW_WIDTH / 2 - 192;
    levelTwoEnterCommand.rect.y = (int)WINDOW_HEIGHT / 2 - 200;
}
void levelTwoPlayerNameCleanUp()
{
    SDL_DestroyTexture(levelTwoEnterName.tex);
    SDL_DestroyTexture(levelTwoEnterButton.tex);
    SDL_DestroyTexture(levelTwoPlayerNameBox.tex);
    SDL_DestroyTexture(levelTwoEnterCommand.tex);
    SDL_FreeSurface(levelTwoEnterName.surface);
}