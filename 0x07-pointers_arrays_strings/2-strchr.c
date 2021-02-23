#include "holberton.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: char array string to search
 * @c: char to find
 * Description:
 * Return: 'NULL' if char not found, or pointer to first occurrence of char 'c'
 */

char *_strchr(char *s, char c)
{
	int m;

	for (m = 0; *(s + m); m++)
	{
		if (*(s + m) == c)
		{
			return (s + m);
		}
	}

	return (s + m);
}
