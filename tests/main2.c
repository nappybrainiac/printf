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
	/*char * nostring = "\0";*/
	char c;
	int len, len1, len2, /*len3,*/ len4, len6;

	c = 'c';

        len = _printf("Let's try to printf a simple sentence.\n");
        len1 = printf("Let's try to printf a simple sentence.\n");
	len2 = str_len(try);
	/*len3 = _printf("\0");*/
	len4 = _printf("%%");
	len6 = printf("%%");

	_printf("Ours: s = %s, c = %c\n", s, c);
	printf("Theirs: s = %s, c = %c\n", s, c);

	_printf("Empty String\n");
	_printf("%s\n");

	_printf("Invalid Strings\n");
	_printf("%i\n");


	_printf("Ours: Percentage\n");
	_printf("%%, %i\n", len4);

	printf("Theirs: Percentage\n");
	printf("%% %i\n", len6);

	printf("try is %d\n", len2);

	_printf("Length:[%d, %i]\n", len, len);
        printf("Length:[%d, %i]\n", len1, len1);

	_printf("[%s][%c][%d][%i][%%]\n", "girl's mad", 'H', 21, 32);
	printf("[%s][%c][%d][%i][%%]\n", "girl's mad", 'H', 21, 32);
	return (0);
}
