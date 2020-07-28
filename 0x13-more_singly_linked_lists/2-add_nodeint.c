#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the linked list.
 * @head: Points to the pointer to the head of the linked list.
 * @n: Contains within the data of the list.
 * Return: The new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addNode;

	if (!head)
		return (0);
	addNode = malloc(sizeof(listint_t));
	if (!addNode)
		return (0);
	addNode->n = n;
	addNode->next = *head;
	*head = addNode;
	return (addNode);
}
