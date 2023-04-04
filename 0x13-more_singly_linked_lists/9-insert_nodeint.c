#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at any index
 * @head: head of node
 * @idx: index of node
 * @n: data node
 *
 * Return:new node created
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current_node, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	current_node = *head;
	for (i = 0; i < idx - 1; i++)
	{
		current_node = current_node->next;
	}
	new_node->n = n;
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
