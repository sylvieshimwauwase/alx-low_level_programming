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
	size_t new;
	char *s = strdup(str);
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node != NULL)
		return (NULL);

	if (str == NULL)
		s = strdup(str), new = strlen(str);

	new_node->str = s;
	new_node->len = new;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
