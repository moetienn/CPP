# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/03 11:41:53 by moetienn          #+#    #+#              #
#    Updated: 2024/06/03 11:58:00 by moetienn         ###   ########.fr        #
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