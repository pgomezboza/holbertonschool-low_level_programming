#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector string
 * Description: Your program should print the result of the multiplication,
 * you can assume that the two numbers and result of the multiplication
 * can be stored in an integer
 * Return: 1 if error, 0 if function runs correctly
 */

int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
	}

	return (1);
}
