
/**
 * str_len - returns the length of a string.
 * @s: The pointer to the first letter of the string.
 *
 * Return: length (in bytes).
 */

int str_len(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s += 1;
		i++;
	}
	return (i);
}
