NAME = FileReplace
CC = g++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp  Harl.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

.PHONY: all clean