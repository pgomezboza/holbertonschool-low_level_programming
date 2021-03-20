#include <stdio.h>
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
	size_t n = 0;

	temp = h;

	while (temp != NULL)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		n++;
	}

	return (n);
}
