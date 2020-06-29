#include "holberton.h"

/**
 * _strspn - The function gets the length of a prefix substring.
 * @s: String.
 * @accept: The length of the substring.
 * Return: The number of bytes in the variable "s".
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i1, i2;

	for (i1 = 0; s[i1]; i1++)
	{
		for (i2 = 0; accept[i2] != s[i1]; i2++)
		{
			if (accept[i2] == '\0')
				return (i1);
		}
	}
	return (i1);
}
