#include "holberton.h"

/**
 * rev_string - The funcion rev a string.
 * @s: The variable contains the string.
 * Return: Void.
 */
void rev_string(char *s)
{
	char temp, len;
	int i, k;

	len =  _strlen(s) - 1;
	k = len;
	for (i = 0; i < k; i++)
	{
		temp = s[k];
		s[k]  = s[i];
		s[i] = temp;
		k--;
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
