#include "lists.h"

/**
 * add_node - adds a new node
 * @head: head of node
 * @str: string
 *
 * Return: new node added
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_));
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	 new_node->next = *head;
	 *head = new_node;

	return (new_node);
}
