#include "holberton.h"

/**
 * swap_int - check the code for Holberton School students.
 * @a: variable to make swap in the main.
 * @b: Variable to make swap in the main.
 * Return: Void.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
