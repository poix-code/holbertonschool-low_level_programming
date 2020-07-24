#include "lists.h"

/**
 * list_len - Prints the number of elements of a linkde list.
 * @h: contains the struct with the data to print.
 * Return: value of size_t, the amount of elements of the list.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (!(h))
		return (0);
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
