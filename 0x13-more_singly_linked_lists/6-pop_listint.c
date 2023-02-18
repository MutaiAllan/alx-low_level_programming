#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: Pointer to the address of the head of the list.
 *
 * Return: Head node's data, 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int hnode;

	if (*head == NULL)
		return (0);

	tmp = *head;
	hnode = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (hnode);
}
