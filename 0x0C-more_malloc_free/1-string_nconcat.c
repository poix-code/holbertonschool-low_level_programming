#include "holberton.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenate two strings.
 * @n: n delimite s2.
 * @s1: the first string.
 * @s2: the second string.
 * Return: the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1, len2, i1, i2;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;
	p = malloc(sizeof(char) * (len1 + n + 1));
	if (p == '\0')
		return (0);
	for (i1 = 0; i1 < len1; i1++)
		p[i1] = s1[i1];
	for (i2 = 0; i2 < n; i2++)
		p[i1 + i2] = s2[i2];
	p[i1 + i2] = '\0';
	return (p);
}

/**
 * _strlen - The function returns the length of a string.
 * @s: Variable of the string.
 * Return: integer value.
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *s; length++)
	{
		s++;
	}
	return (length);
}
