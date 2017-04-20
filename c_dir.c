#include "holberton.h"
#include <stdlib.h>

/**
 * c_dir - returns the length of the integer/decimal.
 * @ap: the va_list where the argument is a member.
 *
 * Return: Returns the length (in bytes) of the string printed.
 */

int c_dir(va_list ap)
{
	int fmt_len;
	int i;

	fmt_len = 0;
	i = va_arg(ap, int);
	if (i)
	{
		fmt_len = print_char(i);
	}
	else
	{
		fmt_len += print_char(0);
	}
	return (fmt_len);
}
