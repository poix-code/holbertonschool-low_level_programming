#include "lists.h"

/**
 * sum_dlisint - returns the sum of all the data (n) of a list.
 * @head: points to the head of the linked list.
 * Return: the total of the sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	if (!head)
		return (0);
	while (head)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
