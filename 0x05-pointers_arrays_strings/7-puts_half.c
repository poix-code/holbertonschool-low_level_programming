#include "holberton.h"

/**
 * puts_half - The function prints half of a string.
 * @str: The variable contains the value of the string.
 * Return: Void.
 */
void puts_half(char *str)
{
	int i, lengthstr, length;

	length = _strlen(str);
	lengthstr = length / 2;
	if (lengthstr % 2 != 0)
	{
		for (i = lengthstr; i < length; i++)
		{
			_putchar(str[i]);
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
