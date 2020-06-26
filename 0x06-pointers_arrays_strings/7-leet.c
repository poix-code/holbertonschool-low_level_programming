#include "holberton.h"

/**
 * *leet - The function encodes a string into 1337.
 * @s: The variable contains the string to encode.
 *
 * Return: The variable s.
 */
char *leet(char *s)
{
	int i1, i2;
	char *letters = "aAeEoOtTlL";
	char *code = "4433007711";

	for (i1 = 0; s[i1]; i1++)
	{
		for (i2 = 0; letters[i2]; i2++)
		{
			if (s[i1] == letters[i2])
			{
				s[i1] = code[i2];
			}
		}
	}
	return (s);
}
