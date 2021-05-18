OUT = Final
SEARCHPATH += codes
vpath %.cpp $(SEARCHPATH)
vpath %.h $(SEARCHPATH)

DEPS += preprocessors.h structures.h variablesLevelOne.h variablesLevelTwo.h

_OBJS +=drawScoreBoard.o drawLevelOnePlayerName.o drawLife.o drawLevelOneCompleted.o variablesLevelOne.o variablesLevelTwo.o resetAll.o loadScoreFile.o drawWelcomeWindow.o drawNewgameWindow.o drawCoins.o  drawObstacle.o drawLevelTwoWindow.o   drawLevelOneWindow.o updateScore.o updatePlayerName.o draw.o  collisionLevelOne.o  CollisionsLevelTwo.o drawCoinsEffect.o drawlevelTwoBox.o  drawLevelTwoCoins.o  drawLevelTwoBombandPlane.o drawLevelTwoLife.o
_OBJS += initiateScoreBoard.o initiateLife.o initiateLevelOneCompleted.o initiateWelcomeWindow.o initiateNewGameWindow.o  initiateLevelTwoWindow.o initiateCoins.o  initiateObstacle.o initiateLevelOneWindow.o initialize.o inputs.o initiateCoinsEffect.o initiateLevelTwoBox.o initiateLevelTwoCoins.o initiateLevelTwoBombandPlane.o initiateLevelTwoLife.o
_OBJS += main.o

OBJS = $(patsubst %,$(OUT)/%,$(_OBJS))

# top-level rule to create the program.
all: $(PROG)

# compiling other source files.
$(OUT)/%.o: %.cpp %.h $(DEPS)
	@mkdir -p $(OUT)
	$(CC) $(CFLAGS) $(CXXFLAGS) -c -o $@ $<
	
# cleaning everything that can be automatically recreated with "make".
clean:
	$(RM) -rf $(OUT) $(PROG)