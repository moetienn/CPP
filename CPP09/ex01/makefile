# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/26 09:44:58 by moetienn          #+#    #+#              #
#    Updated: 2024/08/26 09:45:47 by moetienn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= RPN

SRC= main.cpp \
	 RPN.cpp

OBJ= $(SRC:.cpp=.o)

HEADERS= RPN.hpp
	
CC= c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)