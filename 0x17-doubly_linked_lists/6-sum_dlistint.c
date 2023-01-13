#include "lists.h"

/**
 * sum_dlistint - sums all data of a linked list
 * @head: head pointer of the list
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp;

	tmp = head;
	for (sum = 0; tmp; tmp =  tmp->next)
		sum += tmp->n;

	return (sum);
}
