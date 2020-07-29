#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a linked list.
 * @head: Pointer to the pointer of the head of the linked list.
 * @index: Indicates the index of the node that should be deleted.
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *deleteNode;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
	}
	deleteNode = tmp->next;
	if (deleteNode == NULL)
		return (-1);
	tmp->next = deleteNode->next;
	free(deleteNode);
	return (1);
}
