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

	length = 0;
	fmt_len = 0; /* will come from the replaced c, s, i, d. */
	if (!format) /* if format is null */
	{
		return (-1);
	}
	else
	{
		va_start(ap, format);
	}
	for (j = 0; format[j] != '\0'; j++)
	{
		if (format[j] != '%') /* Any other char but % */
		{
			print_char(format[j]);
			length++;
		}
		else
		{
			j++;
			/* if there is nothing beside % */
			if (format[j] == '\0')
			{
				return (-1);
			}
			else
			{
				fmt_len += replace(format[j], ap);
			}
		}
	}
	va_end(ap);
	return (length + fmt_len);
}
