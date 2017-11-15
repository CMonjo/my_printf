##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## my_printf
##

CC	=	gcc

CFLAGS	=	-W -Wall -Werror -Wextra -I include/

LIB	=	-L. -lmy

SRC 	=	my_printf.c				\
		flags/flags.c				\
		specifiers/specifiers_defaults.c	\
		specifiers/specifiers_length.c		\
		put_base/guess_base.c			\
		put_base/guess_base_2.c			\
		lib/my_getnbr.c				\
		lib/my_putchar.c			\
		lib/my_putstr.c				\
		lib/my_revstr.c				\
		lib/my_strcpy.c				\
		lib/my_strlen.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	rm -f $(OBJ)

main:
	gcc tests/main_test.c $(CFLAGS) $(LIB)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all
