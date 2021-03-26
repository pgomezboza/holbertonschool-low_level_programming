#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first number.
 * @m: second number (to transform).
 * Return: the number of bit transformations needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, r = 0;

	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
	{
		if (((n ^ m) >> i) & 1)
			r++;
	}

	return (r);
}
