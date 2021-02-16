#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: int pointer type
 * @b: int pointer type
 * Description:
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
