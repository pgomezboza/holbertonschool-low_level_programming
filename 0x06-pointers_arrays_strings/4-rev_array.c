#include "holberton.h"

/**
 * reverse_array - function reverses the content of an array of integers.
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = 0, tmp = 0;

	j = n - 1;

	while (i < n/2)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;

		i++;
	}

}

