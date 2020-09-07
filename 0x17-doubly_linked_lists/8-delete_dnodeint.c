#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node indicated by an index.
 * @head: points to the head of a linked list.
 * @index: indicates the node to be deleted.
 * Return: on success 1, -1 if it fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	size_t i = 0;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	while (tmp && i < index)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}
	if (*head == tmp)
		*head = tmp->next;
	if (tmp->next)
		(tmp->next)->prev = tmp->prev;
	if (tmp->prev)
		(tmp->prev)->next = tmp->next;
	free(tmp);
	return (1);
}
