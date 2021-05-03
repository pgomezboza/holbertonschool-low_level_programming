#include "lists.h"

/**
 * dlistint_len - number of elements in a linked 'dlistint_t' list.
 * @h: ptr to the beginning of a linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t t;

	for (t = 0; h != NULL; t++)
		h = h->next;

	return (t);
}
