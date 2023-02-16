# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 22:11:06 by coder             #+#    #+#              #
#    Updated: 2023/02/17 00:06:33 by Dmonteir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
CC		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98 -g -pedantic

SRC =	megaphone.cpp

OBJ		= $(SRC:%.cpp=$(OBJ_DIR)/%.o)
OBJ_DIR	= ./obj

RM		= rm -rf

all:		obj_dir $(NAME)

$(NAME):	obj_dir $(OBJ)
				$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o:	%.cpp
		$(CC) $(CFLAGS) -c $< -o $@

obj_dir:
		mkdir -p $(OBJ_DIR)

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)
		rmdir $(OBJ_DIR)

re:		fclean all

.PHONY= all clean fclean re $(NAME)