CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Iinclude
SRC = src/battle.c src/goblin.c src/miner.c src/welcome.c src/main.c
OBJ = $(SRC:.c=.o)
TARGET = game

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJ) $(TARGET)