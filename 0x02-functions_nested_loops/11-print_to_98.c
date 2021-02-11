#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers from 'n' to 98.
 * @n: int type value
 * Description:
 */

void print_to_98(int n)
{

	int nn;

	if (n > 98)
	{
		for (nn = n; nn >= 98; nn--)
		{
			printf("%d", nn);
			if (nn != 98)
			printf(", ");
		}

	}
	else
	{
		for (nn = n; nn <= 98; nn++)
		{
			printf("%d", nn);
			if (nn != 98)
			printf(", ");
		}
	}

	printf("\n");
}
