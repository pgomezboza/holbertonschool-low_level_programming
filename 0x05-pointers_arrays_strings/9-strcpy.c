#include "holberton.h"

/**
 * *_strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0).
 * @dest: char type string.
 * @src: char type string.
 * Description: copy string  pointer 'src' to buffer pointed to by 'dest'.
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int ln = 0, n = 0;

	while (src[ln] != '\0')
	{
		ln++;
	}

	while (n < ln)
	{
		dest[n] = src[n];
		n++;
	}

	dest[n] = '\0';

	return (dest);
}
