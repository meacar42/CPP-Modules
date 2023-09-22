NAME = Animal

CC = c++

SRC = Animal.cpp main.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
FLAGS = -std=c++98 -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC)  -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all