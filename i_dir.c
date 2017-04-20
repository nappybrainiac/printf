#include "holberton.h"

/**
 * id_dir - returns the length of a number.
 * @ap: the va_list where the argument is a member.
 *
 * Return: Returns the length (in bytes) of the string printed.
 */

int id_dir(va_list ap)
{
	int fmt_len = 0;
	int i;

	i = va_arg(ap, int);
	if (!i)
	{
		print_number(0);
		fmt_len++;
	}
	else
	{
		print_number(i);
		fmt_len = count_digits(i);
	}
	return (fmt_len);
}
