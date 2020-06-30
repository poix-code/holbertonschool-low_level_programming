#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: pointer to pointer.
 * @to: Variable to be "converted".
 * Return: Void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

