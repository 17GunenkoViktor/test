CC=gcc
CFLAGS = -c -Wall -Wextra -Werror -MMD -o
LIBCHS = obj/src/libchess
CHS = obj/src/chess
SCHS = src/chess
SLIBCHS = src/libchess

all: bin/chessw

bin/chessw: $(CHS)/main.o $(LIBCHS)/F_Move.o $(LIBCHS)/P_Move.o $(LIBCHS)/Print_err.o $(LIBCHS)/Print.o $(LIBCHS)/StartDesk.o
		$(CC) -Wall -Wextra -Werror -o $@ $^

$(CHS)/main.o: $(SCHS)/main.c 
		$(CC) $(CFLAGS) $(CHS)/main.o $(SCHS)/main.c

$(LIBCHS)/F_Move.o: $(SLIBCHS)/F_Move.c 
		$(CC) $(CFLAGS) $(LIBCHS)/F_Move.o $(SLIBCHS)/F_Move.c

$(LIBCHS)/P_Move.o: $(SLIBCHS)/P_Move.c 
		$(CC) $(CFLAGS) $(LIBCHS)/P_Move.o $(SLIBCHS)/P_Move.c

$(LIBCHS)/Print_err.o: $(SLIBCHS)/Print_err.c 
		$(CC) $(CFLAGS) $(LIBCHS)/Print_err.o $(SLIBCHS)/Print_err.c

$(LIBCHS)/Print.o: $(SLIBCHS)/Print.c 
		$(CC) $(CFLAGS) $(LIBCHS)/Print.o $(SLIBCHS)/Print.c

$(LIBCHS)/StartDesk.o: $(SLIBCHS)/StartDesk.c 
		$(CC) $(CFLAGS) $(LIBCHS)/StartDesk.o $(SLIBCHS)/StartDesk.c 

-include F_Move.d P_Move.d Print.d Print_err.d StartDesk.d 

clean:
		rm -rf $(CHS)/*.o $(CHS)/*.d $(LIBCHS)/*.o $(LIBCHS)/*.d bin/chessw