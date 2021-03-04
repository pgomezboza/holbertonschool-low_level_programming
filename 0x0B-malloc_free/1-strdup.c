#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - function that copies a string given as a parameter.
 * @str: string to be duplicated.
 * Return: pointer to the duplicated string.
 */

char *_strdup(char *str)
{

	int i = 0, c = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	s = malloc(i * sizeof(*s) + 1);

	if (s == NULL)
		return (NULL);

	while (c < i)
	{
		s[c] = str[c];
		c++;
	}

	s[c] = '\0';

	return (s);
}
