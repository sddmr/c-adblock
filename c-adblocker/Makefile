CC = gcc
CFLAGS = -Wall -Iinclude
SRC = src/main.c src/adblock.c
OBJ = $(SRC:.c=.o)
TARGET = c-adblocker

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJ) $(TARGET)
