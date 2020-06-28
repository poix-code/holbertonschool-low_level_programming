#include "holberton.h"

/**
 * *_memset - The function fills the memory with a constant n times.
 * @s: The variable contains the string.
 * @b: The variable contains the value that replace n bytes.
 * @n: Delimiting variable.
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
