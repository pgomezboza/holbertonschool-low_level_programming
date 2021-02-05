#include <stdio.h>
/**
 * main - a main function
 * Description: print all possible combinations fo single-digit numbers.
 * the numbers must be separated by commas and a space.
 * Return: default 0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
