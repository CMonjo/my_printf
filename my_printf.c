/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** .c
*/

#include <stdio.h>
#include <stdarg.h>
#include "my.h"

int my_printf(char *str, ...)
{
	va_list list;
	int i = 0;

	va_start(list, str);
	while (str[i] != '\0') {
		if (str[i] == '%') {
			//APPEL DES FONCTIONS
			switch (str[i + 1]) {
			case 'c':
				my_putchar(va_arg(list, int));
				break;
			case 's':
				my_putstr(va_arg(list, char *));
				break;
			case 'i':
			case 'd':
				my_put_nbr(va_arg(list, int));
				break;
			case 'o':
				uns_base(va_arg(list, unsigned int), 8);
				break;
			case 'x':
				uns_base(va_arg(list, unsigned int), 16);
				break;
			case 'X':
				uns_base_lock(va_arg(list, unsigned int), 16);
				break;
			case 'u':
				uns_base(va_arg(list, unsigned int), 10);
				break;
			case 'p':
				my_putstr("0x");
				uns_base_l(va_arg(list, unsigned long), 16);
				break;
			case '%':
				my_putchar('%');
				break;
			}
			//case 'lu' unsigned long
			//cass 'ld' long
			i++;
		} else
			my_putchar(str[i]);
		i++;
		va_end(list);
	}
	my_putchar('\n');
	return (0);
}

int main()
{
	int i = 5;
	long m = 123456789;
	char *str = "azertyuiop";

	printf("%.6d\n", 7);
	printf("%zd\n", m);

	my_printf("\n'p' = [%p]", &str[i]);
	printf("printf = %p\n\n", &str[i]);

	my_printf("'i' = [%i]", i);
	printf("printf = %i\n\n", i);

	my_printf("'d' = [%d]", 34);
	printf("printf = %d\n\n", 34);

	my_printf("'c' = [%c]", 'c');
	printf("printf = %c\n\n", 'c');

	my_printf("'s' = [%s]", "string");
	printf("printf = %s\n\n", "string");

	my_printf("'%%' = [%%]");
	printf("printf = %%\n\n");

	my_printf("'o' = %o", 987989);
	printf("printf = %o\n\n", 987989);

	my_printf("'x' = %x", 123456789);
	printf("printf = %x\n\n", 123456789);

	my_printf("'X' = %X", 987654321);
	printf("printf = %X\n\n", 987654321);

	my_printf("'u' = %u", 1357924680);
	printf("printf = %u\n\n", 1357924680);
	return (0);
}
