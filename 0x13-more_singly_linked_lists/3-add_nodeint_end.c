#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list.
 * @head: pointer to the address of the head of the list.
 * @n: node to be added.
 * Return: Address of the new element, NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h, *temp;

	h = malloc(sizeof(listint_t));

	if (h == NULL)
	{
		return (NULL);
	}
	else
	{
		h->n = n;
		h->next = NULL;
	}

	temp = *head;

	if (temp == NULL)
	{
		*head = h;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = h;
	}
	return (*head);
}
