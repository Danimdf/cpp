NAME	= phonebook
CC		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98 -g -pedantic

SRC = 	main.cpp\
		PhoneBook.cpp\
		Contact.cpp\

VPATH	= srcs

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