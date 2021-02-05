#include <stdio.h>
/**
 * main - a main function
 * Description: print all numbers on 1 digit of base 10, starting from 0.
 * Return: default value 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');

	return (0);
}
