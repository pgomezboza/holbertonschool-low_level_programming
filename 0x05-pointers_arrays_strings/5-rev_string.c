#include "holberton.h"

/**
 * rev_string - function that reverses a string.
 * @s: char array string type.
 */

void rev_string(char *s)
{
	int n = 0, ln1 = 0, ln2 = 0;
	char t = ' ';

	while (s[ln1] != '\0')
	{
		ln1++;
	}

	ln2 = ln1 - 1;

	for (n = 0; n < ln1 / 2; ln2--,  n++)
	{
		t = s[n];
		s[n] = s[ln2];
		s[ln2] = t;
	}
}


