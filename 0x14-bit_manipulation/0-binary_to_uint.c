#include "holberton.h"

/**
 * binary_to_uint - converts binary numbers to unsigned int numbers.
 * @b: Contains within the string with number to covert.
 * Return: The unsigned int number converted.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			res <<= 1;
			if (*b++ == '1')
				res ^= 1;
		}
		else
			return (0);
	}
	return (res);
}
