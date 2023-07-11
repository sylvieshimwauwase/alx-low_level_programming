#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: size of hash table
 *
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_table = NULL;

	if (size == 0)
	{
		return (NULL);
	}

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->size = size;

	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}

	return (hash_table);
}
