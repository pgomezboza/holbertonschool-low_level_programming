#include "holberton.h"

/**
 * print_rev - function that prints a string, in reverse.
 * @s: char array string type.
 * Description:
 */

void print_rev(char *s)
{
	int i = 0, ln = 0;

	while (s[ln] != '\0')
	{
		ln++;
	}

	for (i = ln - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
