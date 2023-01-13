#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: head pointer of the list
 * @index: index of the nth node
 *
 * Return: nth node of the list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}

	return (head);
}
