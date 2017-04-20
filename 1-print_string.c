#include "holberton.h"

/**
 * print_string - This function prints a string
 * starting at a specific pointer.
 * @str: this variable points to the string.
 *
 * Return: void
 */

int print_string(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i += print_char(*str);
		str += 1;
	}
	return (i);
}
