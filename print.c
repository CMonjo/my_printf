/*
** EPITECH PROJECT, 2017
** Main
** File description:
** my_printf
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "my.h"

int main()
{
	int i = 5;
	long m = 123456789;
	char *str = "azertyuiop";

	my_printf("\nmy : %d\n\n", my_printf("%d", 10));
	printf("\nprintf : %d\n\n", printf("%d", 10));

	my_printf("%.5s\n\n", "1234567890");
	printf("%.5s\n\n", "1234567890");
	printf("%.6d\n\n", 7);
	printf("%zd\n\n", m);

	my_printf("\n'p' = [%p]", &str[i]);
	printf("printf = %p\n\n", &str[i]);

	my_printf("'i' = [%i]", i);
	printf("printf = %i\n\n", i);

	my_printf("'d' = [%d]", 34);
	printf("printf = %d\n\n", 34);

	my_printf("'c' = [%c] %c", 'c', 65);
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

	return (my_printf("%s", "string de test"));
}
