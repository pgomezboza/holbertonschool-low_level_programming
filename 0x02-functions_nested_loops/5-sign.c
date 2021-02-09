#include "holberton.h"

/**
 * print_sign - prints the sign of a number on the screen.
 * @n: type int value, can be negative or positive.
 * Description: print +, 0, or - depending on number.
 * Return: if '1' then '+', '0' then '0', and '-1' then '-'
 */

int print_sign(int n)
{

	int r;

	if (n > 0)
	{
		_putchar('+');
		r = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		r = -1;
	}
	else
	{
		_putchar('0');
		r = 0;
	}

	return (r);
}
