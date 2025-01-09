EXEC = programme

SRC = main.c abr.c

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -g

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)
	
clean:
	rm -f $(OBJ)
	
distclean: clean
	rm $(EXEC)
	rm -f *~
	
main.o: abr.h
abr.o: abr.h
