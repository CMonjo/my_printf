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
	char str[5];
	my_strcpy(str, "toto");
	str[1] = 5;
	unsigned long long int llu = 12345678997654;
	unsigned long long int llo = 12345678997654;
	unsigned long long int llx = 12345678997654;
	unsigned long long int llX = 12345678997654;
	unsigned long int lu = 12345678997654;
	unsigned long int lo = 12345678997654;
	unsigned long int lx = 12345678997654;
	unsigned long int lX = 12345678997654;
	long int ld = 12345678997654;
	long int li = 12345678997654;
	long long int lld = 12345678997654;
	long long int lli = 12345678997654;
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

	int i = 1675;
	char *ptr = "azertyuiop";

	// printf("[% i]\n", 34);
	// printf("[% i]\n", -34);
	// printf("5s = %5s\n\n", "hello world");
	// printf(".5s = %.7s\n\n", "hello world");
	// printf(".5d = %.5d\n\n", 123567);
	// printf("espace print = %2d\n\n", 9);
	//printf("%*d\n", 15);
	// printf("%.6d\n\n", 7);

	my_printf("\n'S' && 'LEN' my : %d\n", my_printf("%S", str));
	printf("\nprintf : %d\n\n", printf("%d", 12340));

	//FAIRE UN (COUNT) POUR TOUS LES SPECIFIERS

	my_printf("'b' = %b\n\n", 125);

	my_printf("'ld' = %ld\n", ld);
	printf("printf = %ld\n\n", ld);

	my_printf("'li' = %li\n", li);
	printf("printf = %li\n\n", li);

	my_printf("'lu' = %lu\n", lu);
	printf("printf = %lu\n\n", lu);

	my_printf("'lo' = %lo\n", lo);
	printf("printf = %lo\n\n", lo);

	my_printf("'lx' = %lx\n", lx);
	printf("printf = %lx\n\n", lx);

	my_printf("'lX' = %lX\n", lX);
	printf("printf = %lX\n\n", lX);

	my_printf("'lld' = %lld\n", lld);
	printf("printf = %lld\n\n", lld);

	my_printf("'lli' = %lli\n", lli);
	printf("printf = %lli\n\n", lli);

	my_printf("'llu' = %llu\n", llu);
	printf("printf = %llu\n\n", llu);

	my_printf("'llo' = %llo\n", llo);
	printf("printf = %llo\n\n", llo);

	my_printf("'llx' = %llx\n", llx);
	printf("printf = %llx\n\n", llx);

	my_printf("'llX' = %llX\n", llX);
	printf("printf = %llX\n\n", llX);

	my_printf("'hi' = %hi\n", hi);
	printf("printf = %hi\n\n", hi);

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

	my_printf("' ' 'i' = [% i]\n", i);
	printf("printf = [% i]\n\n", i);

	my_printf("'+' 'd' pos = %+d\n", 34);
	printf("printf = %+d\n\n", 34);

	my_printf("'+' 'd' neg = %+d\n", -34);
	printf("printf = %+d\n\n", -34);

	my_printf("'c' = %c\n", 'c');
	printf("printf = %c\n\n", 'c');

	my_printf("'s' = %s\n", "string");
	printf("printf = %s\n\n", "string");

	my_printf("'u' = %u\n", 1357924680);
	printf("printf = %u\n\n", 1357924680);

	my_printf("'%%' = %%\n");
	printf("printf = %%\n\n");

	my_printf("'#' 'o' = %#o\n", 987989);
	printf("printf = %#o\n\n", 987989);

	my_printf("'#' 'x' = %#x\n", 123456789);
	printf("printf = %#x\n\n", 123456789);

	my_printf("'#' 'X' = %#X\n", 987654321);
	printf("printf = %#X\n\n", 987654321);

	return (0);
}
