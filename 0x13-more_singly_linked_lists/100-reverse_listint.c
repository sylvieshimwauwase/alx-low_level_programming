#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: head of node
 *
 * Return: first node of the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node;
	listint_t *previous_node;

	if (*head == NULL)
	{
		return (NULL);
	}
	previous_node = (*head)->next;
	(*head)->next = NULL;

	while (previous_node != NULL)
	{
		current_node = previous_node->next;
		previous_node->next = *head;

		*head = previous_node;
		previous_node = current_node;
	}
	return (*head);
}
