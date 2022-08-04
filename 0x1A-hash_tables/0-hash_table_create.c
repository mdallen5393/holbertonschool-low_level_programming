#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 */
hash_table_t *hash_table_create(const unsigned long int size)
{
	long unsigned int i;
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (!ht->array)
		free(ht);

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
