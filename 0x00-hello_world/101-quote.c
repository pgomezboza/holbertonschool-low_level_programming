#include <stdio.h>
#include <unistd.h>

/**
 * main - shows a message on the screen.
 *
 * Return: In this case, a value of 1 is returned.
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
