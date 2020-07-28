#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: pointer to the head of the linked list.
 * Return: The head node's data, 'n' in the struct.
 */
int pop_listint(listint_t **head)
{
	listint_t *freeNode;
	int data = 0;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	freeNode = *head;
	*head = (*head)->next;
	free(freeNode);
	return (data);
}
