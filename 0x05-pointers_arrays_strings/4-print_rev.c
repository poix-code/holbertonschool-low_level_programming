#include "holberton.h"

/**
 * print_rev - The function prints in reverse a string.
 * @s: Variable that have the string.
 * Return: Void.
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
