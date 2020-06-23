#include "holberton.h"

/**
 * print_rev - The function prints in reverse a string.
 * @s: Variable that have the string.
 * Return: Void.
 */
void print_rev(char *s)
{
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
		k = i - 1;
	for (j = 0; j <= i - 1; j++)
	{
		k--;
		_putchar(s[k]);
	}
	_putchar('\n');
}
