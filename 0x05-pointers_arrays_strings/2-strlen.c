#include "holberton.h"

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
