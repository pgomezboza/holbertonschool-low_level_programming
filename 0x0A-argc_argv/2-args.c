#include "holberton.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Description: All arguments should be printed, including the first one,
 * only print one argument per line, ending with a new line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
