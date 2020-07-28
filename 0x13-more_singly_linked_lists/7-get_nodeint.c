#include "lists.h"

/**
 * get_nodeint_at_index - Find a selected node.
 * @head: Pointer to the head of the linked list.
 * @index: Define the position of the node to find it.
 * Return: The node required.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *getIndex;

	if (head == NULL)
		return;
	getIndex = head;
	for (i = 0; i < index; i++)
	{
		getIndex = getIndex->next;
	}
	return (getIndex);
}
