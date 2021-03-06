#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - return returns the copy of a string in a pointer.
 * @str: array for duplicate.
 * Return: the copy of array or NULL if the memory is insufficient.
 */
char *_strdup(char *str)
{
	char *cpy;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);
	size = _strlen(str);
	cpy = malloc(size + 1 * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		cpy[i] = str[i];
	return (cpy);
}

/**
 * _strlen - The function returns the length of a string.
 * @s: Variable of the string.
 * Return: integer value.
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *s; length++)
	{
		s++;
	}
	return (length);
}
