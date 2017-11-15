/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** Définition fonctions libmy
*/

#ifndef _MY_H_
# define _MY_H_
#include <stdarg.h>
int sum_stdarg(int i, int nb, ...);

void my_putchar(char c, int *count);
char *my_strcpy(char *dest, char const *src);
void my_put_nbr(int nb, int base, int *count);
void my_swap(int *nb1, int *nb2);
int my_putstr(char const *str, int *count);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_revstr(char *str);

int my_printf(char *str, ...);
int my_specifiers(char *str, int *i, va_list list, int *count);
int flags(char *str, int i, int *count);

int specifier_long_l(char *str, int *i, va_list list, int *count);
int specifier_long_ll(char *str, int *i, va_list list, int *count);
int specifier_simple(char *str, int i, va_list list, int *count);
int specifier_uns(char *str, int i, va_list list, int *count);

void uns_long(unsigned long long int nbr, int base, int *count);
void int_long(long long int nbr, int base, int *count);
void uns_long_lock(unsigned long long int nbr, int base, int *count);
void no_printable(char *str, int *count);

#endif
