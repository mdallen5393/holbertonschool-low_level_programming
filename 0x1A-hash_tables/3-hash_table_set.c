#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @ht: hash table to add to
 * @key: key to be added
 * @value: value to be added
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newNode;
	hash_node_t *curr;

	if (!ht || !key)
		return (0);

	/* If key is empty, return failure */
	if (strcmp(key, "\0") == 0)
		return (0);

	/* Get hashed key (index in ht->array) */
	index = key_index((const unsigned char *)key, ht->size);

	curr = ht->array[index];

	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = NULL;

	/* if ht->array[index] exists ... */
	if (curr)
	{
		/* Get to end of list, checking whether the key matches */
		while (curr->next)
		{
			/* If a key matches, free the newNode and return */
			if (strcmp(curr->key, key) == 0)
			{
				free(newNode->key);
				free(newNode->value);
				free(newNode);
				return (1);
			}
			curr = curr->next;
		}
		/* Set the newNode to the end of the linked list */
		curr->next = newNode;
		return (1);
	}
	/* Set the array[index] to the newNode */
	curr = newNode;
	return (1);
}
