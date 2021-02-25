#include "holberton.h"

int solve_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function that returns natural square root of a number.
 * @n: number to calculate the square root of
 *
 * Return: resulting square root
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (solve_sqrt_recursion(n, 0));
}

/**
 * solve_sqrt_recursion - function to find the natural square root.
 * of a number
 * @n: number to calculate the square root
 * @i: iterator
 *
 * Return: resulting square root
 */

int solve_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}

	return (solve_sqrt_recursion(n, i + 1));
}
