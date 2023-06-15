#include "lists.h"

/**
 * add_dnodeint - adding node at the beginning
 * @head: head of node
 * @n: integer number
 *
 * Return: inserted node, 0 if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;
	return (new_node);
}

