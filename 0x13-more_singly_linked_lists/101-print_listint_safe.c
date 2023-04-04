#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints listint in linked list
 * @head: head node
 *
 * Return: printed linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count = 0;

	if (head == NULL)
	{
		exit(98);
	}
	current = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current <= current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			exit(98);
		}
		current = current->next;
	}
	return (count);
}
