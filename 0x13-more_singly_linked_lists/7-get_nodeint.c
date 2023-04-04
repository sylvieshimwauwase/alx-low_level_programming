#include "lists.h"

/**
 * get_nodeint_at_index - retuns a node at any index
 * @head: head of node
 * @index: counter
 *
 * Return: a node at any index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node;

	if (head == NULL)
	{
		return (NULL);
	}
	current_node = head;
	for (i = 0; i < index; i++)
	{
		if (current_node == NULL)
			return (NULL);
		current_node = current_node->next;
	}
	if (current_node == NULL)
	{
		return (NULL);
	}
	else
	{
		return (current_node);
	}
}
