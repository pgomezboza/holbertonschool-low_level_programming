#include "holberton.h"

/**
 * puts_half - function that prints second half of a string.
 * @str: char array string type
 * Description: if number of characters is odd, print the last n characters,
 * using n = (length_of_the_string - 1) / 2
 */

void puts_half(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		n++;
	}

	n++;

	for (n /= 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
