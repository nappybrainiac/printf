#include <stdlib.h>
#include "holberton.h"

/**
 * s_dir - returns the length of string.
 * @ap: the va_list where the argument is a member.
 *
 * Return: Returns the length (in bytes) of the string printed.
 */

int s_dir(va_list ap)
{
	int fmt_len;
	char *str;

	fmt_len = 0;
	str = va_arg(ap, char *);
	if (!str)
	{
		fmt_len += print_string("(null)");
	}
	else
	{
		fmt_len = print_string(str);
	}
	return (fmt_len);
}
