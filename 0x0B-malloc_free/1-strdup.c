#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - return returns the copy of a string in a pointer.
 * @str: array for duplicate.
 * Return: the copy of array or NULL if the memory is insufficient.
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int a = 0, len;

	if (str == '\0')
		return (0);
	len = _strlen(str);
	p = malloc(len + 1 * sizeof(char));
	if (p == '\0')
		return (0);
	for ( ; a < len; a++)
		p[a] = str[a];
	p[a] = str[a];
	return (p);
}

/**
 * _strlen - The function returns the length of a string.
 * @s: Variable of the string.
 * Return: integer value.
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
		;
	return (length);
}
