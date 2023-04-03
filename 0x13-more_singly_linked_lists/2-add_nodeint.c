#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning
 * @head: head of node
 * @n: integer n
 *
 * Return: new node created at the beginning
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodeint;

	new_nodeint = malloc(sizeof(listint_t));
	if (new_nodeint == NULL)
	{
		free(new_nodeint);
		return (NULL);
	}

	new_nodeint->n = n;

	new_nodeint->next = *head;
	*head = new_nodeint;
	return (new_nodeint);
}
