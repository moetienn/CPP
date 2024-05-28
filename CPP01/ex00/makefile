NAME= Zombie
SRC= main.cpp \
	 Zombie.cpp \
	 newZombie.cpp \
	 randomChump.cpp
OBJ= $(SRC:.cpp=.o)
HEADERS= Zombie.hpp
CC= c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98 -pedantic

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)