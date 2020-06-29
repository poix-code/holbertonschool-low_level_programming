#include "holberton.h"

/**
 * *_strchr - THe function locates a character in a string.
 * @s: The string to be evaluated.
 * @c: Character to be evaluated.
 * Return: A pointer to first character found or NULL if it isn't.
 */
char *_strchr(char *s, char c)
{
	char *preturn;

	for (preturn = s; *preturn; preturn++)
	{
		if (*preturn == c)
			return (preturn);
	}
	return ('\0');
}
