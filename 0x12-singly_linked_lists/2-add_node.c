#include "lists.h"

/**
 * add_node - The function add a new node at the beginning of a linked list.
 * @head: Contains within the edges.
 * @str: Contains within one of the values of the list.
 * Return: A new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add_node;

	if (!(head || str))
		return (0);
	add_node = malloc(sizeof(list_t));
	if (!(add_node))
		return (0);
	add_node->len = _strlen(str);
	add_node->str = strdup(str);
	if (!(add_node->str))
	{
		free(add_node);
		return (0);
	}
	add_node->next = *head;
	*head = add_node;
	return (add_node);
}

/**
 * _strlen - calculate the length of the string
 * @s: address of that variable
 * Return: return the length of a string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
