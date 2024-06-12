# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/06 13:01:11 by moetienn          #+#    #+#              #
#    Updated: 2024/06/12 08:28:44 by moetienn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Instanciation
SRC= main.cpp \
	Dog.cpp \
	Cat.cpp \
	Animal.cpp \
	WrongAnimal.cpp \
	WrongCat.cpp \
	Brain.cpp
OBJ= $(SRC:.cpp=.o)
HDR= Dog.hpp \
	Cat.hpp \
	Animal.hpp \
	WrongAnimal.hpp \
	WrongCat.hpp \
	Brain.hpp
CC= c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ) $(HDR)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)