#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Description:
 * Return: return 'r' as value of last digit.
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		r = -1 * (n % 10);
		_putchar(r + '0');
	}
	else
	{
		r = n % 10;
		_putchar(r + '0');
	}

	return (r);
}
