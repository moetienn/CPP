# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/28 11:32:17 by moetienn          #+#    #+#              #
#    Updated: 2024/05/28 12:31:55 by moetienn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= violence
SRC= main.cpp \
	Weapon.cpp \
	HumanA.cpp \
	HumanB.cpp
OBJ= $(SRC:.cpp=.o)
CC= c++
HEADER= Weapon.hpp \
	HumanA.hpp \
	HumanB.hpp
CPPFLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)