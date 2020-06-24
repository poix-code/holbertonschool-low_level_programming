#include "holberton.h"

/**
 * print_rev - The function prints in reverse a string.
 * @s: Variable that have the string.
 * Return: Void.
 */
void print_rev(char *s)
{
	int i, length;

	length = _strlen(s);
	for (i = length; s[i] >= 0; i--)
	{
		if (i >= 0 && i <= length - 1)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
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
