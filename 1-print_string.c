#include "holberton.h"


/**
 * print_string - This function prints a string
 * starting at a specific pointer.
 * @str: this variable points to the string.
 *
 * Return: void
 */

void print_string(char *str)
{
	while (*str != '\0')
	{
		print_char(*str);
		str += 1;
	}
}
