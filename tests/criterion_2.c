/*
** EPITECH PROJECT, 2017
** Units tests exemple
** File description:
** .c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect_all_std_2(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(specifiers_mod, mod_test, .init = redirect_all_std_2)
{
	my_printf("%%");
	cr_assert_stdout_eq_str("%");
}

Test(specifiers_mod, mod_test_2, .init = redirect_all_std_2)
{
	my_printf("%%%%");
	cr_assert_stdout_eq_str("%%");
}

Test(specifiers_binary, binary_test_1, .init = redirect_all_std_2)
{
	my_printf("%b", 125);
	cr_assert_stdout_eq_str("1111101");
}

Test(flags_space, space_test_1, .init = redirect_all_std_2)
{
	my_printf("% d", 125);
	cr_assert_stdout_eq_str(" 125");
}
