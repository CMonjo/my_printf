/*
** EPITECH PROJECT, 2017
** Units tests exemple
** File description:
** .c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect_all_std_3(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(flags_hashtag, hashtag_test_1, .init = redirect_all_std_3)
{
	my_printf("%#o", 987989);
	cr_assert_stdout_eq_str("03611525");
}

Test(flags_hashtag, hashtag_test_2, .init = redirect_all_std_3)
{
	my_printf("%#x", 123456789);
	cr_assert_stdout_eq_str("0x75bcd15");
}

Test(flags_hashtag, hashtag_test_3, .init = redirect_all_std_3)
{
	my_printf("%#X", 987654321);
	cr_assert_stdout_eq_str("0X3ADE68B1");
}

Test(specifiers_l, specifiers_l_test_1, .init = redirect_all_std_3)
{
	long int li = 12345678997654;

	my_printf("%li", li);
	cr_assert_stdout_eq_str("12345678997654");
}
