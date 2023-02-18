#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: parameter
 * Return: Number of elements.
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}

	return (i);
}
