/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** Définition fonctions libmy
*/

#ifndef _MY_H_
# define _MY_H_

void my_putchar(char c, int *count);
void my_put_nbr(int nb, int base, int *count);
void my_swap(int *nb1, int *nb2);
int my_putstr(char const *str, int *count);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int sum_stdarg(int i, int nb, ...);
//int disp_stdarg(char *s, ...);
int my_printf(char *str, ...);
char *my_revstr(char *str);
void guess_base(int nbr, char const *base, int *count);
void uns_base(unsigned int nbr, int base, int *count);
void uns_base_lock(unsigned int nbr, int base, int *count);
void uns_base_long(unsigned long nbr, int base, int *count);
void put_long(long nbr, int base, int *count);
#endif
