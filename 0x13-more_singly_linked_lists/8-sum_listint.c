#include "lists.h"

/**
 * sum_listint - Makes the sum of all elements of a linked list.
 * @head: pointer to the head of the linked list.
 * Return: return the result of the sum.
 */
int sum_listint(listint_t *head)
{
	listint_t *sumNode;
	int tmp = 0;

	if (head == NULL)
		return (0);
	sumNode = head;
	while (sumNode != NULL)
	{
		tmp = sumNode->n + tmp;
		sumNode = sumNode->next;
	}
	return (tmp);
}
