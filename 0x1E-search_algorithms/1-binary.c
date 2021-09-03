#include "search_algos.h"

/**
 * print_array - prints the array to be searched.
 *
 * @array: array to print.
 * @left: left index array.
 * @right: right index array.
 *
 * Return: void
 **/
void print_array(int *array, size_t left, size_t right)
{
	unsigned int n = 0;

	printf("Searching in array: ");
	for (n = left; n <= right; n++)
	{
		if (n != right)
			printf("%d, ", array[n]);
		else
			printf("%d\n", array[n]);
	}
}

/**
 * binary_search - function that searches for a value
 * in a sorted array of integers.
 *
 * @array: array to search the value in.
 * @size: number of elements in array
 * @value: value to search for.
 *
 * Return: return index of value
 * or -1 if value not present, or array is NULL
 **/
int binary_search(int *array, size_t size, int value)
{
	unsigned int left = 0, mid = 0, right = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}
