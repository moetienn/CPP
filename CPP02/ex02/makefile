# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/03 12:13:38 by moetienn          #+#    #+#              #
#    Updated: 2024/06/03 12:13:42 by moetienn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= a.out
SRC= main.cpp \
	Fixed.cpp
OBJ= $(SRC:.cpp=.o)
HDR= Fixed.hpp
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