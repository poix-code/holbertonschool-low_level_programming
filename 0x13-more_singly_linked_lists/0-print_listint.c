#include "lists.h"

/**
 * print_listint - Prints all the elements of linked list.
 * @h: Contains within the structure, print the data.
 * Return: The number of elements of the struct.
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
