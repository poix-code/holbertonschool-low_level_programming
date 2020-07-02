#include "holberton.h"

/**
 * _puts_recursion - Prints a string rescursively.
 * @s: Contains the string to print.
 * Return: Void.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else if (s != '\0')
		_putchar('\n');
}
