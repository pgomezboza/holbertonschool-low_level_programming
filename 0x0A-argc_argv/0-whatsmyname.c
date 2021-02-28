#include "holberton.h"
#include <stdio.h>

/**
 * main -  program that prints its name
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Description: If you rename the program, it will print the new name,
 * without having to compile it again. You should not remove the path
 * before the name of the program.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}

