#include "holberton.h"

/**
 * _puts - function that prints a string
 * @str: char array string type
 * Description: use _putchar
 */

void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}

