#include "holberton.h"

/**
 * print_number: this function returns a string to standard output.
 *
 * @n: integer to be returned as a string.
 *
 * Returns - a string.
 *
 */

void print_number(int n)
{
	int numStore = n;
	int numPrint;
	int power = 10;

	if (n == -2147483648) /* If the number is INT_MIN */
	{
		print_char('-');
		print_char('2');
		n = 147483648;
	}
	if (n == 2147483647) /* If the number is INT_MAX */
	{
		print_char('2');
		n = 147483647;
	}
	if (n == 0) /* If the number is 0 print '0' */
	{
		print_char('0');
	}
	if (n < 0) /* if the no. is -ve, print '-', then the number */
	{
		print_char('-');
		n = n * -1;
	}
	numStore = n;
	while (numStore > 9) /* to find multiple of 10 */
	{
		numStore = numStore / 10;
		power = power * 10;
	}
	numStore = n;
	power = power / 10;
	while (numStore > 0) /* to print out individual numbers */
	{
		numPrint = numStore / power;
		print_char(48 + numPrint);
		numStore = numStore % power;
		power = power / 10;
	}
}
