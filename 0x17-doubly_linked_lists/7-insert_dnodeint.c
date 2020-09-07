#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at a given position.
 * @h: points to the head of a list.
 * @idx: Index where the new node will be inserted.
 * @n: Data of the new node.
 * Return: the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *tmp;
	size_t i = 0;

	if (!h)
		return (NULL);
	tmp = *h;
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode = add_dnodeint(h, n);
		return (newNode);
	}
	while (tmp && i < idx - 1)
	{
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	newNode->next = tmp->next;
	newNode->prev = tmp;
	if (tmp->next)
		tmp->next->prev = newNode;
	tmp->next = newNode;
	return (newNode);
}
