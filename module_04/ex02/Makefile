NAME	= aanimals
CC		= c++
CPPFLAGS	= -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp\
		Animal.cpp\
		AAnimal.cpp\
		Brain.cpp\
		Dog.cpp\
		Cat.cpp\
		WrongAnimal.cpp\
		WrongCat.cpp\

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