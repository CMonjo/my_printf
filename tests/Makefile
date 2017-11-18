##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile project
##

CC	=	gcc

CFLAGS	=	-Wall -Wextra -W -Werror -I ../include/

LIB	=	-L ../ -lmy

CRIT	=	-lcriterion -lgcov

SRC	=	criterion.c	\
		criterion_2.c	\
		criterion_3.c	\
		criterion_4.c	\
		criterion_5.c	\
		criterion_6.c

OBJ	=	$(SRC:.c=.o)

NAME	=	units

all: $(NAME)

$(NAME): 	$(OBJ)
	make -C ../
	$(CC) $(OBJ) -o $(NAME) $(CFLAGS) $(LIB) $(CRIT)
	rm -f $(OBJ)
	make clean -C ../

clean:
	rm -f $(OBJ)
	make clean -C ../

fclean: clean
	rm -f $(NAME)
	make fclean -C ../

re: fclean all
