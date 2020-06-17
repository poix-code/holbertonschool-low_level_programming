#include "holberton.h"
/**
 * _islower - Function to check the lowercase characters.
 * @c: Integer value.
 * Return: 0 if the character is not in lowercase 1 if it is.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
