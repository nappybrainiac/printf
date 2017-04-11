#include <limits.h>
#include <stdio.h>
#include "../holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char * s = "holberton";
	char * try = "Let's try to printf a simple sentence.\n";
	char c;
	int len;
        int len1;
	int len2;

	c = 'G';

        len = _printf("Let's try to printf a simple sentence.\n");
        len1 = printf("Let's try to printf a simple sentence.\n");
	len2 = str_len(try);

	_printf("s = %s, c = %c\n", s, c);
	printf("s = %s, c = %c\n", s, c);

	printf("try is %d\n", len2);

	_printf("Length:[%d, %i]\n", len, len);
        printf("Length:[%d, %i]\n", len1, len1);

	_printf("[%s][%c][%d][%i][%%]\n", "girl's mad", 'H', 21, 32);
	printf("[%s][%c][%d][%i][%%]\n", "girl's mad", 'H', 21, 32);
	return (0);
}
