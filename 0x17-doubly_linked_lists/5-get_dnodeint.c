#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a linked list.
 * @head: points to the head of a linked list.
 * @index: index of the node, by default 0.
 * Return: the selected node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	if (!head)
		return (NULL);
	for (i = 0; head; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
