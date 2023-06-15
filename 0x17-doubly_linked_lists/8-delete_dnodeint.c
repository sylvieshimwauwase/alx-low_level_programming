#include "lists.h"

/**
 * delete_dnodeint_at_index - deleting node at any index in linked list
 * @head: head of linked list
 * @index: index of the node
 *
 * Return: -1 if failed, 1 if succeeded
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	while (count < index)
	{
		if (current == NULL)
		{
			return (-1);
		}
		current = current->next;
		count++;
	}

	current->prev->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
