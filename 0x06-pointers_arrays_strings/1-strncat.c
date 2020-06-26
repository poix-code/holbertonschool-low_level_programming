#include "holberton.h"

/**
 * *_strncat - The function concatenates two strings..
 * @dest: The variable contains one of the strings.
 * @src:  The variable contins the rest of the string.
 * @n: Delimiting variable.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, length;

	length = _strlen(dest);
	i = 0;
	while (i < n && src[i])
	{
		dest[length + i] = src[i];
		i++;
	}
	return (dest);
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
