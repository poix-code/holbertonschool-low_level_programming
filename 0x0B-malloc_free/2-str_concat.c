#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - Concatenates two strings.
 * @s1: first part of the new string.
 * @s2: second part of the new string.
 * Return: s1 + s2.
 */

char *str_concat(char *s1, char *s2)
{
	char *cnt;
	unsigned int str1, str2, str3, i;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	str1 = _strlen(s1);
	str2 = _strlen(s2);
	str3 = str1 + str2;
	cnt = malloc(str3 + 1 * sizeof(char));
	if (cnt == '\0')
		return (NULL);
	for (i = 0; i < str1; i++)
	{
		cnt[i] = s1[i];
	}
	for (; i <= str3; i++)
	{
		cnt[i] = s2[i - str1];
	}
	cnt[i] = '\0';
	return (cnt);
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
