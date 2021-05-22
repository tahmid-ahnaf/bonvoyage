#include "loadScoreFile.h"
FILE *fp;
void LoadScoreFile()
{
    int i = 0, j;

    fp = fopen("score.txt", "r"); // OPENING FILE

    while (fscanf(fp, "%s %d\n", &playerNameList[i], &scoreList[i]) != EOF)
    {
        sprintf(showPlayerNameList[scoreList[i]], "%s", playerNameList[i]);
        i++;
    }
    int tmp;
    for (i = 0; scoreList[i]; i++)
    {
        for (j = i + 1; scoreList[j]; j++)
        {
            if (scoreList[i] <= scoreList[j])
            {
                tmp = scoreList[j];
                scoreList[j] = scoreList[i];
                scoreList[i] = tmp;
            }
        }
        sprintf(scoreBoardPlayerNameString[i], "%s", playerNameList[i]);
    }
    fclose(fp);
    sprintf(levelOneHighScoreString, "%i", scoreList[0]);
}

void updateHighScoreOnFile()
{
    levelOneHighScore = levelOneCurrentScore;

    fp = fopen("score.txt", "a");
    if (variables.newScore == 1 && variables.gameOver == 1 && levelOneHighScore > 0)
    {
        fprintf(fp, "%s ", playerName);
        fprintf(fp, "%d\n", levelOneHighScore);
    }

    sprintf(levelOneHighScoreString, "%i", levelOneHighScore);
    fclose(fp);
}

void LevelTwoLoadScoreFile()
{
    FILE *fp;
    fp = fopen("scoreleveltwo.txt", "r"); // OPENING FILE
    fscanf(fp, "%d", &highScore);
    fclose(fp);
}

void updateLevelTwoHighScoreOnFile()
{
    highScore = currentScore;
    FILE *fp = fopen("new.txt", "w");
    fprintf(fp, "%d", highScore);
    remove("scoreleveltwo.txt");
    rename("new.txt", "scoreleveltwo.txt");
    sprintf(highScoreString, "%i", highScore);
    fclose(fp);
}

