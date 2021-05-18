#include "updateScore.h"
void updateScore()
{
    LoadScoreFile();
    sprintf(levelOneScoreString, "%i", levelOneCurrentScore);

    if (variables.gameOver == 1 && count == 1)
    {
        updateHighScoreOnFile();
        scoreboard();
    }

    sprintf(levelOneHighScoreString, "%i", scoreList[0]);

    levelOneWindowScoreText.surface = TTF_RenderText_Solid(variables.font, levelOneScoreString, variables.color);

    if (!levelOneWindowScoreText.surface)
    {
        printf("scoreText_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindowScoreText.tex = SDL_CreateTextureFromSurface(app.rend, levelOneWindowScoreText.surface);

    if (!levelOneWindowScoreText.tex)
    {
        printf("scoreText Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    SDL_QueryTexture(levelOneWindowScoreText.tex, NULL, NULL, &levelOneWindowScoreText.rect.w, &levelOneWindowScoreText.rect.h);
    levelOneWindowScoreText.rect.w = (int)40;
    levelOneWindowScoreText.rect.h = (int)23;
    levelOneWindowScoreText.rect.x = (int)150;
    levelOneWindowScoreText.rect.y = (int)45;

    //highscore

    levelOneWindowHighScoreText.surface = TTF_RenderText_Solid(variables.font, levelOneHighScoreString, variables.color);

    if (!levelOneWindowHighScoreText.surface)
    {
        printf("highScoreText_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindowHighScoreText.tex = SDL_CreateTextureFromSurface(app.rend, levelOneWindowHighScoreText.surface);

    if (!levelOneWindowHighScoreText.tex)
    {
        printf("highScoreText Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    SDL_QueryTexture(levelOneWindowHighScoreText.tex, NULL, NULL, &levelOneWindowHighScoreText.rect.w, &levelOneWindowHighScoreText.rect.h);
    levelOneWindowHighScoreText.rect.w = (int)40;
    levelOneWindowHighScoreText.rect.h = (int)23;
    levelOneWindowHighScoreText.rect.x = (int)150;
    levelOneWindowHighScoreText.rect.y = (int)110;
}








void updateScoreLevel2()
{
    sprintf(highScoreString, "%i", highScore);
   
    sprintf(scoreString, "%i", currentScore);

    // if (currentScore > highScore)
    // {

    //     updateHighScoreOnFile();
    // }

      if (currentScore >highScore)
      {
        updateHighScoreOnFileLevel2();
      }
    levelTwoScoreText.surface = TTF_RenderText_Solid(variables.font, scoreString, variables.color);

    if (!levelTwoScoreText.surface)
    {
        printf("scoreText_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoScoreText.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoScoreText.surface);

    if (!levelTwoScoreText.tex)
    {
        printf("scoreText Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    SDL_QueryTexture(levelTwoScoreText.tex, NULL, NULL, &levelTwoScoreText.rect.w, &levelTwoScoreText.rect.h);
    levelTwoScoreText.rect.w = (int)levelTwoScoreText.surface->w;
    levelTwoScoreText.rect.h = (int)levelTwoScoreText.surface->h;
    levelTwoScoreText.rect.x = (int)150;
    levelTwoScoreText.rect.y = (int)45;
   

    //highscore

    levelTwoHighScoreText.surface = TTF_RenderText_Solid(variables.font, highScoreString, variables.color);

    if (!levelTwoHighScoreText.surface)
    {
        printf("highScoreText_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoHighScoreText.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoHighScoreText.surface);

    if (!levelTwoHighScoreText.tex)
    {
        printf("highScoreText Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    SDL_QueryTexture(levelTwoHighScoreText.tex, NULL, NULL, &levelTwoHighScoreText.rect.w, &levelTwoHighScoreText.rect.h);
    levelTwoHighScoreText.rect.w = (int)levelTwoHighScoreText.surface->w;
    levelTwoHighScoreText.rect.h = (int)levelTwoHighScoreText.surface->h;
    levelTwoHighScoreText.rect.x = (int)150;
    levelTwoHighScoreText.rect.y = (int)110;
}