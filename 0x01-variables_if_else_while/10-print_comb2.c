#include <stdio.h>
/**
 * main - a main function.
 * Description: write a program that prints the numbers from 00 to 99.
 * the numbers must be separated by commas followed by a space.
 * Return: default 0
 */
int main(void)
{
	int x = 0, y = 0, z = 0;

	do {
		y = x / 10;
		z = x % 10;

		putchar(y + '0');
		putchar(z + '0');

		if (x < 99)
		{
			putchar(',');
			putchar(' ');
		}

		x++;

	} while (x <= 99);

	putchar('\n');

	return (0);
}
