#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to number to set.
 * @index: position to bit change.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > (sizeof(*n) * 8)) /* validate index */
		return (-1);

	*n = *n & ~(1 << index);

	return (1);

}
