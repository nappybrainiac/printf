#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - returns a string output to stdout with the common directives
 * (%s, %c, %i, etc) accounted for.
 * @format: refers to the string to output including all directives.
 *
 * Return: Returns the length (in bytes) of the string printed.
 */

int _printf(const char *format, ...)
{
	long int i, j, length, fmt_len;
	char *s;
	va_list ap;

	va_start(ap, format);
	length = 0; fmt_len = 0;
	for (j = 0; format[j] != '\0'; j++)
	{
		if (format[j] != '%')
		{
			print_char(format[j]);
			length++; continue;
		}
		switch (format[j + 1])
		{
			case 'c': /* a single character */
				i = va_arg(ap, int);
				print_char(i);
				fmt_len++; break;
			case 's': /* a string */
				s = va_arg(ap, char *);
				if (!s)
				{
					fmt_len = 0; break;
				}
				print_string(s);
				fmt_len += str_len(s); break;
			case '%': /* print the % sign */
				print_char('%');
				length++; break;
			case 'd': case 'i': /* for decimals and integers*/
				i = va_arg(ap, int);
				print_number(i);
				fmt_len += count_digits(i); break;
		}
		j++;
	}
	va_end(ap);
	return (length + fmt_len);
}
