CC = gcc
CFLAGS = -Wall -Wextra
SRC = goblin.c battle.c welcome.c miner.c
TARGET = game

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)