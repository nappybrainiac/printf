#include "holberton.h"

/**
 * count_digits - counts the number of digits in a number.
 * @n: The character to print
 *
 * Return: count, which is the number of digits.
 */

int count_digits(int n)
{
	int count;

	count = 0;
	while (n != 0)
	{
		n /= 10;
		++count;
	}
	return (count);
}
