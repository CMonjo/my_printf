/*
** EPITECH PROJECT, 2017
** my_putnbr_base
** File description:
** Libmy
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void uns_base(unsigned int nbr, int base)
{
	char b[] = "0123456789abcdef";
	char *digit = malloc(sizeof(char) * 50);
	int i = 0;
	int carry = 0;

	while (nbr != 0) {
		carry =  nbr % base;
		nbr = nbr / base;
		digit[i] = b[carry];
		i++;
	}
	my_putstr(my_revstr(digit));
}

void uns_base_lock(unsigned int nbr, int base)
{
	char b[] = "0123456789ABCDEF";
	char *digit = malloc(sizeof(char) * 50);
	int i = 0;
	int carry = 0;

	while (nbr != 0) {
		carry =  nbr % base;
		nbr = nbr / base;
		digit[i] = b[carry];
		i++;
	}
	my_putstr(my_revstr(digit));
}

void uns_base_l(unsigned long nbr, int base)
{
	char b[] = "0123456789abcdef";
	char *digit = malloc(sizeof(char) * 50);
	int i = 0;
	int carry = 0;

	while (nbr != 0) {
		carry =  nbr % base;
		nbr = nbr / base;
		digit[i] = b[carry];
		i++;
	}
	my_putstr(my_revstr(digit));
}
