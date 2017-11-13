/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** .c
*/

#include <stdio.h>
#include <stdarg.h>
#include "my.h"

int compare (char *str, int *i, va_list list, int *count)
{
	if (str[(*i) + 1] == '+' || str[(*i) + 1] == '-' || str[(*i) + 1] == ' '
	|| str[(*i) + 1] == '#' || str[(*i) + 1] == '0') {
		flags(str, *i, count);
		(*i)++;
	}
	if ((str[(*i) + 1] <= 48 && str[(*i) + 1] >= 57) ||
	str[(*i) + 1] == '*') {
		//width(str, *i, count); Pour les %number/type utiliser getnbr
		(*i)++;
	}
	if (str[(*i) + 1] == '.' && str[(*i) + 2] <= 48 &&
	str[(*i) + 2] >= 57) {
		//precision(str, *i, count);
		(*i)++;
	}
	specifier_uns(str, *i, list, count);
	specifier_simple(str, *i, list, count);
	specifier_long(str, i, list, count);
	(*i)++;
	return (0);
}

int my_printf(char *str, ...)
{
	va_list list;
	int i = 0;
	int count = 0;

	va_start(list, str);
	while (str[i] != '\0') {
		if (str[i] == '%') {
			compare(str, &i, list, &count);
		} else
			my_putchar(str[i], &count);
		i++;
		va_end(list);
	}
	return (count);
}
