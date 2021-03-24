#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list.
 * @head: double pointer to the first node in the list.
 * @index: index of the node to delete.
 *
 * Return: 1 (Success), or -1 (Fail).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp1 = *head;
	listint_t *tmp2 = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp1);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tmp1 || !(tmp1->next))
			return (-1);
		tmp1 = tmp1->next;
		i++;
	}


	tmp2 = tmp1->next;
	tmp1->next = tmp2->next;
	free(tmp2);

	return (1);
}
