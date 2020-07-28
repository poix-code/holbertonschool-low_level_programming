#include "lists.h"

/**
 * listint_len - Counts the elements of a linked list.
 * @h: Pointer to the head of linked list.
 * Return: The number of elements of a linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next, i++;
	}
	return (i);
}
