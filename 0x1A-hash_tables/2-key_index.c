#include "hash_tables.h"
/**
 * key_index - gives the index of a key.
 * @key: The key.
 * @size: Size of the array of the hash table.
 * Return: The index of the key/value was stored in the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value, index;

	value = hash_djb2(key);
	index = value % size;
	return (index);
}
