#include "initiateScoreBoard.h"

void scoreboard(void)
{
    window.surface = IMG_Load("./images/newcomponents/sundarbanScoreboard.png");
    if (!window.surface)
    {
        printf("scoreBoard Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    scoreBoard.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!scoreBoard.tex)
    {
        printf(" scoreBoard Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(scoreBoard.tex, NULL, NULL, &scoreBoard.rect.w, &scoreBoard.rect.h);
    scoreBoard.rect.w = (int)952;
    scoreBoard.rect.h = (int)529;
    scoreBoard.rect.x = WINDOW_WIDTH / 2 - 476;
    scoreBoard.rect.y = WINDOW_HEIGHT / 2 - 245;

    //playername

    for (int i = 0; i < 5; i++)
    {
        char sscore[100][10];
        strcpy(sscore[0], "h");
        LoadScoreFile();
        if (showPlayerNameList[scoreList[i]])
            sprintf(scoreBoardPlayerNameString[i], "%s", showPlayerNameList[scoreList[i]]);
        else
        {
            strcpy(playerNameList[0], "h");
            sprintf(scoreBoardPlayerNameString[i], "%s", sscore);
        }

        scoreBoardPlayerName[i].surface = TTF_RenderText_Solid(variables.font, scoreBoardPlayerNameString[i], variables.color);

        if (!window.surface)
        {
            printf("playername Error: %s\n", IMG_GetError());
            SDL_DestroyRenderer(app.rend);
            SDL_DestroyWindow(app.window);
            SDL_Quit();
            exit(1);
        }

        scoreBoardPlayerName[i].tex = SDL_CreateTextureFromSurface(app.rend, scoreBoardPlayerName[i].surface);
        if (!scoreBoardPlayerName[i].tex)
        {
            printf("scoreText Texture %s\n", SDL_GetError());
            SDL_DestroyRenderer(app.rend);
            SDL_DestroyWindow(app.window);
            SDL_Quit();
            exit(1);
        }
        SDL_QueryTexture(scoreBoardPlayerName[i].tex, NULL, NULL, &scoreBoardPlayerName[i].rect.w, &scoreBoardPlayerName[i].rect.h);
        scoreBoardPlayerName[i].rect.w = (int)scoreBoardPlayerName[i].surface->w - 5;
        scoreBoardPlayerName[i].rect.h = (int)scoreBoardPlayerName[i].surface->h - 5;
        scoreBoardPlayerName[i].rect.x = (int)590;
        scoreBoardPlayerName[i].rect.y = (int)425 + i * 61;
        if (i == 3 || i == 4)
            scoreBoardPlayerName[i].rect.y = (int)417 + i * 65;

        if (strlen(scoreBoardPlayerNameString[i]) > 6)
        {
            scoreBoardPlayerName[i].rect.x = (int)575;
        }

        //score
        LoadScoreFile();
        if (scoreList[i])
            sprintf(scoreBoardPlayerScoreString[i], "%d", scoreList[i]);
        else
            sprintf(scoreBoardPlayerScoreString[i], "%d", 0);

        scoreBoardPlayerScore[i].surface = TTF_RenderText_Solid(variables.font, scoreBoardPlayerScoreString[i], variables.color);

        if (!scoreBoardPlayerScore[i].surface)
        {
            printf("scorestring Error: %s\n", IMG_GetError());
            SDL_DestroyRenderer(app.rend);
            SDL_DestroyWindow(app.window);
            SDL_Quit();
            exit(1);
        }

        scoreBoardPlayerScore[i].tex = SDL_CreateTextureFromSurface(app.rend, scoreBoardPlayerScore[i].surface);
        if (!scoreBoardPlayerScore[i].tex)
        {
            printf("scoreText Texture %s\n", SDL_GetError());
            SDL_DestroyRenderer(app.rend);
            SDL_DestroyWindow(app.window);
            SDL_Quit();
            exit(1);
        }
        SDL_QueryTexture(scoreBoardPlayerScore[i].tex, NULL, NULL, &scoreBoardPlayerScore[i].rect.w, &scoreBoardPlayerScore[i].rect.h);
        scoreBoardPlayerScore[i].rect.w = (int)scoreBoardPlayerScore[i].surface->w - 10;
        scoreBoardPlayerScore[i].rect.h = (int)scoreBoardPlayerScore[i].surface->h - 10;
        scoreBoardPlayerScore[i].rect.x = (int)880;
        scoreBoardPlayerScore[i].rect.y = (int)430 + i * 61;
        if (i == 3 || i == 4)
            scoreBoardPlayerScore[i].rect.y = (int)422 + i * 65;
    }
}
void levelOneScoreboardCleanUp()
{
    SDL_DestroyTexture(scoreBoard.tex);
    for (int i = 0; i < 5; i++)
    {
        SDL_DestroyTexture(scoreBoardPlayerName[i].tex);
        SDL_DestroyTexture(scoreBoardPlayerScore[i].tex);
        SDL_FreeSurface(scoreBoardPlayerName[i].surface);
        SDL_FreeSurface(scoreBoardPlayerScore[i].surface);
    }
}