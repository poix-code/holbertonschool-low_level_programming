#include "lists.h"

/**
 * free_dlistint - frees a double linked list.
 * @head: points to the head of a linked list.
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freeNode;

	if (!head)
		return;
	while (head)
	{
		freeNode = head;
		head = head->next;
		free(freeNode);
	}
}
