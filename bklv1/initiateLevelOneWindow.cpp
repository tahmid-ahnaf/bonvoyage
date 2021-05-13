#include "initiateLevelOneWindow.h"
//sky

void levelonewindow(void)
{

    levelOneWindow.sky.surface = IMG_Load("images/levelone/mountains2.png");

    if (!levelOneWindow.sky.surface)
    {
        printf("sky_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindow.sky.tex = SDL_CreateTextureFromSurface(app.rend, levelOneWindow.sky.surface);

    if (!levelOneWindow.sky.tex)
    {
        printf("sky_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelOneWindow.sky.rect;
    SDL_QueryTexture(levelOneWindow.sky.tex, NULL, NULL, &levelOneWindow.sky.rect.w, &levelOneWindow.sky.rect.h);
    levelOneWindow.sky.rect.w = (int)WINDOW_WIDTH;
    levelOneWindow.sky.rect.h = (int)WINDOW_HEIGHT;
    levelOneWindow.sky.rect.x = (int)0;
    levelOneWindow.sky.rect.y = (int)-100;

    //mountains

    levelOneWindow.mountains.surface = IMG_Load("images/levelone/mountains.png");

    if (!levelOneWindow.mountains.surface)
    {
        printf("mountains_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindow.mountains.tex = SDL_CreateTextureFromSurface(app.rend, levelOneWindow.mountains.surface);

    if (!levelOneWindow.mountains.tex)
    {
        printf("mountains_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelOneWindow.mountains.rect;
    SDL_QueryTexture(levelOneWindow.mountains.tex, NULL, NULL, &levelOneWindow.mountains.rect.w, &levelOneWindow.mountains.rect.h);
    levelOneWindow.mountains.rect.w = (int)WINDOW_WIDTH;
    levelOneWindow.mountains.rect.h = (int)450;
    levelOneWindow.mountains.rect.x = (int)0;
    levelOneWindow.mountains.rect.y = (int)255;

    // treeshade
    levelOneWindow.treeshade.surface = IMG_Load("images/levelone/treeshade.png");

    if (!levelOneWindow.treeshade.surface)
    {
        printf("treeshade_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindow.treeshade.tex = SDL_CreateTextureFromSurface(app.rend, levelOneWindow.treeshade.surface);

    if (!levelOneWindow.treeshade.tex)
    {
        printf("treeshade_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelOneWindow.treeshade.rect;
    SDL_QueryTexture(levelOneWindow.treeshade.tex, NULL, NULL, &levelOneWindow.treeshade.rect.w, &levelOneWindow.treeshade.rect.h);
    levelOneWindow.treeshade.rect.w = (int)WINDOW_WIDTH;
    levelOneWindow.treeshade.rect.h = (int)380;
    levelOneWindow.treeshade.rect.x = (int)0;
    levelOneWindow.treeshade.rect.y = (int)385;

    //trees
    levelOneWindow.trees.surface = IMG_Load("images/levelone/trees.png");

    if (!levelOneWindow.trees.surface)
    {
        printf("trees_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindow.trees.tex = SDL_CreateTextureFromSurface(app.rend, levelOneWindow.trees.surface);

    if (!levelOneWindow.trees.tex)
    {
        printf("trees Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelOneWindow.trees.rect;
    SDL_QueryTexture(levelOneWindow.trees.tex, NULL, NULL, &levelOneWindow.trees.rect.w, &levelOneWindow.trees.rect.h);
    levelOneWindow.trees.rect.w = (int)WINDOW_WIDTH;
    levelOneWindow.trees.rect.h = (int)266;
    levelOneWindow.trees.rect.x = (int)0;
    levelOneWindow.trees.rect.y = (int)495;

    //track
    // levelOneWindow.track.surface = IMG_Load("images/levelone/daytrack.png");
    levelOneWindow.track.surface = IMG_Load("images/leveltwo/new/tracks1.png");

    if (!levelOneWindow.track.surface)
    {
        printf("track_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindow.track.tex = SDL_CreateTextureFromSurface(app.rend, levelOneWindow.track.surface);

    if (!levelOneWindow.track.tex)
    {
        printf("track Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelOneWindow.track.rect;
    SDL_QueryTexture(levelOneWindow.track.tex, NULL, NULL, &levelOneWindow.track.rect.w, &levelOneWindow.track.rect.h);
    levelOneWindow.track.rect.w = (int)WINDOW_WIDTH;
    levelOneWindow.track.rect.h = (int)200;
    levelOneWindow.track.rect.x = (int)0;
    levelOneWindow.track.rect.y = (int)750;

    //character
    levelOneWindow.character.surface = IMG_Load("images/levelone/Transparent_sprite.png");

    if (!levelOneWindow.character.surface)
    {
        printf("character_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindow.character.tex = SDL_CreateTextureFromSurface(app.rend, levelOneWindow.character.surface);

    if (!levelOneWindow.character.tex)
    {
        printf("character Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(levelOneWindow.character.tex, NULL, NULL, &variables.levelOneVars.characterTexturewidth, &variables.levelOneVars.characterTextureheight);
    variables.levelOneVars.characterFramewidth = variables.levelOneVars.characterTexturewidth / 6 + 1;
    //for red sprite                                        //for green sprite
    variables.levelOneVars.characterFrameheight = variables.levelOneVars.characterTextureheight / 2;
    levelOneWindow.character.rect.w = variables.levelOneVars.characterFramewidth;
    levelOneWindow.character.rect.h = variables.levelOneVars.characterFrameheight;
    levelOneWindow.character.rect.x = 0;
    levelOneWindow.character.rect.y = 0;
    levelOneWindow.characterFramePosition.rect.w = variables.levelOneVars.characterFramewidth;
    levelOneWindow.characterFramePosition.rect.h = variables.levelOneVars.characterFrameheight;
    levelOneWindow.characterFramePosition.rect.x = variables.levelOneVars.characterXposition;
    levelOneWindow.characterFramePosition.rect.y = 0;

    //score
    levelOneWindow.score.surface = IMG_Load("images/levelone/coins.png");

    if (!levelOneWindow.score.surface)
    {
        printf("score_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindow.score.tex = SDL_CreateTextureFromSurface(app.rend, levelOneWindow.score.surface);

    if (!levelOneWindow.score.tex)
    {
        printf("score Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelOneWindow.score.rect;
    SDL_QueryTexture(levelOneWindow.score.tex, NULL, NULL, &levelOneWindow.score.rect.w, &levelOneWindow.score.rect.h);
    levelOneWindow.score.rect.w = (int)35;
    levelOneWindow.score.rect.h = (int)40;
    levelOneWindow.score.rect.x = (int)60;
    levelOneWindow.score.rect.y = (int)33;

    //highScore
    levelOneWindow.highScore.surface = IMG_Load("images/levelone/highscore.png");

    if (!levelOneWindow.highScore.surface)
    {
        printf("highScore_BUTTON Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindow.highScore.tex = SDL_CreateTextureFromSurface(app.rend, levelOneWindow.highScore.surface);

    if (!levelOneWindow.highScore.tex)
    {
        printf("highScore Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    levelOneWindow.highScore.rect;
    SDL_QueryTexture(levelOneWindow.highScore.tex, NULL, NULL, &levelOneWindow.highScore.rect.w, &levelOneWindow.highScore.rect.h);
    levelOneWindow.highScore.rect.w = (int)35;
    levelOneWindow.highScore.rect.h = (int)40;
    levelOneWindow.highScore.rect.x = (int)60;
    levelOneWindow.highScore.rect.y = (int)100;

    // // score text
    // updateScore();

    // if (!levelOneWindow.scoreText.surface)
    // {
    //     printf("scoreText_BUTTON Error: %s\n", IMG_GetError());
    //     SDL_DestroyRenderer(app.rend);
    //     SDL_DestroyWindow(app.window);
    //     SDL_Quit();
    //     exit(1);
    // }

    // levelOneWindow.scoreText.tex = SDL_CreateTextureFromSurface(app.rend, levelOneWindow.scoreText.surface);

    // if (!levelOneWindow.scoreText.tex)
    // {
    //     printf("scoreText Texture %s\n", SDL_GetError());
    //     SDL_DestroyRenderer(app.rend);
    //     SDL_DestroyWindow(app.window);
    //     SDL_Quit();
    //     exit(1);
    // }
    // SDL_QueryTexture(levelOneWindow.scoreText.tex, NULL, NULL, &levelOneWindow.scoreText.rect.w, &levelOneWindow.scoreText.rect.h);
    // levelOneWindow.scoreText.rect.w = (int)40;
    // levelOneWindow.scoreText.rect.h = (int)23;
    // levelOneWindow.scoreText.rect.x = (int)150;
    // levelOneWindow.scoreText.rect.y = (int)45;
}

void levelOneWindowCleanUp()
{
    SDL_FreeSurface(levelOneWindow.sky.surface);
    SDL_DestroyTexture(levelOneWindow.sky.tex);
    SDL_FreeSurface(levelOneWindow.mountains.surface);
    SDL_DestroyTexture(levelOneWindow.mountains.tex);
    SDL_FreeSurface(levelOneWindow.treeshade.surface);
    SDL_DestroyTexture(levelOneWindow.treeshade.tex);
    SDL_FreeSurface(levelOneWindow.trees.surface);
    SDL_DestroyTexture(levelOneWindow.trees.tex);
    SDL_FreeSurface(levelOneWindow.track.surface);
    SDL_DestroyTexture(levelOneWindow.track.tex);
    SDL_FreeSurface(levelOneWindow.character.surface);
    SDL_DestroyTexture(levelOneWindow.character.tex);
    SDL_FreeSurface(levelOneWindow.score.surface);
    SDL_DestroyTexture(levelOneWindow.score.tex);
    SDL_FreeSurface(levelOneWindow.highScore.surface);
    SDL_DestroyTexture(levelOneWindow.highScore.tex);
    IMG_Quit();
}