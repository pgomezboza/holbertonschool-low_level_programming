#include "holberton.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: char type string
 * @s2: char type string
 *
 * Return: negative, positive or zero.
 */

int _strcmp(char *s1, char *s2)
{
	int n;

	for (n = 0; s1[n] != '\0' || s2[n] != '\0'; n++)
	{
		if (s1[n] != s2[n])
		{
			return (s1[n] - s2[n]);
		}
	}

	return (0);
}
