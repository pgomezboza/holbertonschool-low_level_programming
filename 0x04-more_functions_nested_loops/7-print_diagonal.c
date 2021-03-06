#include "holberton.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the '\' char is printed
 * Description: Can only use _putchar to print
*/

void print_diagonal(int n)
{
	int c = 0, i = 0;

	while (n >= 1)
	{
		for (i = c; i > 0; i--)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
	}

	if (c <= 0)
		_putchar('\n');
}
