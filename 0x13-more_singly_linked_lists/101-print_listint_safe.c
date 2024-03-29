#include "lists.h"

/**
 * print_listint_safe - prints a 'listint_t' linked list.
 * @head: pointer to the start of the list.
 *
 * Return: number of nodes in list,
 * if function fails, exit with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	const listint_t *current;
	const listint_t *hold;

	current = head;
	if (current == NULL)
		exit(98);

	count = 0;

	while (current != NULL)
	{
		hold = current;
		current = current->next;
		count++;
		printf("[%p] %d\n", (void *)hold, hold->n);

		if (hold < current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}

	return (count);
}
