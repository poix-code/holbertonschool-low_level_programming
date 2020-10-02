#include "hash_tables.h"
/**
 * hash_table_create - The function creates a hash table.
 * @size: the size of the hash table.
 * Return: a pointer to the hash table created.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int fill = 0;
	hash_table_t *hashTable;

	if (!(__builtin_types_compatible_p(typeof(size), unsigned long int)))
		return (NULL);
	hashTable = malloc(sizeof(hash_table_t));
	if (!hashTable)
		return (NULL);
	hashTable->size = size;
	hashTable->array = malloc(size * sizeof(hash_node_t *));
	if (!(hashTable->array))
		return (NULL);
	for (; fill < size; fill++)
	{
		hashTable->array[fill] = NULL;
	}
	return (hashTable);
}
