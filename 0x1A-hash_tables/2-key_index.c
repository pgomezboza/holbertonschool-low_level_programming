#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: key to find the index
 * @size: size of the array of the hash table.
 *
 * Return: the index at which the key/value pair
 * should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int hidx;

	if (key == NULL || size == 0)
		return (0);

	hidx = hash_djb2(key);

	return (hidx % size);
}
