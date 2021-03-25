#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number.
 *
 * Return: the converted number, 0 if b is not 0 or 1
 * or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n = 0;

	if (b == 0)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		n = n << 1;
		if (b[i] == '1')
			n = n + 1;
	}

	return (n);
}
