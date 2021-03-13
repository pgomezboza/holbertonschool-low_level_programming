#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers.
 * @separator: char type pointer.
 * @n: unsigned int type const.
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lst, int));

		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(lst);
}
