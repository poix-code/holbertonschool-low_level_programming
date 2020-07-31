#include "holberton.h"
#include <limits.h>

/**
 * get_bit - Get the value of a bit at a given index.
 * @n: Number to get the bit value.
 * @index: Indicates the position.
 * Return: The value of the bit at index, -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int res = 0;

	if (index > sizeof(n) * 8)
		return (-1);
	res = n >> index;
	if (res & 1)
		return (1);
	else
		return (0);
	return (0);
}
