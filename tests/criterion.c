/*
** EPITECH PROJECT, 2017
** Units tests exemple
** File description:
** .c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(specifiers_str, simple_string_2, .init = redirect_all_std)
{
	my_printf("%s", "hello world");
	cr_assert_stdout_eq_str("hello world");
}

Test(specifiers_char, char_test, .init = redirect_all_std)
{
	my_printf("%c", 's');
	cr_assert_stdout_eq_str("s");
}

Test(specifiers_int, int_test_1, .init = redirect_all_std)
{
	my_printf("%d", 123456789);
	cr_assert_stdout_eq_str("123456789");
}

Test(specifiers_int, int_test_2, .init = redirect_all_std)
{
	my_printf("%i", 987654321);
	cr_assert_stdout_eq_str("987654321");
}
