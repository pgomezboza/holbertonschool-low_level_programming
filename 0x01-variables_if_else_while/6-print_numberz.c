#include <stdio.h>
/**
 * main - a main function
 * Description: Print all numbers of base 10, starting from 0.
 * You are not allowed to use any variable of type char and
 * you can only use 'putchar' twice.
 * Return: default 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');

	return (0);
}
