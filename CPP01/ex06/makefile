# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/03 09:22:11 by moetienn          #+#    #+#              #
#    Updated: 2024/06/03 09:22:22 by moetienn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= harlFilter
SRC= main.cpp \
	Harl.cpp
OBJ= $(SRC:.cpp=.o)
HDR= Harl.hpp
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