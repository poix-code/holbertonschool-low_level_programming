#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a list.
 * @head: points to the head of the list.
 * @n: contains the value of the new node.
 * Return: points to the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *tmp;

	if (!head)
		return (0);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newNode;
		newNode->prev = tmp;
	}
	return (tmp);
}
