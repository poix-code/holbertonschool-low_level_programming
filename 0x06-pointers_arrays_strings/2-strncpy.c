#include "holberton.h"

/**
 * *_strncpy - The function copy a string.
 * @dest: The variable contains part of the string and return the total string.
 * @src: Contains the string to be copied.
 * @n: Delimiting variable.
 * Return: Void.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
