#include "updateScore.h"
void updateScore()
{
    sprintf(variables.levelOneVars.highScoreString, "%i", variables.levelOneVars.highScore);
    variables.levelOneVars.currentScore += 1;
    sprintf(variables.levelOneVars.scoreString, "%i", variables.levelOneVars.currentScore);

    // if (variables.levelOneVars.currentScore > variables.levelOneVars.highScore)
    // {

    //     updateHighScoreOnFile();
    // }
    levelOneWindow.scoreText.surface = TTF_RenderText_Solid(variables.levelOneVars.font, variables.levelOneVars.scoreString, variables.levelOneVars.color);

    if (!levelOneWindow.scoreText.surface)
    {
        printf("scoreText_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindow.scoreText.tex = SDL_CreateTextureFromSurface(app.rend, levelOneWindow.scoreText.surface);

    if (!levelOneWindow.scoreText.tex)
    {
        printf("scoreText Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    SDL_QueryTexture(levelOneWindow.scoreText.tex, NULL, NULL, &levelOneWindow.scoreText.rect.w, &levelOneWindow.scoreText.rect.h);
    levelOneWindow.scoreText.rect.w = (int)40;
    levelOneWindow.scoreText.rect.h = (int)23;
    levelOneWindow.scoreText.rect.x = (int)150;
    levelOneWindow.scoreText.rect.y = (int)45;

    //highscore

    levelOneWindow.highScoreText.surface = TTF_RenderText_Solid(variables.levelOneVars.font, variables.levelOneVars.highScoreString, variables.levelOneVars.color);

    if (!levelOneWindow.highScoreText.surface)
    {
        printf("highScoreText_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindow.highScoreText.tex = SDL_CreateTextureFromSurface(app.rend, levelOneWindow.highScoreText.surface);

    if (!levelOneWindow.highScoreText.tex)
    {
        printf("highScoreText Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    SDL_QueryTexture(levelOneWindow.highScoreText.tex, NULL, NULL, &levelOneWindow.highScoreText.rect.w, &levelOneWindow.highScoreText.rect.h);
    levelOneWindow.highScoreText.rect.w = (int)40;
    levelOneWindow.highScoreText.rect.h = (int)23;
    levelOneWindow.highScoreText.rect.x = (int)150;
    levelOneWindow.highScoreText.rect.y = (int)110;
}


void updateScoreLevel2()
{
    sprintf(variables.levelTwoVars.highScoreString, "%i", variables.levelTwoVars.highScore);
   
    sprintf(variables.levelTwoVars.scoreString, "%i", variables.levelTwoVars.currentScore);

    // if (variables.levelOneVars.currentScore > variables.levelOneVars.highScore)
    // {

    //     updateHighScoreOnFile();
    // }

      if (variables.levelTwoVars.currentScore >variables.levelTwoVars.highScore)
            {
  updateHighScoreOnFileLevel2();
  }
    levelTwoWindow.scoreText.surface = TTF_RenderText_Solid(variables.levelOneVars.font, variables.levelTwoVars.scoreString, variables.levelTwoVars.color);

    if (!levelTwoWindow.scoreText.surface)
    {
        printf("scoreText_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindow.scoreText.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.scoreText.surface);

    if (!levelTwoWindow.scoreText.tex)
    {
        printf("scoreText Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    SDL_QueryTexture(levelTwoWindow.scoreText.tex, NULL, NULL, &levelTwoWindow.scoreText.rect.w, &levelTwoWindow.scoreText.rect.h);
    levelTwoWindow.scoreText.rect.w = (int)levelTwoWindow.scoreText.surface->w;
    levelTwoWindow.scoreText.rect.h = (int)levelTwoWindow.scoreText.surface->h;
    levelTwoWindow.scoreText.rect.x = (int)150;
    levelTwoWindow.scoreText.rect.y = (int)45;
   

    //highscore

    levelTwoWindow.highScoreText.surface = TTF_RenderText_Solid(variables.levelOneVars.font, variables.levelTwoVars.highScoreString, variables.levelTwoVars.color);

    if (!levelTwoWindow.highScoreText.surface)
    {
        printf("highScoreText_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelTwoWindow.highScoreText.tex = SDL_CreateTextureFromSurface(app.rend, levelTwoWindow.highScoreText.surface);

    if (!levelTwoWindow.highScoreText.tex)
    {
        printf("highScoreText Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    SDL_QueryTexture(levelTwoWindow.highScoreText.tex, NULL, NULL, &levelTwoWindow.highScoreText.rect.w, &levelTwoWindow.highScoreText.rect.h);
    levelTwoWindow.highScoreText.rect.w = (int)levelTwoWindow.highScoreText.surface->w;
    levelTwoWindow.highScoreText.rect.h = (int)levelTwoWindow.highScoreText.surface->h;
    levelTwoWindow.highScoreText.rect.x = (int)150;
    levelTwoWindow.highScoreText.rect.y = (int)110;
}