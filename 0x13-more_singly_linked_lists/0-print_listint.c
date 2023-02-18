#include "lists.h"

/**
 * print_listint - Returns the number of nodes.
 * @h: parameter
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
