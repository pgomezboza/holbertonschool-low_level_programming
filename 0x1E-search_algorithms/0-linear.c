#include "search_algos.h"

/**
 * linear_search - function that searches for a value
 * in an array of integers using the Linear search algorithm
 *
 * @array: array to search the value in.
 * @size: is the number of elements in the array.
 * @value: is the element to search for.
 *
 * Return: index or -1 if array is null or not found value.
 **/
int linear_search(int *array, size_t size, int value)
{
	unsigned int n = 0;

	if (array == NULL || size == 0)
		return (-1);

	for (n = 0; n < size; n++)
	{
		printf("Value checked array[%u] = [%d]\n", n, array[n]);
		if (array[n] == value)
			return (n);
	}

	return (-1);
}
