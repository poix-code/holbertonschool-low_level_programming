#include "holberton.h"

/**
 * *rot13 - The function encodes a string in the format rot13.
 * @s: The variable contains the string to encode.
 *
 * Return: The variable s.
 */
char *rot13(char *s)
{
	int i1, i2;
	char abc[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i1 = 0; s[i1]; i1++)
	{
		for (i2 = 0; abc[i2]; i2++)
		{
			if (s[i1] == abc[i2])
			{
				s[i1] = rot13[i2];
			}
		}
	}
	return (s);
}
