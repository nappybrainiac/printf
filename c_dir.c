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
	int fmt_len = 0;
	int i;

	i = va_arg(ap, int);
	if (i)
	{
		print_char(i);
		fmt_len++;
	}
	else
	{
		fmt_len = 0;
	}
	return (fmt_len);
}
