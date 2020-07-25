#include "lists.h"

/**
 * free_list - The function frees a linked list.
 * @head: The "head" of the linked list.
 * Return: Void.
 */
void free_list(list_t *head)
{
	list_t *free_swap;

	while (head)
	{
		free_swap = head;
		head = head->next;
		free(free_swap->str);
		free(free_swap);
	}
}
