#include "holberton.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: string.
 *
 * Return: the resulting string 's';
 */

char *leet(char *s)
{
	int m, n;

	char *ch1 = "aAeEoOtTlL";
	char *ch2 = "4433007711";

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; n < 10; n++)
		{
			if (s[m] == ch1[n])
			{
				s[m] = ch2[n];
			}
		}
	}

	return (s);
}
