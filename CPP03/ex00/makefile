# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/06 13:01:11 by moetienn          #+#    #+#              #
#    Updated: 2024/06/06 13:02:46 by moetienn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= ClapTrap
SRC= main.cpp \
	ClapTrap.cpp
OBJ= $(SRC:.cpp=.o)
HDR= ClapTrap.hpp
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