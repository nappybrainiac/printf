#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * replace - replaces the directive with the appropriate argument.
 * @c: The character to be replaced by an argument.
 * @ap: The va_list that contains the argument.
 *
 * Return: Returns the length (in bytes) of the string printed.
 */

int replace(char c, va_list ap)
{
	int fmt_len;

	fmt_len = 0;
	switch (c)
	{
		case 'c': /* a single character */
			fmt_len += c_dir(ap);
			break;
		case 's': /* a string */
			fmt_len += s_dir(ap);
			break;
		case '%': /* print the % sign */
			fmt_len += print_char('%');
			break;
		case 'd': case 'i': /* for decimals and integers*/
			fmt_len += id_dir(ap);
			break;
		default:
			print_char(c);
			fmt_len += print_char(c);
			break;
	}
	return (fmt_len);
}
