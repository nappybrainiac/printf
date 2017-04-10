#include "holberton.h"

/**
 * print_number - returns the character values of an integer.
 *
 * @n: the integer to be printed
 * Return: always void.
 */

void print_number(int n)
{
	int numStore;
	int numPrint;
	int power = 10;

	numStore = n;

	if (n == 0)
		print_char('0');

	if (n < 0)
	{
		print_char('-');
		n = n * -1;
	}

	numStore = n;

	while (numStore > 9)
	{
		numStore = numStore / 10;
		power = power * 10;
	}

	numStore = n;
	power = power / 10;

	while (numStore > 0)
	{
		numPrint = numStore / power;
		print_char(48 + numPrint);
		numStore = numStore % power;
		power = power / 10;
	}
}
