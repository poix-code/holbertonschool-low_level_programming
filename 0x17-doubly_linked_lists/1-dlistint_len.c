#include "lists.h"

/**
 * dlistint_len - The function returns the amount of elements of the list.
 * @h: Points to the head of the linked list.
 * Return: the number of elements of the linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
