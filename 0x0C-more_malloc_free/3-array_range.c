#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - The function creates an array of integers.
 * @min: min value or start of the array.
 * @max: max value of the array.
 * Return: The array.
 */
int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (0);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == '\0')
		return (0);
	for (i = 0; i < (max - min) + 1; i++)
		*(p + i) = min + i;
	return (p);
}
