#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elements of linked list
 * @h: head of the node
 *
 * Return: node_count
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}
	return (node_count);
}
