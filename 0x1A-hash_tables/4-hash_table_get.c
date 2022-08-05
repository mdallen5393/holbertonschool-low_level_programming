#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table to search
 * @key: key of value to be retrieved
 * Return: value associated with element, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *curr;

	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr)
		{
			if (strcmp(curr->key, key) == 0)
				return (curr->value);
			curr = curr->next;
		}
	}
	return (NULL);
}
