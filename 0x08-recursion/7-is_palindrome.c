#include "holberton.h"

/**
 * is_palindrome - Checks if a strings is palindrome.
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
 * is_palindrome - Checks if a strings is palindrome.
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
 * is_palindrome - Checks if a strings is palindrome.
 * @s: contains the string.
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
