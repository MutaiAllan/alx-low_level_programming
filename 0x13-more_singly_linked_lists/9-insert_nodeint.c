#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new nodd eat a given index.
 * @head: Pointer to the address of the head of the list.
 * @idx: Index to add the new node.
 * @n: Integer in which the new node contains.
 * Return: Address of the new node, NULL if it fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node;
	listint_t *new;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (node = 0; node < idx - 1 && h != NULL; node++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = h->next;
		h->next = new;
	}

	return (new);
}
