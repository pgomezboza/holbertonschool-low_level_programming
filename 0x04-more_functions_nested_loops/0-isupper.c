#include "holberton.h"

/**
 * _isupper - function that checks for uppercase characters
 * @c: int type number
 * Return: 1 if uppercase, otherwhise 0
 */

int _isupper(int c)
{
	int r;

	if (c >= 'A' && c <= 'Z')
		r = 1;
	else
		r = 0;

	return (r);
}
