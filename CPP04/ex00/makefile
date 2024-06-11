# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/06 13:01:11 by moetienn          #+#    #+#              #
#    Updated: 2024/06/11 08:56:58 by moetienn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= polymorphisme
SRC= main.cpp \
	Dog.cpp \
	Cat.cpp \
	Animal.cpp \
	WrongAnimal.cpp \
	WrongCat.cpp
OBJ= $(SRC:.cpp=.o)
HDR= Dog.hpp \
	Cat.hpp \
	Animal.hpp \
	WrongAnimal.hpp \
	WrongCat.hpp
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