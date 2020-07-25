#include "lists.h"

/**
 * add_node_end - The function add a new node at the end of a linked list.
 * @head: Contains within the edges.
 * @str: Contains within one of the values of the list.
 * Return: A new element at the end.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *end;

	if (!(head || str))
		return (0);
	newNode = malloc(sizeof(list_t));
	if (!(newNode))
		return (0);
	newNode->len = _strlen(str);
	newNode->str = strdup(str);
	if (!(newNode->str))
	{
		free(newNode);
		return (0);
	}
	end = *head;
	newNode->next = NULL;
	if (!(*head))
	{
		*head = newNode;
		return (newNode);
	}
	while (end->next)
		end = end->next;
	end->next = newNode;
	return (newNode);
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
