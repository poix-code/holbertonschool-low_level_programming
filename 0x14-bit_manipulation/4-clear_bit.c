#include "holberton.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number.
 * @index: Indicates the position to set to 0.
 * Return: 1 if it worked or -1 if it not.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int notBit = 1;

	if (index > sizeof(n) * 8)
		return  (-1);
	*n &= ~(notBit << index);
	return (1);
}
