#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creates a sorted hash table
 * @size: size of hash table
 *
 * Return: pointer to newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{i
	shash_table_t *ht = NULL;
	unsigned long int i = 0;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - inserts key/value pair in sorted hash table
 * @ht: the hash table
 * @key: teh string key
 * @value: value corresponding to the key
 *
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	 unsigned long int index = 0;
	 shash_node_t *cur = NULL;

	 if (ht == NULL || key == NULL)
		 return (NULL);
	 index = key_index((unsigned char *)key, ht->size);
	 cur = ht->array[index];

	 while (cur != NULL)
	 {
		 if (strcmp(cur->key, key) == 0)
			 return (cur->value);
		 cur = cur->next;
	 }
	 return (NULL);
}

/**
 * shash_table_print - Prints the sorted hash table
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *cur = NULL;
	int flag = 0;

	 if (ht == NULL)
		 return;

	 cur = ht->shead;
	 printf("{");
	 while (cur != NULL)
	 {
		 if (flag != 0)
			 printf(", ");
		 printf("'%s': '%s'", cur->key, cur->value);
		 flag = 1;
		 cur = cur->snext;
	 }
	 printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in reverse order
 * @ht: The hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *cur = NULL;
	int flag = 0;

	if (ht == NULL)
		return;

	cur = ht->stail;
	printf("{");
	while (cur != NULL)
	{
		if (flag != 0)
			printf(", ");
		printf("'%s': '%s'", cur->key, cur->value);
		flag = 1;
		cur = cur->sprev;
	}
	 printf("}\n");
}

/**
 * shash_table_delete - Deletes the sorted hash table
 * @ht: The hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *cur = NULL, *tmp = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		cur = ht->array[i];
		while (cur != NULL)
		{
			tmp = cur->next;
			free(cur->key);
			free(cur->value);
			free(cur);
			cur = tmp;
		}
	}
}
