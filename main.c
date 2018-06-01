/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** .c
*/

#include <stdio.h>
#include <stdarg.h>
#include "my.h"

int main()
{
	unsigned long int lo = 12345678997654;
	unsigned long int lx = 12345678997654;
	unsigned long int lX = 12345678997654;
	long int ld = -12345678997654;
	long int li = -12345678997654;
	long long int lld = -12345678997654;
	long long int lli = -12345678997654;
	long long int llx = -12345678997654;
	long long int llX = -12345678997654;
	int i = 1675;
	short int hi = 32761;
	short int hd = -31761;
	unsigned short int hu = 32761;
	unsigned short int ho = 32761;
	unsigned short int hx = 32761;
	unsigned short int hX = 32761;
	signed char hhi = 126;
 	signed char hhd = -124;
	unsigned char hhu = 245;
	unsigned char hho = 245;
	unsigned char hhx = 245;
	unsigned char hhX = 245;
	char *ptr = "azertyuiop";
	char *s = "Hello World!";

	my_printf("'s' = %s\n", s);
	printf("printf = %s\n\n", s);

	my_printf("'i' && 'd' = %d\n", i);
	printf("printf = %d\n\n", i);

	my_printf("'ld' = %ld\n", ld);
	printf("printf = %ld\n\n", ld);

	my_printf("'llx' = %llx\n", llx);
	printf("printf = %llx\n\n", llx);

	my_printf("'lX' = %llX\n", llX);
	my_printf("'llX' = %llX\n", llX);
	printf("printf = %llX\n\n", llX);

	my_printf("'hi' = %hi\n", hi);
	printf("printf = %hi\n\n", hi);

	my_printf("'b' = %b\n\n", i);

	my_printf("'hd' = %hd\n", hd);
	printf("printf = %hd\n\n", hd);

	my_printf("'hu' = %hu\n", hu);
	printf("printf = %hu\n\n", hu);

	my_printf("'ho' = %ho\n", ho);
	printf("printf = %ho\n\n", ho);

	my_printf("'hx' = %hx\n", hx);
	printf("printf = %hx\n\n", hx);

	my_printf("'hX' = %hX\n", hX);
	printf("printf = %hX\n\n", hX);

	my_printf("'hhi' = %hhi\n", hhi);
	printf("printf = %hhi\n\n", hhi);

	my_printf("'hhd' = %hhd\n", hhd);
	printf("printf = %hhd\n\n", hhd);

	my_printf("'hhu' = %hhu\n", hhu);
	printf("printf = %hhu\n\n", hhu);

	my_printf("'hho' = %hho\n", hho);
	printf("printf = %hho\n\n", hho);

	my_printf("'hhx' = %hhx\n", hhx);
	printf("printf = %hhx\n\n", hhx);

	my_printf("'hhX' = %hhX\n", hhX);
	printf("printf = %hhX\n\n", hhX);

	my_printf("'p' = %p\n", &ptr[i]);
	printf("printf = %p\n\n", &ptr[i]);

	my_printf("'s' = %s\n", "string");
	printf("printf = %s\n\n", "string");

	my_printf("'u' = %u\n", 1357924680);
	printf("printf = %u\n\n", 1357924680);

	my_printf("'%%' = %%\n");
	printf("printf = %%\n\n");

	my_printf("'#' 'X' = %#X\n", 987654321);
	printf("printf = %#X\n\n", 987654321);
	my_printf("'u' = %u\n", 1357924680);
	printf("printf = %u\n\n", 1357924680);
	return (0);
}
