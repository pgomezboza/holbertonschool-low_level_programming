#include "holberton.h"

/**
 * _isalpha - check if the value to be entered is an alphabetic character.
 * @c: type int character.
 * Description:
 * Return: '1' if letter, lowercase or uppercase, and '0' otherwise.
 */

int _isalpha(int c)
{
	int r = 0;

	((c > 64 && c < 91) || (c > 96 && c < 123)) ? r = 1 : r;

	return (r);
}
