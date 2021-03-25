#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print in binary.
 */
void print_binary(unsigned long int n)
{

	unsigned long num = n;

	if (num > 1)
	{
		print_binary(num >> 1);
	}

	_putchar((num & 1) + '0');

}
