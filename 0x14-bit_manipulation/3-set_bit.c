#include "holberton.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number to set.
 * @index: Indicates the position to set in 1.
 * Return: 1 to success or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setBit = 1;

	if (index > sizeof(n) * 8)
		return (-1);
	*n |= setBit << index;
	return (1);
}
