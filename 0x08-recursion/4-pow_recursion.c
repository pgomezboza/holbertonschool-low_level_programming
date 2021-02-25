#include "holberton.h"

/**
 * _pow_recursion - function that returns the value
 * of x raised to the power of y.
 * @x: number value
 * @y: number power
 * Return: x to power of y
 */

int _pow_recursion(int x, int y)
{
	int r = 0;

	if (y < 0)
	{
		r = -1;
	}
	else if (y == 0)
	{
		r = 1;
	}
	else if (y == 1)
	{
		r = x;
	}
	else
	{
		r = (x * _pow_recursion(x, y - 1));
	}

	return (r);
}
