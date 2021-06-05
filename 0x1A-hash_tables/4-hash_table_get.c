#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table to look.
 * @key: key of the value to retrieve.
 *
 * Return: the value associated with the element
 * or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmpnode;
	unsigned long int hidx;

	if (!ht || !key)
		return (NULL);

	hidx = key_index((const unsigned char *)key, ht->size);

	tmpnode  = (ht->array)[hidx];

	while (tmpnode != NULL && strcmp(tmpnode->key, key) != 0)
		tmpnode = tmpnode->next;

	if (!tmpnode)
		return (NULL);
	else
		return (tmpnode->value);
}
