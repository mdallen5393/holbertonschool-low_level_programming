#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			while (curr)
			{
				curr = ht->array[i]->next;
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
				ht->array[i] = curr;
			}
		}
	}
	free(ht->array);
	free(ht);
}
