#include "holberton.h"

/**
 * _isdigit - check he numbers from 0 to 9.
 * @c: Comparison value.
 * Return: Always 1 if is true 0 if not.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
