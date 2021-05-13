#include "drawLevelOneWindow.h"

void updateAnimationSpeedForLevelOneWindow()
{
    variables.levelOneVars.characterPrevtime = variables.levelOneVars.characterCurrentime;
    variables.levelOneVars.characterCurrentime = SDL_GetTicks();
    variables.levelOneVars.characterDeltatime = (variables.levelOneVars.characterCurrentime - variables.levelOneVars.characterPrevtime) / 280.0f;

    variables.levelOneVars.characterJumpPrevtime = variables.levelOneVars.characterJumpCurrenttime;
    variables.levelOneVars.characterJumpCurrenttime = SDL_GetTicks();
    variables.levelOneVars.characterJumpDeltatime = (variables.levelOneVars.characterJumpCurrenttime - variables.levelOneVars.characterJumpPrevtime) / 20.0f;

    variables.levelOneVars.characterFrametime += variables.levelOneVars.characterDeltatime;
    if (variables.levelOneVars.characterFrametime >= (0.25f))
    {
        variables.levelOneVars.characterFrametime = 0.0;
        levelOneWindow.character.rect.x += variables.levelOneVars.characterFramewidth;

        if (levelOneWindow.character.rect.x >= variables.levelOneVars.characterTexturewidth)
        {
            levelOneWindow.character.rect.x = 0;
        }
        updateScore();
    }
    if (variables.levelOneVars.characterYposition <= 40)
    {
        variables.levelOneVars.characterYposition = 40;
    }
    if (variables.levelOneVars.characterXposition >= 600 && variables.levelOneVars.characterXposition < 700)
    {
        variables.levelOneVars.characterXposition = 600;
    }
    if (variables.levelOneVars.characterYposition >= 625)
    {
        variables.levelOneVars.characterYposition = 625;
    }
    if (variables.levelOneVars.characterXposition >= 700)
    {
        variables.levelOneVars.characterXposition = 700;
    }
    levelOneWindow.characterFramePosition.rect.x = variables.levelOneVars.characterXposition;
    levelOneWindow.characterFramePosition.rect.y = variables.levelOneVars.characterYposition;

    variables.levelOneVars.characterJumpFrametime += variables.levelOneVars.characterJumpDeltatime;

    if (variables.levelOneVars.characterJumpFrametime >= (0.25f))
    {
        variables.levelOneVars.characterJumpFrametime = 0.0f;
        if (variables.levelOneVars.characterYposition < 680)
        {
            variables.levelOneVars.characterYposition += SCROLL_SPEED / 70;
        }
    }

    variables.AnimationSpeed.levelOneWindow.sky -= 0.5;
    if (variables.AnimationSpeed.levelOneWindow.sky < -levelOneWindow.sky.rect.w)
    {
        variables.AnimationSpeed.levelOneWindow.sky = 0;
    }

    variables.AnimationSpeed.levelOneWindow.mountains -= 2;
    if (variables.AnimationSpeed.levelOneWindow.mountains < -levelOneWindow.mountains.rect.w)
    {
        variables.AnimationSpeed.levelOneWindow.mountains = 0;
    }

    variables.AnimationSpeed.levelOneWindow.treeshade -= 4;
    if (variables.AnimationSpeed.levelOneWindow.treeshade < -levelOneWindow.treeshade.rect.w)
    {
        variables.AnimationSpeed.levelOneWindow.treeshade = 0;
    }

    variables.AnimationSpeed.levelOneWindow.trees -= 5;
    if (variables.AnimationSpeed.levelOneWindow.trees < -levelOneWindow.trees.rect.w)
    {
        variables.AnimationSpeed.levelOneWindow.trees = 0;
    }
    variables.AnimationSpeed.levelOneWindow.clouds -= 1;
    if (variables.AnimationSpeed.levelOneWindow.clouds < -levelOneWindow.clouds.rect.w)
    {
        variables.AnimationSpeed.levelOneWindow.clouds = 0;
    }

    variables.AnimationSpeed.levelOneWindow.track -= 6;
    if (variables.AnimationSpeed.levelOneWindow.track < -levelOneWindow.track.rect.w)
    {
        variables.AnimationSpeed.levelOneWindow.track = 0;
    }
}
void drawLevelOneWindowFunction()
{

    if (variables.levelOneVars.space == 1)
    {
        updateAnimationSpeedForLevelOneWindow();
    }

    levelOneWindow.sky.rect.x = variables.AnimationSpeed.levelOneWindow.sky;
    levelOneWindow.mountains.rect.x = variables.AnimationSpeed.levelOneWindow.mountains;
    levelOneWindow.treeshade.rect.x = variables.AnimationSpeed.levelOneWindow.treeshade;
    levelOneWindow.trees.rect.x = variables.AnimationSpeed.levelOneWindow.trees;
    levelOneWindow.clouds.rect.x = variables.AnimationSpeed.levelOneWindow.clouds;
    levelOneWindow.track.rect.x = variables.AnimationSpeed.levelOneWindow.track;
    SDL_RenderClear(app.rend);

    SDL_RenderCopy(app.rend, levelOneWindow.sky.tex, NULL, &levelOneWindow.sky.rect);
    levelOneWindow.sky.rect.x = variables.AnimationSpeed.levelOneWindow.sky + levelOneWindow.sky.rect.w;
    SDL_RenderCopy(app.rend, levelOneWindow.sky.tex, NULL, &levelOneWindow.sky.rect);

    SDL_RenderCopy(app.rend, levelOneWindow.sun.tex, NULL, &levelOneWindow.sun.rect);

    SDL_RenderCopy(app.rend, levelOneWindow.clouds.tex, NULL, &levelOneWindow.clouds.rect);
    levelOneWindow.clouds.rect.x = variables.AnimationSpeed.levelOneWindow.clouds + levelOneWindow.clouds.rect.w;
    SDL_RenderCopy(app.rend, levelOneWindow.clouds.tex, NULL, &levelOneWindow.clouds.rect);

    SDL_RenderCopy(app.rend, levelOneWindow.mountains.tex, NULL, &levelOneWindow.mountains.rect);
    levelOneWindow.mountains.rect.x = variables.AnimationSpeed.levelOneWindow.mountains + levelOneWindow.mountains.rect.w;
    SDL_RenderCopy(app.rend, levelOneWindow.mountains.tex, NULL, &levelOneWindow.mountains.rect);

    SDL_RenderCopy(app.rend, levelOneWindow.treeshade.tex, NULL, &levelOneWindow.treeshade.rect);
    levelOneWindow.treeshade.rect.x = variables.AnimationSpeed.levelOneWindow.treeshade + levelOneWindow.treeshade.rect.w;
    SDL_RenderCopy(app.rend, levelOneWindow.treeshade.tex, NULL, &levelOneWindow.treeshade.rect);

    SDL_RenderCopy(app.rend, levelOneWindow.trees.tex, NULL, &levelOneWindow.trees.rect);
    levelOneWindow.trees.rect.x = variables.AnimationSpeed.levelOneWindow.trees + levelOneWindow.trees.rect.w;
    SDL_RenderCopy(app.rend, levelOneWindow.trees.tex, NULL, &levelOneWindow.trees.rect);

    SDL_RenderCopy(app.rend, levelOneWindow.track.tex, NULL, &levelOneWindow.track.rect);
    levelOneWindow.track.rect.x = variables.AnimationSpeed.levelOneWindow.track + levelOneWindow.track.rect.w;
    SDL_RenderCopy(app.rend, levelOneWindow.track.tex, NULL, &levelOneWindow.track.rect);

    SDL_RenderCopy(app.rend, levelOneWindow.character.tex, &levelOneWindow.character.rect, &levelOneWindow.characterFramePosition.rect);
    SDL_RenderCopy(app.rend, levelOneWindow.score.tex, NULL, &levelOneWindow.score.rect);
    SDL_RenderCopy(app.rend, levelOneWindow.highScore.tex, NULL, &levelOneWindow.highScore.rect);
    SDL_RenderCopy(app.rend, levelOneWindow.scoreText.tex, NULL, &levelOneWindow.scoreText.rect);
    SDL_RenderCopy(app.rend, levelOneWindow.highScoreText.tex, NULL, &levelOneWindow.highScoreText.rect);
    SDL_RenderCopy(app.rend, welcome_window.back.tex, NULL, &welcome_window.back.rect);
    // SDL_RenderCopy(app.rend, levelOneWindow.coins[0].tex, NULL, &levelOneWindow.coins[0].rect);

    drawCoinsFunction();
}