#include <stdio.h>
/**
 * main - a main function
 * Description: Use 'putchar' to print alphabet
 * but the letter 'q' and 'e'.
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
