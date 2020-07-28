#include "lists.h"

/**
 * add_nodeint_end - Adds a new element at the end of the list.
 * @head: point to the head of the linked list.
 * @n: Contains the data of the linked list.
 * Return: The address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addNode, *end;

	if (!head)
		return (0);
	addNode = malloc(sizeof(listint_t));
	if (!addNode)
		return (0);
	addNode->n = n;
	addNode->next = NULL;
	end = *head;
	if (!(*head))
	{
		*head = addNode;
		return (addNode);
	}
	while (end->next)
		end = end->next;
	end->next = addNode;
	return (addNode);
}
