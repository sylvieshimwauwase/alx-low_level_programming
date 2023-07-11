#include "hash_tables.h"

/**
 * hash_table_get - retrieves value of a key
 * @ht: hash table
 * @key: key of hash table
 *
 * Return: value of the key or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *curr;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	curr = ht->array[index];
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);

		curr = curr->next;
	}

	return (NULL);
}

