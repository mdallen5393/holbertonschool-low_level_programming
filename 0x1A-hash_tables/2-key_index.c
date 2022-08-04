#include "hash_tables.c"

/**
 * key_index - gives you the index of a key in a hash table
 * @key: key to retrieve index of
 * @size: size of the array of the hash table
 * Return: calculated index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
