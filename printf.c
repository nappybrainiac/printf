#include <stdarg.h>
#include <stdlib.h>
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
	long int j, length, fmt_len;
	va_list ap;

	va_start(ap, format);
	length = 0;
	fmt_len = 0; /* from the directives */
	for (j = 0; format[j] != '\0'; j++)
	{
		if (format[j] != '%') /* Any other char but % */
		{
			print_char(format[j]);
			length++; continue;
		}
		/* if there is an empty space beside % */
		if (format[j + 1] == '\0' || format[j + 1] == ' ')
		{
			return (-1);
		}
		fmt_len += replace(format[j + 1], ap);
		j++;
	}
	va_end(ap);
	return (length + fmt_len);
}
