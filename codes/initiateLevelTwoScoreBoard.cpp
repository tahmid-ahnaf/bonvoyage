#include "initiateLevelTwoScoreBoard.h"

void levelTwoScoreboard(void)
{
    window.surface = IMG_Load("./images/levelone/scoreboard.png");
    if (!window.surface)
    {
        printf("scoreBoard Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelTwoScoreBoard.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!levelTwoScoreBoard.tex)
    {
        printf(" levelTwoScoreBoard Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(levelTwoScoreBoard.tex, NULL, NULL, &levelTwoScoreBoard.rect.w, &levelTwoScoreBoard.rect.h);
    levelTwoScoreBoard.rect.w = (int)1130;
    levelTwoScoreBoard.rect.h = (int)583;
    levelTwoScoreBoard.rect.x = WINDOW_WIDTH / 2 - 565;
    levelTwoScoreBoard.rect.y = WINDOW_HEIGHT / 2 - 385;

    //playername

    for (int i = 0; i < 5; i++)
    {
        char sscore[100][10];
        strcpy(sscore[0], "h");
        LoadScoreFile();
        if (showLevelTwoPlayerNameList[levelTwoScoreList[i]])
            // sprintf(levelTwoScoreBoardPlayerNameString[i], "%s", showPlayerNameList[scoreList[i]]);
            sprintf(levelTwoScoreBoardPlayerNameString[i], "%s", showLevelTwoPlayerNameList[levelTwoScoreList[i]]);
        else
        {
            strcpy(levelTwoPlayerNameList[0], "h");
            sprintf(levelTwoScoreBoardPlayerNameString[i], "%s", sscore);
        }

        // window.surface = TTF_RenderText_Solid(variables.font, levelTwoScoreBoardPlayerNameString[i], variables.color);
        window.surface = TTF_RenderText_Solid(variables.font, levelTwoScoreBoardPlayerNameString[i], variables.color);
        if (!window.surface)
        {
            printf("playername Error: %s\n", IMG_GetError());
            SDL_DestroyRenderer(app.rend);
            SDL_DestroyWindow(app.window);
            SDL_Quit();
            exit(1);
        }

        levelTwoScoreBoardPlayerName[i].tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
        SDL_FreeSurface(window.surface);
        if (!levelTwoScoreBoardPlayerName[i].tex)
        {
            printf("scoreText Texture %s\n", SDL_GetError());
            SDL_DestroyRenderer(app.rend);
            SDL_DestroyWindow(app.window);
            SDL_Quit();
            exit(1);
        }
        SDL_QueryTexture(levelTwoScoreBoardPlayerName[i].tex, NULL, NULL, &levelTwoScoreBoardPlayerName[i].rect.w, &levelTwoScoreBoardPlayerName[i].rect.h);
        levelTwoScoreBoardPlayerName[i].rect.w = (int)140;
        levelTwoScoreBoardPlayerName[i].rect.h = (int)23;
        levelTwoScoreBoardPlayerName[i].rect.x = (int)570;
        levelTwoScoreBoardPlayerName[i].rect.y = (int)331 + i * 61;
        if (i == 3 || i == 4)
            levelTwoScoreBoardPlayerName[i].rect.y = (int)330 + i * 65;

        //score
        LoadScoreFile();
        if (levelTwoScoreList[i])
            sprintf(levelTwoScoreBoardPlayerScoreString[i], "%d", levelTwoScoreList[i]);
        else
            sprintf(levelTwoScoreBoardPlayerScoreString[i], "%d", 0);

        window.surface = TTF_RenderText_Solid(variables.font, levelTwoScoreBoardPlayerScoreString[i], variables.color);

        if (!window.surface)
        {
            printf("scorestring Error: %s\n", IMG_GetError());
            SDL_DestroyRenderer(app.rend);
            SDL_DestroyWindow(app.window);
            SDL_Quit();
            exit(1);
        }

        levelTwoScoreBoardPlayerScore[i].tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
        SDL_FreeSurface(window.surface);
        if (!levelTwoScoreBoardPlayerScore[i].tex)
        {
            printf("scoreText Texture %s\n", SDL_GetError());
            SDL_DestroyRenderer(app.rend);
            SDL_DestroyWindow(app.window);
            SDL_Quit();
            exit(1);
        }
        SDL_QueryTexture(levelTwoScoreBoardPlayerScore[i].tex, NULL, NULL, &levelTwoScoreBoardPlayerScore[i].rect.w, &levelTwoScoreBoardPlayerScore[i].rect.h);
        levelTwoScoreBoardPlayerScore[i].rect.w = (int)70;
        levelTwoScoreBoardPlayerScore[i].rect.h = (int)18;
        levelTwoScoreBoardPlayerScore[i].rect.x = (int)900;
        levelTwoScoreBoardPlayerScore[i].rect.y = (int)335 + i * 61;
        if (i == 3 || i == 4)
            levelTwoScoreBoardPlayerScore[i].rect.y = (int)335 + i * 65;
    }
}
void levelTwoScoreboardCleanUp()
{
    SDL_DestroyTexture(levelTwoScoreBoard.tex);
    for (int i = 0; i < 5; i++)
    {
        SDL_DestroyTexture(levelTwoScoreBoardPlayerName[i].tex);
        SDL_DestroyTexture(levelTwoScoreBoardPlayerScore[i].tex);
    }
}