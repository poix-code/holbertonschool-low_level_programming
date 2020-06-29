#include "holberton.h"

/**
 * *_memcpy - The function copies a memory area.
 * @dest: Buffer.
 * @src:  Array to be copied in "dest".
 * @n: Delimiting variable.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
