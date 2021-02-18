#include "holberton.h"

/**
 * _strcat - function to concatenate two strings
 * @dest: char type string
 * @src: char type string
 * Return: pointer to resulting string 'dest'
 */

char *_strcat(char *dest, char *src)
{
	int n, c;

	for (n = 0; dest[n] != '\0'; n++)
	{
		;
	}

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[n] = src[c];
		n++;
	}

	dest[n] = '\0';

	return (dest);
}
