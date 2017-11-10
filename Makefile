##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## my_printf
##

CC	=	gcc

CFLAGS	=	-W -Wall -Werror -Wextra -I include/

LIB	=	-L lib/my -lmy

SRC 	=	my_printf.c	\
		guess_base.c

OBJ 	=	$(SRC:.c=.o)

NAME	= 	my_printf

all : $(NAME)

$(NAME) : $(OBJ)
	make -C ./lib/my/
	$(CC) $(OBJ) $(CFLAGS) $(LIB) -o $(NAME)
	rm -f $(OBJ)
	make clean -C ./lib/my/

clean :
	rm -f $(OBJ)
	make clean -C ./lib/my/

fclean : clean
	rm -f $(NAME)
	make fclean -C ./lib/my/

re : fclean all
