#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_v = 5381;
	int c;

	while ((c = *str++))
	{
		hash_v = ((hash_v << 5) + hash_v) + c; /* hash * 33 + c */
	}

	return (hash_v);
}
