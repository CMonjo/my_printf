/*
** EPITECH PROJECT, 2017
** Units tests exemple
** File description:
** .c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect_all_std_6(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(specifiers_llo, specifiers_ll_test_4, .init = redirect_all_std_6)
{
	unsigned long long int llo = 12345678997654;

	my_printf("%llo", llo);
	cr_assert_stdout_eq_str("263516363724226");
}

Test(specifiers_llx, specifiers_ll_test_5, .init = redirect_all_std_6)
{
	unsigned long long int llx = 12345678997654;

	my_printf("%llx", llx);
	cr_assert_stdout_eq_str("b3a73cfa896");
}

Test(specifiers_llXX, specifiers_ll_test_6, .init = redirect_all_std_6)
{
	unsigned long long int llX = 12345678997654;

	my_printf("%llX", llX);
	cr_assert_stdout_eq_str("B3A73CFA896");
}

Test(flags_plus, plus_test_1, .init = redirect_all_std_6)
{
	my_printf("%+d", 125);
	cr_assert_stdout_eq_str("+125");
}
