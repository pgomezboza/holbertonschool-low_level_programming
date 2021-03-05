#include "holberton.h"

/**
 * malloc_checked - function that allocate memory using malloc.
 * Description: if malloc fails, termination with a status value of 98.
 * @b: number of bytes to allocate.
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptro;

	ptro = malloc(b);

	if (ptro == NULL)
		exit(98);

	return (ptro);
}
