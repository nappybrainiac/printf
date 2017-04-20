#include <stdio.h>
#include <limits.h>
#include "../holberton.h"

int main(void)
{
	char *s = "Holberton";
	char *line = "echo \"\\bin\\ls\" | .\\hsh";
	char c = 'H';
        int len, len2, len3, len4;
	int d = INT_MAX;
	int i = INT_MIN;

	len = _printf("Ours: [%c]-[%s]-[%d]-[%i]-[%%]\n", c, s, d, i);
	len2 = printf("Theirs: [%c]-[%s]-[%d]-[%i]-[%%]\n", c, s, d, i);
	len3 = _printf("%s\n", line);
	len4 = printf("%s\n", line);

	_printf("Ours: my printf -- [ %d ] | original printf -- [ %d ]\n", len, len2);
	printf("Theirs: my printf -- [ %d ] | original printf -- [ %d ]\n", len, len2);

	_printf("%s, %i\n", line, len3);
	printf("%s, %i\n", line, len4);

	return (0);
}
