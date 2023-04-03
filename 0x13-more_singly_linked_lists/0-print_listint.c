#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints all elements
 * @h: head of the node
 *
 * Return: number of nodes
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
