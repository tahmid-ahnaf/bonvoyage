#include <SDL2/SDL_mixer.h>
extern float welcomeWindowSkyAnimationSpeed;
extern float welcomeWindowMountainsAnimationSpeed;
extern float welcomeWindowBirdsAnimationSpeed;

extern float levelOneSkyAnimationSpeed;
extern float levelOneMountainsAnimationSpeed;
extern float levelOneTreeShadeAnimationSpeed;
extern float levelOneTreesAnimationSpeed;
extern float levelOneTrackAnimationSpeed;
extern float levelOneCloudsAnimationSpeed;

// extern float levelTwoSkyAnimationSpeed;
// extern float levelTwoMountainsAnimationSpeed;
// extern float levelTwoTreeShadeAnimationSpeed;
// extern float levelTwoTrackAnimationSpeed;
// extern float levelTwoCloudsAnimationSpeed;

extern int levelOneCharacterFramewidth, levelOneCharacterFrameheight;
extern int levelOneCharacterTexturewidth, levelOneCharacterTextureheight;

extern float levelOneCharacterFrametime;
extern int levelOneCharacterPrevtime;
extern int levelOneCharacterCurrentime;
extern float levelOneCharacterDeltatime;

extern int levelOneTigerFramewidth, levelOneTigerFrameheight;
extern int levelOneTigerTexturewidth, levelOneTigerTextureheight;

extern float levelOneTigerFrametime;
extern int levelOneTigerPrevtime;
extern int levelOneTigerCurrentime;
extern float levelOneTigerDeltatime;

extern float levelOneMoveSpeed;

extern int levelOneHighScore;
extern char levelOneScoreString[10];
extern char levelOneHighScoreString[10];
extern char scoreBoardPlayerNameString[100][10];
extern char scoreBoardPlayerScoreString[100][10];

extern int space;
extern int levelOneCurrentScore;

extern float levelOneCharacterXposition,
    levelOneCharacterYposition;

extern int levelOneCharacterJumpCurrenttime, levelOneCharacterJumpPrevtime;
extern float levelOneCharacterJumpDeltatime, levelOneCharacterJumpFrametime;

extern int levelOneBackgroundCurrenttime, levelOneBackgroundPrevtime;
extern float levelOneBackgroundDeltatime, levelOneBackgroundFrametime;

extern char playerName[100];
extern char playerNameList[100][100], showPlayerNameList[10000][100];
extern int scoreList[100];
extern int levelOnePointEffectAnimationSpeed[5];
extern int levelOnePointAnimationSpeed[5];
extern int levelOneObstacleAnimationSpeed[3];
extern int levelOneLifeAnimationSpeed[3];

extern int curzonPosition;
extern int count;
extern int tigerJumped;
extern float tigerYposition;
extern int lifeSize;
extern Mix_Music *background, *whoWeWantToBe;
extern Mix_Chunk *levelOneCoingain, *tigerRoar, *hitLevelOne, *gameOver, *click;