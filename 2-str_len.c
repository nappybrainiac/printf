/**
 * str_len - returns the length of a string.
 * @s: The pointer to the first letter of the string.
 *
 * Return: length (in bytes).
 */

int str_len(char *s)
{
	char *end = s;

	while (*end)
		end++;
	return (end - s);
}
