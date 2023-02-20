#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes.
 * @head: A pointer to the head of the list.
 *
 * Return: The size of the list that was free'd.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *temp, *i;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	temp = head->next;
	i = (head->next)->next;

	while (i)
	{
		if (temp == i)
		{
			temp = i;
			while (temp != i)
			{
				nodes++;
				temp = temp->next;
				i = i->next;
			}

			temp = temp->next;
			while (temp != i)
			{
				nodes++;
				temp = temp->next;
			}

			return (nodes);
		}

		temp = temp->next;
		i = (i->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to the address of the head of the listint_t list.
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
