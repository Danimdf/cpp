# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Dmonteir < dmonteir@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 23:58:54 by Dmonteir          #+#    #+#              #
#    Updated: 2023/02/16 23:58:56 by Dmonteir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook
CC		= c++
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98
SRC = 	main.cpp\
		PhoneBook.cpp\
		Contact.cpp\

VPATH	= ./srcs/

OBJ		= $(SRC:%.cpp=$(OBJ_DIR)/%.o)
OBJ_DIR	= ./obj

RM		= rm -rf

all:	$(dir() $(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)


$(OBJ_DIR)/%.o:	%.cpp
	$(MAKE) create_obj
	$(CC) $(CPPFLAGS) -c $< -o $@

create_obj:
		mkdir -p $(OBJ_DIR)

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)
		rmdir $(OBJ_DIR)

re:		fclean all

.PHONY= all clean fclean re $(NAME)