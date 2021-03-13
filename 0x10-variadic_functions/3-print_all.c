#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: char type pointer to string.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char *spc;

	va_start(args, format);

	while (format && format[i])
	{
		spc = "";

		if (format[i + 1])
			spc = ", ";

		switch (format[i])
		{
		case 'c':
			printf("%c%s", va_arg(args, int), spc);
			break;
		case 'i':
			printf("%d%s", va_arg(args, int), spc);
			break;
		case 'f':
			printf("%f%s", va_arg(args, double), spc);
			break;
		case 's':
			str = va_arg(args, char *);

			if (!str || !*str)
				str = "(nil)";

			printf("%s%s", str, spc);
			break;
		}

		i++;
	}

	printf("\n");
}
