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
			break;<
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
		case 'S':
			no_printable(va_arg(list, char*), count);
			break;
		case 'b':
			uns_base(va_arg(list, unsigned int), 2, count);
			break;
	}
	return (0);
}
