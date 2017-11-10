/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** Définition fonctions libmy
*/

#ifndef _MY_H_
# define _MY_H_

void my_putchar(char c);
int my_put_nbr(int nb);
void my_swap(int *nb1, int *nb2);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int sum_stdarg(int i, int nb, ...);
int disp_stdarg(char *s, ...);
int my_printf(char *str, ...);
char *my_revstr(char *str);
void guess_base(int nbr, char const *base);
void uns_base(unsigned int nbr, int base);
void uns_base_lock(unsigned int nbr, int base);
void uns_base_l(unsigned long nbr, int base);

#endif
