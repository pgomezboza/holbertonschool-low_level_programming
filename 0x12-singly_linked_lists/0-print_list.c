#include "lists.h"

/**
 * print_list - prints all elements of a 'list_t' list.
 * @h: pointer, start of the list.
 *
 * Return: number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	unsigned int n;

	temp = h;

	for (n = 0; temp; n++)
	{
		printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
	}

	return (n);
}
