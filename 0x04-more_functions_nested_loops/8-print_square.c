#include "holberton.h"

/**
 * print_square - function that prints a square.
 * @size: size is the size of the square.
 * Description: use the character # to print the square.
 */

void print_square(int size)
{
	int x, y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
