#include "holberton.h"

/**
 * string_toupper - function change all lowercase letters to uppercase.
 * @s: string
 * Return: s
 */

char *string_toupper(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] > 'a' && s[n] < 'z')
		{
			s[n] -= 32;
		}
	}

	return (s);
}
