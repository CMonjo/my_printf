/*
** EPITECH PROJECT, 2017
** Units tests exemple
** File description:
** Exemple on my_strlen
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

unsigned long long int llu = 12345678997654;
unsigned long long int llo = 12345678997654;
unsigned long long int llx = 12345678997654;
unsigned long long int llX = 12345678997654;
unsigned long int lu = 12345678997654;
unsigned long int lo = 12345678997654;
unsigned long int lx = 12345678997654;
unsigned long int lX = 12345678997654;
long int ld = 12345678997654;
long int li = 12345678997654;
long long int lld = 12345678997654;
long long int lli = 12345678997654;
int i = 1675;
char *ptr = "azertyuiop";

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

Test(specifiers_mod, mod_test, .init = redirect_all_std)
{
	my_printf("%%");
	cr_assert_stdout_eq_str("%");
}

Test(specifiers_mod, mod_test_2, .init = redirect_all_std)
{
	my_printf("%%%%");
	cr_assert_stdout_eq_str("%%");
}

Test(specifiers_binary, binary_test_1, .init = redirect_all_std)
{
	my_printf("%b", 125);
	cr_assert_stdout_eq_str("1111101");
}

// Test(specifiers_ptr, ptr_test_1, .init = redirect_all_std)
// {
// 	my_printf("%p", );
// 	cr_assert_stdout_eq_str("1111101");
// }


Test(flags_space, space_test_1, .init = redirect_all_std)
{
	my_printf("% d", 125);
	cr_assert_stdout_eq_str(" 125");
}

Test(flags_plus, plus_test_1, .init = redirect_all_std)
{
	my_printf("%+d", 125);
	cr_assert_stdout_eq_str("+125");
}

Test(flags_hashtag, hashtag_test_1, .init = redirect_all_std)
{
	my_printf("%#o", 987989);
	cr_assert_stdout_eq_str("03611525");
}

Test(flags_hashtag, hashtag_test_2, .init = redirect_all_std)
{
	my_printf("%#x", 123456789);
	cr_assert_stdout_eq_str("0x75bcd15");
}

Test(flags_hashtag, hashtag_test_3, .init = redirect_all_std)
{
	my_printf("%#X", 987654321);
	cr_assert_stdout_eq_str("0X3ADE68B1");
}








Test(specifiers_l, specifiers_l_test_1, .init = redirect_all_std)
{
	my_printf("%li", li);
	cr_assert_stdout_eq_str("12345678997654");
}

Test(specifiers_l, specifiers_l_test_2, .init = redirect_all_std)
{
	my_printf("%ld", ld);
	cr_assert_stdout_eq_str("12345678997654");
}

Test(specifiers_l, specifiers_l_test_3, .init = redirect_all_std)
{
	my_printf("%lu", lu);
	cr_assert_stdout_eq_str("12345678997654");
}
Test(specifiers_l, specifiers_l_test_4, .init = redirect_all_std)
{
	my_printf("%lo", lo);
	cr_assert_stdout_eq_str("263516363724226");
}
Test(specifiers_l, specifiers_l_test_5, .init = redirect_all_std)
{
	my_printf("%lx", lx);
	cr_assert_stdout_eq_str("b3a73cfa896");
}
Test(specifiers_l, specifiers_l_test_6, .init = redirect_all_std)
{
	my_printf("%lX", lX);
	cr_assert_stdout_eq_str("B3A73CFA896");
}








Test(specifiers_ll, specifiers_ll_test_1, .init = redirect_all_std)
{
	my_printf("%lli", lli);
	cr_assert_stdout_eq_str("12345678997654");
}
Test(specifiers_ll, specifiers_ll_test_2, .init = redirect_all_std)
{
	my_printf("%lld", lld);
	cr_assert_stdout_eq_str("12345678997654");
}
Test(specifiers_ll, specifiers_ll_test_3, .init = redirect_all_std)
{
	my_printf("%llu", llu);
	cr_assert_stdout_eq_str("12345678997654");
}
Test(specifiers_ll, specifiers_ll_test_4, .init = redirect_all_std)
{
	my_printf("%llo", llo);
	cr_assert_stdout_eq_str("263516363724226");
}
Test(specifiers_ll, specifiers_ll_test_5, .init = redirect_all_std)
{
	my_printf("%llx", llx);
	cr_assert_stdout_eq_str("b3a73cfa896");
}
Test(specifiers_ll, specifiers_ll_test_6, .init = redirect_all_std)
{
	my_printf("%llX", llX);
	cr_assert_stdout_eq_str("B3A73CFA896");
}
