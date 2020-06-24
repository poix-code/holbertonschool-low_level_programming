#include "holberton.h"

/**
 * rev_string - The funcion rev a string.
 * @s: The variable contains the string.
 * Return: Void.
 */
void rev_string(char *s)
{
	char temp;
	int i, length;

	length =  _strlen(s) - 1;
	for (i = 0; i < length; i++)
	{
		temp = s[length];
		s[length] = s[i];
		s[i] = temp;
		length--;
	}
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
