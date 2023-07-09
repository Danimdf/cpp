# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/07 19:04:45 by dmonteir          #+#    #+#              #
#    Updated: 2023/07/09 19:07:56 by dmonteir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= harl
CC		= c++
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp\
		Harl.cpp\

VPATH	= ./srcs/

OBJ		= $(SRC:%.cpp=$(OBJ_DIR)/%.o)
OBJ_DIR	= ./obj

RM		= rm -rf

all:		$(NAME)

create_obj = @mkdir -p $(OBJ_DIR)

$(NAME):	$(OBJ)
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o:	%.cpp
	$(call create_obj)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)
		rmdir $(OBJ_DIR)

re:		fclean all

.PHONY= all clean fclean re $(NAME)