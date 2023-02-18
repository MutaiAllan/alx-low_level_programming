#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node of a linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node.
 *
 * Return: nth node, Null if node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
