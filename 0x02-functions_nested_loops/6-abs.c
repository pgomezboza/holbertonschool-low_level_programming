#include "holberton.h"

/**
 * _abs - print the absolute value of an integer number.
 * @n: int type number
 * Description:
 * Return: 'r' as absolute value of @n
 */

int _abs(int n)
{
	int r;

	if (n < 0)
	{
		r = (n * -1);
	}
	else
	{
		r = n;
	}

	return (r);
}
