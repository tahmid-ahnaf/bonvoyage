OUT = Final
SEARCHPATH += codes
vpath %.cpp $(SEARCHPATH)
vpath %.h $(SEARCHPATH)

DEPS += preprocessors.h structures.h

_OBJS += resetAll.o loadScoreFile.o drawWelcomeWindow.o drawNewgameWindow.o drawCoins.o drawbox.o drawLevelTwoCoins.o drawLevelTwoWindow.o   drawLevelOneWindow.o updateScore.o draw.o drawbombandplane.o collisions.o drawheart.o
_OBJS += initiateWelcomeWindow.o initiateNewGameWindow.o  initiateLevelTwoWindow.o initiateCoins.o initiatebox.o initiateLevelTwoCoins.o  initiateLevelOneWindow.o initialize.o inputs.o initiatebombandplane.o initiateheart.o
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
