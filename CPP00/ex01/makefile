NAME= PhoneBook
SRC= create_contact.cpp \
	PhoneBook.cpp \
	main.cpp
OBJ= $(SRC:.cpp=.o)
HEADERS= PhoneBook.hpp \
	contact.hpp
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