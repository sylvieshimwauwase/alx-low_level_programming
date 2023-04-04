#include "lists.h"

/**
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node;

	if (head == NULL)
	{
		return (0);
	}
	current_node = head;
	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
