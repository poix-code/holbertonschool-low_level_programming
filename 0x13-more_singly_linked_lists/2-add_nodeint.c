#include "lists.h"

/**
 * add_nodeint - .
 *
 * Return: Always 0.
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
