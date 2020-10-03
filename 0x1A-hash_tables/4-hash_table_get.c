#include "hash_tables.h"
/**
 * hash_table_get - get a value of a key.
 * @ht: hash table with the values.
 * @key: key with the value to be taken.
 * Return: the value of the key, NULL if couldn't found value.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long index;

	if (!ht || !key || !key[0])
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
