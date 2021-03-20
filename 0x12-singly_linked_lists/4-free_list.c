#include "lists.h"

/**
 * free_list - free a 'list_t' list
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	list_t *temp;
	list_t *n;

	temp = head;

	while (temp != NULL)
	{
		n = temp->next;
		free(temp->str);
		free(temp);
		temp = n;
	}
}
