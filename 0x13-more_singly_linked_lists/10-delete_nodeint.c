#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list.
 * @head: double pointer to the first node in the list.
 * @index: index of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp1, *tmp2;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)

	{
		tmp1 = (*head)->next;
		free(*head);
		*head = tmp1;
		return (1);
	}

	tmp2 = *head;

	for (i = 0; i < index - 1; i++)
	{
		if (tmp2->next == NULL)
			return (-1);
		tmp2 = tmp2->next;
	}

	tmp1 = tmp2->next;
	tmp2->next = tmp1->next;

	free(tmp2);
	return (1);
}
