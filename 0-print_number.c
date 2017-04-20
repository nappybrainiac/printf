#include "holberton.h"

/**
 * print_number - returns the character values of an integer.
 * @n: the integer to be printed
 *
 * Return: always void.
 */

void print_number(int n)
{
	int len, ncopy, num;

	if (n < 0) /* For negative numbers */
	{
		print_char('-');
	}
	else
	{
		n *= -1 ; /* to print +ve numbers*/
	}
	ncopy = n;
	for (len = 1; ncopy < -9; len *= 10) /* What multiple of 10?*/
	{
		ncopy /= 10;
	}
	for (ncopy = n; len != 0; len /= 10) /* print each number */
	{
		num = (ncopy / len) * -1;
		print_char(num + '0');
		ncopy %= len;
	}
}
