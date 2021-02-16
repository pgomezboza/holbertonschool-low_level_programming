#include "holberton.h"

/**
 * print_rev - function that prints a string, in reverse.
 * @s: char array string type.
 * Description:
 */

void print_rev(char *s)
{
	int n;

	while (s[n] != '\0')
	{
		n++;
	}

	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}

	_putchar('\n');
}
