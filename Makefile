##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## my_printf
##

CC	=	gcc

CFLAGS	=	-W -Wall -Werror -Wextra -I include/

LIB	=	-L. -lmy

SRC 	=	my_printf.c	\
		flags.c		\
		specifiers.c	\
		guess_base.c	\
		my_getnbr.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_strcpy.c	\
		my_strlen.c	\
		my_strcpy.c	\
		sum_stdarg.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	rm -f $(OBJ)

main:
	gcc print.c $(CFLAGS) $(LIB)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all
