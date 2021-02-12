#include "holberton.h"

/**
 * print_triangle - function that prints a triangle, using '#'.
 * @size: is the size of the triangle.
 * Description: If size is 0 or less,
 * the function should print only a new line.
 */

void print_triangle(int size)
{
	int c, i, j;

	c = 0;
	i = size - 1;

	for (c = 0; c < size; c++)
	{
		i = size - 1 - c;
		j = c + 1;

		while (i > 0)
		{
			_putchar(' ');
			i--;
		}

		while (j > 0)
		{
			_putchar('#');
			j--;
		}

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
