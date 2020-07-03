#include "holberton.h"

/**
 * is_palindrome - Checks if a strings is palindrome, and return a value.
 * @s: contains the string.
 * Return: 1 if the number is palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int size;

	size = _strlen(s);
	return (find_pal(s, 0, size - 1));
}

/**
 * _strlen - Checks if a strings is palindrome.
 * @s: contains the string.
 * Return: 1 if the number is palindrome, 0 if not.
 */
int _strlen(char *s)
{
	int i1;

	i1 = 0;
	while (*(s + i1) != '\0')
		i1++;
	return (i1);
}

/**
 * find_pal - Checks if a strings is palindrome.
 * @s: contains the string.
 * @start: contains the start of the string.
 * @end: contains the end of the string, except the null character.
 * Return: 1 if the number is palindrome, 0 if not.
 */
int find_pal(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if ((*(s + start)) != (*(s + end)))
		return (0);
	else
		return (find_pal(s, start + 1, end - 1));
}
