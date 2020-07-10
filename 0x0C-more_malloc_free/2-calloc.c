#include "holberton.h"
#include <stdlib.h>

/**
 * *_calloc - The function allocates memory for an array.
 * @nmemb: define the elements of the array.
 * @size: define the size of the memory.
 * Return: the pointer with the array within.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0)
		return (0);
	if (size == 0)
		return (0);
	p = malloc(size * nmemb);
	if (p == '\0')
		return (0);
	for (i = 0; i < nmemb; i++)
	{
		*(p + i) = 0;
	}
	return (p);
}
