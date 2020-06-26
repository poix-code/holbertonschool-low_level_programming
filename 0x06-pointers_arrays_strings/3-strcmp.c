#include "holberton.h"

/**
 * _strcmp - The function comapres two strings.
 * @s1: Variable to be compared.
 * @s2: Variable to be compared.
 * Return: Void.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			return (res);
		}
		i++;
	}
	return (0);
}
