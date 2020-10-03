#include "hash_tables.h"
/**
 * hash_table_print -  prints a hash table.
 * @ht: the hash table.
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int count;
	int i = 0;

	if (!ht || !ht->array)
		return;
	printf("{");
	count = 0;
	for (; count < ht->size; count++)
	{
		tmp = ht->array[count];
		while (tmp)
		{
			if (i > 0)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			i++;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
