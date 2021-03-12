#include "function_pointers.h"

/**
 * array_iterator - execute a function pointer on each element of an array
 * @array: array of integers, exec function
 * @size: size of array
 * @action: pointer to the function to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array && action)
	{
		for (n = 0; n < size; n++)
		{
			action(array[n]);
		}

	}
}
