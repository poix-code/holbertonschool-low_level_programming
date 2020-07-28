#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: Pointer to the head of linked list.
 * Return: Void.
 */
void free_listint(listint_t *head)
{
	listint_t *freeNode;

	while (head)
	{
		freeNode = head;
		head = head->next;
		free(freeNode);
	}
}
