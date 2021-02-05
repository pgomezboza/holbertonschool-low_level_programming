#include <stdio.h>
/**
 * main - a main function()
 * Description: print to all numbers of base64 in lowercase.
 * You can only use 'putchar', and only 3 times.
 * Return: default 0
 */
int main(void)
{
	char ch;
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
