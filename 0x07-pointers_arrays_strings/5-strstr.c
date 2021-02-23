/**
 * _strstr - function that locates a substring.
 * @haystack: string to search through
 * @needle: string to search for
 * Description:
 * Return: pointer to the beginning of the located substring,
 * or 'NULL' if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;
		while (*b == *haystack && *haystack != 0 && *b != 0)
		{
			haystack++;
			b++;
		}
		if (*b == 0)
		{
			return (a);
		}
		haystack = a + 1;
	}

	return (0);
}
