#include "holberton.h"
#include <ctype.h>

/**
 * *string_toupper - The functions change lowercase to uppercase.
 * @s: The variable contains an array.
 * Return: The array (s).
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		s[i] = toupper(s[i]);
	}
	return (s);
}
