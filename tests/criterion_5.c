/*
** EPITECH PROJECT, 2017
** Units tests exemple
** File description:
** .c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect_all_std_5(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(specifiers_lXX, specifiers_l_test_6, .init = redirect_all_std_5)
{
	unsigned long int lX = 12345678997654;

	my_printf("%lX", lX);
	cr_assert_stdout_eq_str("B3A73CFA896");
}

Test(specifiers_lli, specifiers_ll_test_1, .init = redirect_all_std_5)
{
	long long int lli = 12345678997654;

	my_printf("%lli", lli);
	cr_assert_stdout_eq_str("12345678997654");
}

Test(specifiers_lld, specifiers_ll_test_2, .init = redirect_all_std_5)
{
	long long int lld = 12345678997654;

	my_printf("%lld", lld);
	cr_assert_stdout_eq_str("12345678997654");
}

Test(specifiers_llu, specifiers_ll_test_3, .init = redirect_all_std_5)
{
	unsigned long long int llu = 12345678997654;

	my_printf("%llu", llu);
	cr_assert_stdout_eq_str("12345678997654");
}
