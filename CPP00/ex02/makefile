NAME= account_check
SRC= tests.cpp \
	Account.cpp
OBJ= $(SRC:.cpp=.o)
HEADERS= Account.hpp
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