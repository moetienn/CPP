# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moetienn <moetienn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/12 08:48:55 by moetienn          #+#    #+#              #
#    Updated: 2024/06/12 09:25:56 by moetienn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Bureaucrat
SRC= Bureaucrat.cpp \
	 main.cpp
OBJ= $(SRC:.cpp=.o)
HEADERS= Bureaucrat.hpp
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