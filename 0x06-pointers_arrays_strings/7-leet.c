#include "holberton.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: string s;
 */

char *leet(char *s)
{
	int n, m;

	char *ch1 = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char *ch2 = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (n = 0; s[n] != '\0'; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if (s[n] == ch1[m])
			{
				s[n] = ch2[m];
			}
		}
	}

	return (s);
}
