#include "holberton.h"

/**
 * print_number - returns the character values of an integer.
 * @n: the integer to be printed
 *
 * Return: always void.
 */

 void print_number(int n)
 {
	int len, ncopy, count, digit;

	count = 0;
	if (n < 0)
	{
		count += print_char('-');
	}
	else
	{
		n = -n;
	}

	for (len = 1, ncopy = n; ncopy < -9; len *= 10)
	{
		ncopy /= 10;
	}

	for (ncopy = n; len != 0; len /= 10)
	{
		digit = (ncopy / len) * -1;
		count += print_char(digit + '0');
		ncopy %= len;
	}

}
