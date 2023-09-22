NAME = Claptrap

CC = c++

SRC = ClapTrap.cpp main.cpp ScavTrap.cpp
FLAGS = -std=c++98 -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC)  -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all