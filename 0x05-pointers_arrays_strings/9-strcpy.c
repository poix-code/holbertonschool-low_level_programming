#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - Redirections with strings.
 * @dest: the variable contains s1.
 * @src: The variable contains the string.
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int c, length;

	length = _strlen(src) + 1;
	for (c = 0; c < length && src[c] != '\0'; c++)
		dest[c] = src[c];
	if (c < length)
		dest[c] = '\0';
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
