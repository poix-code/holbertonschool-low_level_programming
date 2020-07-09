#include "holberton.h"
#include <stdlib.h>

/**
 * *malloc_checked - The function allocates memory using malloc.
 * @b: Value to put in the heap.
 * Return: void.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == '\0')
		exit(98);
	return (p);
}

