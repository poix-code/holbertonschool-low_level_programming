#include "lists.h"

/**
 * insert_nodeint_at_index - Inser a new node at a given position.
 * @head: Pointer to points to the head of the linked list.
 * @idx: Index of the list to add the new node.
 * @n: Value to be added in the new node.
 * Return: The address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *tmp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	tmp = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		*head = newNode;
		newNode->next = tmp;
		return (newNode);
	}
	for (i = 0; i < idx - 1; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	newNode->next = tmp->next;
	tmp->next = newNode;
	return (newNode);
}
