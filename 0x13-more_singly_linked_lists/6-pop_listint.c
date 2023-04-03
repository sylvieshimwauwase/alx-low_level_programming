#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: head of the node
 *
 * Return: head's node data
 */
int pop_listint(listint_t **head)
{
	int p;
	listint_t *ptr;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	ptr = *head;
	*head = (*head)->next;
	p = ptr->n;
	free(ptr);

	return (p);
}
