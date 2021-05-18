#include "initiateScoreBoard.h"

void scoreboard(void)
{
    window.surface = IMG_Load("./images/levelone/scoreboard.png"); // LOADING THE IMAGE TO CREATED SURFACE FOR BACKGROUND ! WILL CONTINUE THIS PROCESS FOR ALL FUTURE SURFACES
    if (!window.surface)
    {
        printf("scoreBoard Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    scoreBoard.tex = SDL_CreateTextureFromSurface(app.rend, window.surface); //  LOADING CREATED TEXTURE TO PREVIOUSLY CREATED SURFACE ! WILL CONTINUE THIS PROCESS FOR ALL FUTURE TEXTURES
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
    scoreBoard.rect.w = (int)906;
    scoreBoard.rect.h = (int)630;
    scoreBoard.rect.x = WINDOW_WIDTH / 2 - 453;
    scoreBoard.rect.y = WINDOW_HEIGHT / 2 - 315;

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

        window.surface = TTF_RenderText_Solid(variables.font, scoreBoardPlayerNameString[i], variables.color);

        if (!window.surface)
        {
            printf("playername Error: %s\n", IMG_GetError());
            SDL_DestroyRenderer(app.rend);
            SDL_DestroyWindow(app.window);
            SDL_Quit();
            exit(1);
        }

        scoreBoardPlayerName[i].tex = SDL_CreateTextureFromSurface(app.rend, window.surface);

        if (!scoreBoardPlayerName[i].tex)
        {
            printf("scoreText Texture %s\n", SDL_GetError());
            SDL_DestroyRenderer(app.rend);
            SDL_DestroyWindow(app.window);
            SDL_Quit();
            exit(1);
        }
        SDL_QueryTexture(scoreBoardPlayerName[i].tex, NULL, NULL, &scoreBoardPlayerName[i].rect.w, &scoreBoardPlayerName[i].rect.h);
        scoreBoardPlayerName[i].rect.w = (int)150;
        scoreBoardPlayerName[i].rect.h = (int)23;
        scoreBoardPlayerName[i].rect.x = (int)570;
        scoreBoardPlayerName[i].rect.y = (int)435 + i * 61;
        if (i == 3 || i == 4)
            scoreBoardPlayerName[i].rect.y = (int)440 + i * 62;

        //score
        LoadScoreFile();
        if (scoreList[i])
            sprintf(scoreBoardPlayerScoreString[i], "%d", scoreList[i]);
        else
            sprintf(scoreBoardPlayerScoreString[i], "%d", 0);

        // strcpy(sscore, scoreBoardPlayerScoreString[i]);
        // itoa(scoreBoardPlayerScoreString[i], sscore, 10);
        window.surface = TTF_RenderText_Solid(variables.font, scoreBoardPlayerScoreString[i], variables.color);

        if (!window.surface)
        {
            printf("scorestring Error: %s\n", IMG_GetError());
            SDL_DestroyRenderer(app.rend);
            SDL_DestroyWindow(app.window);
            SDL_Quit();
            exit(1);
        }

        scoreBoardPlayerScore[i].tex = SDL_CreateTextureFromSurface(app.rend, window.surface);

        if (!scoreBoardPlayerScore[i].tex)
        {
            printf("scoreText Texture %s\n", SDL_GetError());
            SDL_DestroyRenderer(app.rend);
            SDL_DestroyWindow(app.window);
            SDL_Quit();
            exit(1);
        }
        SDL_QueryTexture(scoreBoardPlayerScore[i].tex, NULL, NULL, &scoreBoardPlayerScore[i].rect.w, &scoreBoardPlayerScore[i].rect.h);
        scoreBoardPlayerScore[i].rect.w = (int)70;
        scoreBoardPlayerScore[i].rect.h = (int)18;
        scoreBoardPlayerScore[i].rect.x = (int)900;
        scoreBoardPlayerScore[i].rect.y = (int)440 + i * 61;
        if (i == 3 || i == 4)
            scoreBoardPlayerScore[i].rect.y = (int)440 + i * 63;
    }
}
void scoreboardCleanUp()
{
    SDL_DestroyTexture(scoreBoard.tex);
}