#include "drawNewgameWindow.h"

void updateAnimationSpeedForNewgameWindow()
{
    variables.AnimationSpeed.welcomeWindow.sky -= 2;
    if (variables.AnimationSpeed.welcomeWindow.sky < -welcomeWindowSky.rect.w)
    {
        variables.AnimationSpeed.welcomeWindow.sky = 0;
    }

    variables.AnimationSpeed.welcomeWindow.birds += 3;
    if (variables.AnimationSpeed.welcomeWindow.birds > welcomeWindowBirds.rect.w)
    {
        variables.AnimationSpeed.welcomeWindow.birds -= 2 * welcomeWindowBirds.rect.w;
    }
    variables.AnimationSpeed.welcomeWindow.mountains -= 1;
    if (variables.AnimationSpeed.welcomeWindow.mountains < -welcomeWindowMountains.rect.w)
    {
        variables.AnimationSpeed.welcomeWindow.mountains = 0;
    }
}
void drawNewgameWindowFunction()
{
    updateAnimationSpeedForNewgameWindow();
    welcomeWindowSky.rect.x = variables.AnimationSpeed.welcomeWindow.sky;
    welcomeWindowBirds.rect.x = variables.AnimationSpeed.welcomeWindow.birds;
    welcomeWindowMountains.rect.x = variables.AnimationSpeed.welcomeWindow.mountains;
    SDL_RenderClear(app.rend);

    SDL_RenderCopy(app.rend, welcomeWindowSky.tex, NULL, &welcomeWindowSky.rect);
    welcomeWindowSky.rect.x = variables.AnimationSpeed.welcomeWindow.sky + welcomeWindowSky.rect.w;
    SDL_RenderCopy(app.rend, welcomeWindowSky.tex, NULL, &welcomeWindowSky.rect);

    SDL_RenderCopy(app.rend, welcomeWindowBirds.tex, NULL, &welcomeWindowBirds.rect);
    welcomeWindowBirds.rect.x = variables.AnimationSpeed.welcomeWindow.birds + welcomeWindowBirds.rect.w;
    SDL_RenderCopy(app.rend, welcomeWindowBirds.tex, NULL, &welcomeWindowBirds.rect);

    SDL_RenderCopy(app.rend, welcomeWindowMountains.tex, NULL, &welcomeWindowMountains.rect);
    welcomeWindowMountains.rect.x = variables.AnimationSpeed.welcomeWindow.mountains + welcomeWindowMountains.rect.w;
    SDL_RenderCopy(app.rend, welcomeWindowMountains.tex, NULL, &welcomeWindowMountains.rect);

    SDL_RenderCopy(app.rend, welcomeWindowTrees.tex, NULL, &welcomeWindowTrees.rect);

    SDL_RenderCopy(app.rend, welcomeWindowGameTitle.tex, NULL, &welcomeWindowGameTitle.rect);
    SDL_RenderCopy(app.rend, newgameWindowlevelOneButton.tex, NULL, &newgameWindowlevelOneButton.rect);
    SDL_RenderCopy(app.rend, newgameWindowlevelTwoButton.tex, NULL, &newgameWindowlevelTwoButton.rect);
    SDL_RenderCopy(app.rend, back.tex, NULL, &back.rect);
}