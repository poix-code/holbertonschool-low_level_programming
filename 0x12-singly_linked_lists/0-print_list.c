#include "lists.h"

/**
 * print_list - Prints all elements of a list with format.
 * @h: contains the struct with the data to print.
 * Return: value of size_t, the amount of elements of the list.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (!(h))
		return (0);
	while (h)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str), i++;
		h = h->next;
	}
	return (i);
}
