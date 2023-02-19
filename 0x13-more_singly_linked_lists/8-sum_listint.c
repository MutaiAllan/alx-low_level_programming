#include "lists.h"

/**
 * sum_listint - Sums all data (n) of a linked list.
 * @head: Pointer to the head of the linked list.
 * Return: Sum of all data, 0 if list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
