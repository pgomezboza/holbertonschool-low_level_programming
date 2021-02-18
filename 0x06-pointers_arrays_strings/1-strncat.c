#include "holberton.h"

/**
 * _strncat - function that concatenates two strings  in 'n' bytes.
 * @dest: char type destination string
 * @src: char type source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string 'dest'
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i=0; dest[i] != '\0'; i++)
	{
		;
	}

	for (j=0; src[j] != '\0' && j < n; i++, j++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
