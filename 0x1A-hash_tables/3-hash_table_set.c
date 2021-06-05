#include "hash_tables.h"

/**
 * create_node - function that  create and insert a new node into hash table.
 * @nwht: new hash table
 * @nwkey: new key
 * @nwvalue: new value
 * @nwhidx: new index to insert in hash table
 *
 * Return: 1 on SUCCESS or 0 on FAILURE.
 */
int create_node(hash_table_t *nwht, const char *nwkey, const char *nwvalue,
			unsigned long int nwhidx)
{
	hash_node_t *nwnode = NULL;
	char *tmpkey, *tmpvalue;

	nwnode = malloc(sizeof(hash_node_t));

	if (!nwnode)
		return (0);

	tmpkey = strdup(nwkey);
	if (!tmpkey)
	{
		free(nwnode);
		return (0);
	}

	tmpvalue = strdup(nwvalue);
	if (!tmpvalue)
	{
		free(tmpkey);
		free(nwnode);
		return (0);
	}

	nwnode->key = tmpkey;
	nwnode->value = tmpvalue;

	if ((nwht->array)[nwhidx] == NULL)
		nwnode->next = NULL;
	else
		nwnode->next = (nwht->array)[nwhidx];
	(nwht->array)[nwhidx] = nwnode;

	return (1);
}

/**
 * hash_table_set - function that adds an element to the hash table.
 *
 * @ht: hashtable to place add or update the key/value to
 * @key: key of element, can not be an empty string.
 * @value: value associated with the key, index of hashtable.
 *
 * Return: 1 on SUCCESS or 0 on FAILURE.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;
	unsigned long int hidx;
	char *val;

	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);

	hidx = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[hidx];

	while (node && (strcmp(key, node->key) != 0))
		node = node->next;

	if (node != NULL)
	{
		val = strdup(value);
		if (!val)
			return (0);
		if (node->value)
			free(node->value);
		node->value = val;
		return (1);
	}

	return (create_node(ht, key, value, hidx));
}
