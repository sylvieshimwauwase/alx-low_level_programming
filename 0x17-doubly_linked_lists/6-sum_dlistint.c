#include "lists.h"

/**
 * sum_dlistint - sum of the data in linked list
 * @head: head of the linked list
 *
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
