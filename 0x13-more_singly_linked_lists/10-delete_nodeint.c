#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at any index
 * @head: head of node
 * @index: index of the node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node, *previous_node;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	current_node = *head;
	previous_node = NULL;
	for (i = 0; i < index; i++)
	{

	if (current_node == NULL)
	{
		return (-1);
	}
	previous_node = current_node;
	current_node = current_node->next;
	}
	if (previous_node == NULL)
	{
		*head = current_node->next;
	}
	else
	{
		previous_node->next = current_node->next;
	}
	free(current_node);

	return (1);
}
