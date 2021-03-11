#include "function_pointers.h"

/**
 * print_name - prints a name from a function pointer.
 * @name: char string, name to print.
	* @f: function pointer that takes a string as an argument.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
