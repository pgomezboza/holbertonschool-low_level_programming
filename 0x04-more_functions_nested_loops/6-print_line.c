#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: n is the number of times the character '_' should be printed.
 * Description: use _putchar to print
 */

void print_line(int n)
{
	int p = 0;

	while (p < n)
	{
		_putchar('_');

		p++;
	}
	_putchar('\n');
}
