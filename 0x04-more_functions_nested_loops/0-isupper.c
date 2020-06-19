#include "holberton.h"

/**
 * _isupper - The functon checks the uppercase of a character.
 * @c: Process variable.
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
