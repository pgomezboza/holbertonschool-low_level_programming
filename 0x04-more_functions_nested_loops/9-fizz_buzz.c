#include <stdio.h>

/**
 * main - function solve fizz buzz from numbers 1 to 100.
 * Description: multiples 3 print Fizz, multiples 5 print Buzz.
 * multiples 3 and 5 print FizzBuzz.
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);

		if (n != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
