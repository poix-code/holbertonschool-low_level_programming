#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - THe function creates an array.
 * @size: Size of the array.
 * @c: to hold the string.
 * Return: the array to the main.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	if (size == 0)
		return (0);
	i = 0;
	while ((unsigned int)i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
