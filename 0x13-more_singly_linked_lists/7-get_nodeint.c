#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a 'listint_t' linked list.
 * @head: pointer to the first node in the list.
 * @index: index of node to return.
 *
 * Return: pointer to the node to search, or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);

	for (n = 0; n < index; n++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	return (head);
}
