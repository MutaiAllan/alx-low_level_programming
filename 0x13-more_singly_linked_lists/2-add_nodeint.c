#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beggining of a linked list.
 * @head: head of the list.
 * @n: node to be added.
 * Return: Address of the new element or NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	else
	{
		temp->n = n;
	}

	temp->next = *head;
	*head = temp;

	return (*head);
	free(temp);
}
