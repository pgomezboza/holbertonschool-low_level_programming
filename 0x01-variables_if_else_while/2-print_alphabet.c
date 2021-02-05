#include <stdio.h>
/**
 * main - a main function.
 * Description: use 'putchar' function to print the alphabet in lowercase.
 * Return: value por default 0.
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
