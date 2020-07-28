#include "lists.h"

/**
 * free_listint2 - The function frees a linked list and set the head to NULL.
 * @head: Pointer to the head of the struct.
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
	listint_t *freeNode;

	while (*head)
	{
		freeNode = *head;
		*head =(*head)->next;
		free(freeNode);
	}
	*head = NULL;
}
