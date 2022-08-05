#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count = 0;
	hash_node_t *curr;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			curr = ht->array[i];
			while (curr)
			{
				count++;
				curr = curr->next;
			}
		}
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			curr = ht->array[i];
			while (curr)
			{
				printf("'%s': '%s'", curr->key, curr->value);
				if (i < count)
					printf(", ");
				curr = curr->next;
			}
		}
	}
	printf("}\n");
}
