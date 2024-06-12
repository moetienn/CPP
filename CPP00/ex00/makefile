NAME= megaphone
SRC= Megaphone.cpp
OBJ= $(SRC:.cpp=.o)
CC= c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)