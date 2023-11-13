EXEC = main
OBJ = main.o lrc.o ./pos/console.o ./mplayer/start_mplayer.o
FLAGS = -Wall -g
CC = gcc
$(EXEC):$(OBJ)
	$(CC)	$(OBJ)	-o	$(EXEC)	$(FLAGS)
%.o:%.c %.h
	$(CC) -c $< -o $@
clear:
	rm $(EXEC) *.o
