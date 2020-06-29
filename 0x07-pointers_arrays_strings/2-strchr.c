#include "holberton.h"

/**
 * *_strchr - The function locates a character in a string.
 * @s: The string to be evaluated.
 * @c: Character to be evaluated.
 * Return: A pointer to first character found or NULL if it isn't.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;
		if (*s == c)
			return (s);
	}
	if (*s == '\0')
	{
		return ('\0');
	}
	return (s);
}
