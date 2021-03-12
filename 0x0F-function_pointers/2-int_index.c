#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: pointer to array int type
 * @size: int type
 * @cmp: function pointer
 *
 * Return: int value, -1 if no element matches o size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && cmp)
	{
		for (n = 0; n < size; n++)
		{
			cmp(array[n]);

			if (cmp(array[n]) == 1)
			{
				return (n);
			}
		}
	}
	return (-1);
}
