#include "holberton.h"

/**
 * flip_bits - show the number of bits that you need to flip other number.
 * @n: Number to compare.
 * @m: check the flip.
 * Return: THe number of bits that you need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flip = 0;
	int SIZE = (sizeof(unsigned long int) * 8) - 1;
	unsigned long int cBit = n ^ m;

	for (; SIZE >= 0; SIZE--)
		if (((cBit >> SIZE) & 1) == 1)
			flip += 1;
	return (flip);
}
