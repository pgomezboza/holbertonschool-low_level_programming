#include "function_pointers.h"

/**
 * print_name - print a name from a function pointer
 * @name: name to print
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
