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

    //level two

    fp = fopen("scoreleveltwo.txt", "r"); // OPENING FILE
    i = 0;
    while (fscanf(fp, "%s %d\n", &levelTwoPlayerNameList[i], &levelTwoScoreList[i]) != EOF)
    {
        sprintf(showLevelTwoPlayerNameList[levelTwoScoreList[i]], "%s", levelTwoPlayerNameList[i]);
        i++;
    }
    for (i = 0; levelTwoScoreList[i]; i++)
    {
        for (j = i + 1; levelTwoScoreList[j]; j++)
        {
            if (levelTwoScoreList[i] <= levelTwoScoreList[j])
            {
                tmp = levelTwoScoreList[j];
                levelTwoScoreList[j] = levelTwoScoreList[i];
                levelTwoScoreList[i] = tmp;
            }
        }

        sprintf(levelTwoScoreBoardPlayerNameString[i], "%s", levelTwoPlayerNameList[i]);
    }
    fclose(fp);

    sprintf(levelTwoHighScoreString, "%i", levelTwoScoreList[0]);
}

void updateHighScoreOnFile()
{
    levelOneHighScore = levelOneCurrentScore;

    fp = fopen("score.txt", "a");
    if (variables.newScore == 1 && variables.saveScore == 1 && levelOneHighScore > 0)
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
    fp = fopen("scoreleveltwo.txt", "a");

    if (variables.newLevelTwoScore == 1 && variables.levelTwoCompleted == 1 && highScore > 0)
    {
        fprintf(fp, "%s ", levelTwoPlayerName);
        fprintf(fp, "%d\n", highScore);
    }

    sprintf(levelTwoHighScoreString, "%i", highScore);
    fclose(fp);
}
