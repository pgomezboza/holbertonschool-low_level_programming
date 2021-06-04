#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array of the hash table.
 *
 * Return: pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *hs_tbl;

	unsigned long int n = 0;

	hs_tbl = malloc(sizeof(hash_table_t));

	if (hs_tbl == NULL)
		return (NULL);

	hs_tbl->size = size;
	hs_tbl->array = malloc(sizeof(hash_node_t *) * size);

	if (hs_tbl->array == NULL)
	{
		free(hs_tbl);
		return (NULL);
	}

	while (n < size)
	{
		hs_tbl->array[n] = NULL;
		n++;
	}

	return (hs_tbl);
}
