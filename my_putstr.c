/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** Display one by one a characters of string
*/

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

int my_putstr(char const *str, int *count)
{
	int var = 0;

	while (str[var] != '\0') {
		my_putchar(str[var], count);
		var = var + 1;
	}
	return (0);
}
