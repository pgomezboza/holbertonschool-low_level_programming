#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to compare.
 * @index: position to compare.
 *
 * Return: value of the bit, or -1 if there is an error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	n  = n >> index;

	if (n & 1)
		return (1);
	else
		return (0);
}
