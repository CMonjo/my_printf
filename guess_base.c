/*
** EPITECH PROJECT, 2017
** my_putnbr_base
** File description:
** Libmy
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "my.h"

void uns_base(unsigned int nbr, int base, int *count)
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
	my_putstr(my_revstr(digit), count);
}

void uns_base_lock(unsigned int nbr, int base, int *count)
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
	my_putstr(my_revstr(digit), count);
}

void uns_base_long(unsigned long nbr, int base, int *count)
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
	my_putstr(my_revstr(digit), count);
}

void put_long(long nbr, int base, int *count)
{
	char b[] = "0123456789abcdef";
	char *digit = malloc(sizeof(char) * 50);
	int i = 0;
	long carry = 0;

	while (nbr != 0) {
		carry =  nbr % base;
		nbr = nbr / base;
		digit[i] = b[carry];
		i++;
	}
	my_putstr(my_revstr(digit), count);
}

void no_printable(char *str, int *count)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] > 31 && str[i] < 127)
			my_putchar(str[i], count);
		else if (str[i] > 0 && str[i] < 8) {
			my_putstr("\\00", count);
			uns_base((int)str[i], 8, count);
		}
		else {
			my_putstr("\\0", count);
			uns_base((int)str[i], 8, count);
		}
		i++;
	}
}
