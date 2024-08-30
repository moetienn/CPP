# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/26 09:44:58 by moetienn          #+#    #+#              #
#    Updated: 2024/08/28 09:45:32 by moetienn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= PmergeMe

SRC= main.cpp \
	 PmergeMe.cpp

OBJ= $(SRC:.cpp=.o)

HEADERS= PmergeMe.hpp
	
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