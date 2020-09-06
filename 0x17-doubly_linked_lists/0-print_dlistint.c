#include "lists.h"

/**
 * print_dlistint - prints all the elements of a linked list.
 * @h: Is a pointer to the head of the linked list.
 * Return: the amount of elements of the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
	{
		return (EXIT_FAILURE);
	}
	while (!h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
