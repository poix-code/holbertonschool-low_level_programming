#include "holberton.h"


/**
 * *string_toupper - The functions change lowercase to uppercase.
 * @s: The variable contains an array.
 * Return: The array (s).
 */
char *string_toupper(char *s)
{
	int i;
	int tr = 'a' - 'A';

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - tr;
		}
	}
	return (s);
}
