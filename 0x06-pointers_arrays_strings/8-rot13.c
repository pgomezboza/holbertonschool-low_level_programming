#include "holberton.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: string encoded
 *
 * Return: the resulting string 's'
 */

char *rot13(char *s)
{
	int n, m;

	char *ch1 = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char *ch2 = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (n = 0; s[n] != '\0'; n++)
	{
		for (m = 0; ch1[m] != '\0'; m++)
		{
			if (s[n] == ch1[m])
			{
				s[n] = ch2[m];
				break;
			}
		}
	}

	return (s);
}
