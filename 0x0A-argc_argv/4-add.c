#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Description: If no number is passed to program, print 0.
 * If one of the numbers contain non-digits, print Error.
 * Return: 1 if error, 0 if function runs properly.
 */

int main(int argc, char *argv[])
{
	int sum = 0, count, num = 0;
	char *ch;

	if (argc > 1)
	{
		for (count = 1; argv[count]; count++)
		{
			num = strtol(argv[count], &ch, 10);
			if (!*ch)
			{
				sum += num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	printf("%d\n", sum);

	return (0);
}
