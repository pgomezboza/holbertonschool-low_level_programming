#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list.
 * @h: pointer to the 'list_t' list.
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
