#include "holberton.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Description: Your program should print a number, followed by a new line.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
