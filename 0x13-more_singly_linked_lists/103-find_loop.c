#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: Address of the node where the loop starts, NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp, *i;

	if (head == NULL || head->next == NULL)
		return (NULL);

	temp = head->next;
	i = (head->next)->next;

	while (i)
	{
		if (temp == i)
		{
			temp = i;

			while (temp != i)
			{
				temp = temp->next;
				i = i->next;
			}

			return (temp);
		}

		temp = temp->next;
		i = (i->next)->next;
	}

	return (NULL);
}
