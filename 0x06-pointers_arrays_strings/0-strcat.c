#include "holberton.h"

/**
 * *_strcat - Concatenates two strings.
 * @dest: The variable had within one string.
 * @src: Contains within other string.
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int i1, i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1])
		i1++;
	while (src[i2])
	{
		dest[i1 + i2] = src[i2];
		i2++;
	}
	return (dest);
}
