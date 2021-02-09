#include "holberton.h"

/**
 * _islower - request to input a value
 * @c: int value.
 * Description: 
 * Return: '1' if lowercase, '0' if not lowercase
 */
 
int _islower(int c)
{
	int r = 0;

	(c >= 97 && c <= 122) ? r = 1 : r ;

	return(r);
}
