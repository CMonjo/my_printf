/*
** EPITECH PROJECT, 2017
** Units tests exemple
** File description:
** .c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect_all_std_4(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(specifiers_ld, specifiers_l_test_2, .init = redirect_all_std_4)
{
	long int ld = 12345678997654;

	my_printf("%ld", ld);
	cr_assert_stdout_eq_str("12345678997654");
}

Test(specifiers_lu, specifiers_l_test_3, .init = redirect_all_std_4)
{
	unsigned long int lu = 12345678997654;

	my_printf("%lu", lu);
	cr_assert_stdout_eq_str("12345678997654");
}

Test(specifiers_lo, specifiers_l_test_4, .init = redirect_all_std_4)
{
	unsigned long int lo = 12345678997654;

	my_printf("%lo", lo);
	cr_assert_stdout_eq_str("263516363724226");
}

Test(specifiers_lx, specifiers_l_test_5, .init = redirect_all_std_4)
{
	unsigned long int lx = 12345678997654;

	my_printf("%lx", lx);
	cr_assert_stdout_eq_str("b3a73cfa896");
}
