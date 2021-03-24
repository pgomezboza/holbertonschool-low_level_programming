#include "lists.h"

/**
 * free_listint2 -  frees a 'listint_t' list.
 * @head: double pointer to 'listint_t' list to be freed
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
