#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a 'listint_t' list.
 * @head: douuble pointer to the first node in the list
 * @n: integer to add in that new node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
