#include "lists.h"

/**
 * insert_dnodeint_at_index - inserting node at index
 * @h: head of linked lists
 * @idx: index of nodes
 * @n: integer number
 *
 * Return: new node at index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int count = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h	!= NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
	}
	else
	{
		while (count < idx - 1)
		{
			if (current == NULL)
			{
				free(new_node);
				return (NULL);
			}
			current = current->next;
			count++;
		}
		new_node->prev = current;
		new_node->next = current->next;

		if (current->next != NULL)
		{
			current->next->prev = new_node;
		}
		 current->next = new_node;
	}
	return (new_node);
}
