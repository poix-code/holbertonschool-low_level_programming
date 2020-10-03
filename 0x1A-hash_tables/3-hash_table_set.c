#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table to be updated o added a new key/value
 * @key: the key, can not be an empty key.
 * @value: value associated with the key.
 * Return: 1 on success, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int keyIndex;
	hash_node_t *node;
	int newNode;

	if (!ht || !key || !key[0] || !value)
		return (0);
	keyIndex = key_index((unsigned char *)key, ht->size);
	node = ht->array[keyIndex];
	while (node != NULL)
	{
		if (strcmp(node->key, key))
		{
			free(node->value);
			node->value = (char *)strdup(value);
			return (1);
		}
		node = node->next;
	}
	newNode = add_node(&ht->array[keyIndex], key, value);
	return (newNode);
}
/**
 * add_node - Add a node at the beginning.
 * @head: pointer to the head of the list.
 * @key: key of the hash table.
 * @value: value of the hash table.
 *
 * Return: 1 on success, 0 otherwise.
 */
int add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *newNode;

	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
		return (0);
	newNode->key = (char *)strdup(key);
	newNode->value = (char *)strdup(value);
	newNode->next = *head;
	*head = newNode;
	return (1);
}
