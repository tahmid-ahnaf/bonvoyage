#include "loadScoreFile.h"

void LoadScoreFile()
{
    FILE *fp;
    fp = fopen("score.txt", "r"); // OPENING FILE
    fscanf(fp, "%d", &variables.levelOneVars.highScore);
    fclose(fp);
}

void updateHighScoreOnFile()
{
    variables.levelOneVars.highScore = variables.levelOneVars.currentScore;
    FILE *fp = fopen("new.txt", "w");
    fprintf(fp, "%d", variables.levelOneVars.highScore);
    remove("score.txt");
    rename("new.txt", "score.txt");
    sprintf(variables.levelOneVars.highScoreString, "%i", variables.levelOneVars.highScore);
    fclose(fp);
}

//level 2

void LoadScoreFileLevel2()
{
    FILE *fp;
    fp = fopen("scoreleveltwo.txt", "r"); // OPENING FILE
    fscanf(fp, "%d", &variables.levelTwoVars.highScore);
    fclose(fp);
}

void updateHighScoreOnFileLevel2()
{
    variables.levelTwoVars.highScore = variables.levelTwoVars.currentScore;
    FILE *fp = fopen("new.txt", "w");
    fprintf(fp, "%d", variables.levelTwoVars.highScore);
    remove("scoreleveltwo.txt");
    rename("new.txt", "scoreleveltwo.txt");
    sprintf(variables.levelTwoVars.highScoreString, "%i", variables.levelTwoVars.highScore);
    fclose(fp);
}