#include "holberton.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: buffer array to be filled
 * @b: char constant byte to copy
 * @n: number of bytes of memory area to fill
 * Description: Fill the first 'n' bytes of the memory area pointed to by 's'.
 * with the constant byte 'b'.
 * Return: Pointer to memory area 's'.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m = 0;

	while (n > 0)
	{
		s[m] = b;
		m++;
		n--;
	}

	return (s);
}
