#include "lists.h"

/**
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *next;

	if (head == NULL)
	{
		return;
	}
	ptr = *head;
	while (ptr != NULL)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}
	*head = NULL;
}
