#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc.
 * Description: If malloc fails, terminate process with status 98.
 * @b: unsigned int memory size to allocate
 * Return: void pointer to malloc'd memory space
 */

void *malloc_checked(unsigned int b)
{
	void *ptro;

	ptro = malloc(b);

	if (ptro == NULL)
		exit(98);

	return (ptro);
}
