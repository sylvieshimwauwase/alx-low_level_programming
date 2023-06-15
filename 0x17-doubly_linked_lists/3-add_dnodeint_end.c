#include "lists.h"

/**
 * add_dnodeint_end - adding node at the end
 * @head: head ogf node
 * @n: integer
 *
 * Return: new node created, 0 if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
		new_node->prev = current;
	}

	return (new_node);
}
