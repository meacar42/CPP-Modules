NAME = find

CC = c++

SRC = main.cpp Span.cpp
FLAGS = -std=c++98 -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC)  -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all