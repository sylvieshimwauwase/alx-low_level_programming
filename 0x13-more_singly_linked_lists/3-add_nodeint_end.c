#include "lists.h"

/**
 * add_nodeint_end - adding new node at the end
 * @head: head of the node
 * @n: integer
 *
 * Return:new node created at the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodeint, *current;

	new_nodeint = malloc(sizeof(listint_t));
	if (new_nodeint == NULL)
	{
		free(new_nodeint);
		return (NULL);
	}
	new_nodeint->n = n;
	if (*head == NULL)
	{
		*head = new_nodeint;
		return (new_nodeint);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_nodeint;
	return (new_nodeint);
}
