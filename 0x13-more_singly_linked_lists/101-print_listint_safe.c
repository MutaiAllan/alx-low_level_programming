#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes.
 * @head: A pointer to the head of the list.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *temp, *i;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	temp = head->next;
	i = (head->next)->next;

	while (i)
	{
		if (temp == i)
		{
			temp = head;
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
 * print_listint_safe - Prints a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
