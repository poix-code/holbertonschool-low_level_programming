#include "holberton.h"

/**
 * _puts - Prints a string of the main.
 * @str: The variable contains the string.
 * Return: Void.
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
