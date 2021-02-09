#include "holberton.h"

/**
 * print_alphabet_x10 - print lowercase alphabet 10 times.
 * Description:
 * Return: void
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
