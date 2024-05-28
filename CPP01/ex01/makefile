NAME= Horde
SRC= main.cpp \
	 Zombie.cpp \
	 zombieHorde.cpp
OBJ= $(SRC:.cpp=.o)
HEADERS= Zombie.hpp
CC= c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)