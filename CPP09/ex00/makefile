# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/27 06:54:50 by moetienn          #+#    #+#              #
#    Updated: 2024/08/27 06:55:23 by moetienn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= btc

SRC= main.cpp \
	 BitcoinExchange.cpp \

OBJ= $(SRC:.cpp=.o)

HEADERS= BitcoinExchange.hpp
	
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