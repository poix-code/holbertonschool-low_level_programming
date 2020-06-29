#include "holberton.h"

/**
 * *_strstr - The function lactes a substring.
 * @haystack: Contains the string to be comapred.
 * @needle: Contains the string with characters to be compared.
 * Return: a pointer to the beginning, or NULL if si not found ocurrences.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
			return (start);
		haystack = start + 1;
	}
	return ('\0');
}
