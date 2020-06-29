#include "holberton.h"

/**
 * *_strpbrk - The function searches a string for any a set of bytes.
 * @s:  Contains the string to be compared
 * @accept: Contains the other string to be compared.
 * Return: a pointer to the byte in s that matches any byte, or NULL if is not.
 */
char *_strpbrk(char *s, char *accept)
{
	char *pret;
	int i;

	for (pret = s; *pret; pret++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*pret == accept[i])
				return (pret);
		}
	}
	return ('\0');
}
