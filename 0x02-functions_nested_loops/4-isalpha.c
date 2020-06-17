#include "holberton.h"
/**
 * _isalpha - The functions checks that is alphabetic character.
 * @c: Integer value
 * Return: 1 if the variable is a letter 0 if not..
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
