#include "hash_tables.h"

/**
 * hash_table_print - prints key/value of hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr;
	int fir = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr != NULL)
		{
			if (fir != 0)
				printf(", ");
			printf("'%s: '%s'", curr->key, curr->value);
			fir = 1;
			curr = curr->next;
		}
	}
	printf("}\n");
}
