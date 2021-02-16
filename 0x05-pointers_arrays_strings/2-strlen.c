#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: char type pointer.
 * Description:
 * Return: int as length of string.
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}
