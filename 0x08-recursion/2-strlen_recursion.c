#include "holberton.h"

/**
 * _strlen_recursion - THe function returns the length of a string.
 * @s: Contains the string.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int ret;

	ret = 0;
	if (*s == 0)
		ret = 0;
	else
		ret = 1 + _strlen_recursion(s + 1);
	return (ret);
}
