/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** .c
*/

#include <stdio.h>
#include <stdarg.h>
#include "my.h"

int specifier_uns(char *str, int i, va_list list, int *count)
{
	switch (str[i + 1]) {
		case 'o':
			uns_base(va_arg(list, unsigned int), 8, count);
			break;
		case 'x':
			uns_base(va_arg(list, unsigned int), 16, count);
			break;
		case 'X':
			uns_base_lock(va_arg(list, unsigned int), 16, count);
			break;
		case 'u':
			uns_base(va_arg(list, unsigned int), 10, count);
			break;
		case 'p':
			my_putstr("0x", count);
			uns_base_long(va_arg(list, unsigned long), 16, count);
			break;
	}
	return (0);
}
int specifier_simple(char *str, int i, va_list list, int *count)
{
	switch (str[i + 1]) {
		case 'c':
			my_putchar(va_arg(list, int), count);
			break;
		case 's':
			my_putstr(va_arg(list, char *), count);
			break;
		case 'i':
		case 'd':
			my_put_nbr(va_arg(list, int), 10, count);
			break;
		case '%':
			my_putchar('%', count);
			break;
		// case 'lu':
		// 	uns_base_long(va_arg(list, unsigned long), 10);
		// 	break;
		// case 'ld':
		// 	put_long(va_arg(list, long), 10);
		// 	break;
	}
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
			if (str[i + 1] == '+' || str[i + 1] == '-' || str[i + 1] == ' ' || str[i + 1] == '#' || str[i + 1] == '.') {
				printf("A envoyer dans la fonction flags\n");
				i++;
			}
			specifier_uns(str, i, list, &count);
			specifier_simple(str, i, list, &count);
			i++;
		} else
			my_putchar(str[i], &count);
		i++;
		va_end(list);
	}
	return (count);
}
