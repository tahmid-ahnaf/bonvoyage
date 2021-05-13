#include "drawWelcomeWindow.h"
void updateAnimationSpeedForWelcomeWindow()
{
    variables.AnimationSpeed.welcomeWindow.sky -= 2;
    if (variables.AnimationSpeed.welcomeWindow.sky < -welcome_window.sky.rect.w)
    {
        variables.AnimationSpeed.welcomeWindow.sky = 0;
    }

    variables.AnimationSpeed.welcomeWindow.birds += 3;
    if (variables.AnimationSpeed.welcomeWindow.birds > welcome_window.birds.rect.w)
    {
        variables.AnimationSpeed.welcomeWindow.birds -= 2 * welcome_window.birds.rect.w;
    }
    variables.AnimationSpeed.welcomeWindow.mountains -= 1;
    if (variables.AnimationSpeed.welcomeWindow.mountains < -welcome_window.mountains.rect.w)
    {
        variables.AnimationSpeed.welcomeWindow.mountains = 0;
    }
}
void drawWelcomeWindowFunction()

{

    updateAnimationSpeedForWelcomeWindow();
    welcome_window.sky.rect.x = variables.AnimationSpeed.welcomeWindow.sky;
    welcome_window.birds.rect.x = variables.AnimationSpeed.welcomeWindow.birds;
    welcome_window.mountains.rect.x = variables.AnimationSpeed.welcomeWindow.mountains;
    SDL_RenderClear(app.rend);

    SDL_RenderCopy(app.rend, welcome_window.sky.tex, NULL, &welcome_window.sky.rect);
    welcome_window.sky.rect.x = variables.AnimationSpeed.welcomeWindow.sky + welcome_window.sky.rect.w;
    SDL_RenderCopy(app.rend, welcome_window.sky.tex, NULL, &welcome_window.sky.rect);

    SDL_RenderCopy(app.rend, welcome_window.birds.tex, NULL, &welcome_window.birds.rect);
    welcome_window.birds.rect.x = variables.AnimationSpeed.welcomeWindow.birds + welcome_window.birds.rect.w;
    SDL_RenderCopy(app.rend, welcome_window.birds.tex, NULL, &welcome_window.birds.rect);

    SDL_RenderCopy(app.rend, welcome_window.mountains.tex, NULL, &welcome_window.mountains.rect);
    welcome_window.mountains.rect.x = variables.AnimationSpeed.welcomeWindow.mountains + welcome_window.mountains.rect.w;
    SDL_RenderCopy(app.rend, welcome_window.mountains.tex, NULL, &welcome_window.mountains.rect);

    SDL_RenderCopy(app.rend, welcome_window.trees.tex, NULL, &welcome_window.trees.rect);

    SDL_RenderCopy(app.rend, welcome_window.game_title.tex, NULL, &welcome_window.game_title.rect);
    SDL_RenderCopy(app.rend, welcome_window.newgame.tex, NULL, &welcome_window.newgame.rect);
    SDL_RenderCopy(app.rend, welcome_window.controls.tex, NULL, &welcome_window.controls.rect);
    SDL_RenderCopy(app.rend, welcome_window.details.tex, NULL, &welcome_window.details.rect);
}