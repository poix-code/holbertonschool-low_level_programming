#include "holberton.h"

/**
 * _puts - Prints a string of the main.
 * @str: The variable contains the string.
 * Return: Void.
 */

void _puts(char *str)
{
	int fill_array;

	for (fill_array = 0; str[fill_array] != '\0'; fill_array++)
	{
		_putchar(str[fill_array]);
	}
	_putchar('\n');
}
