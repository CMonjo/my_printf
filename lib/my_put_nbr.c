/*
** EPITECH PROJECT, 2017
** Putnbr
** File description:
** Lib put nbr
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

void my_put_nbr(int nbr, int base, int *count)
{
	char b[] = "0123456789abcdef";
	char *digit = malloc(sizeof(char) * 50);
	int i = 0;
	int carry = 0;

	if (nbr == -2147483648) {
		write(1, "-2147483648", 11);
		count = count + 11;
	}
	if (nbr < 0) {
		my_putchar('-', count);
		nbr = nbr * -1;
	}
	while (nbr != 0) {
		carry =  nbr % base;
		nbr = nbr / base;
		digit[i] = b[carry];
		i++;
	}
	my_putstr(my_revstr(digit), count);
}
