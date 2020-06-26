#include "holberton.h"
/**
 * reverse_array - The function reverses an array.
 * @a: Contains the array.
 * @n: Delimiting variable.
 * Return: Void.
 */
void reverse_array(int *a, int n)
{
	int i1, i2, swap;

	i1 = 0;
	i2 = 0;
	while (a[i1])
	{
		i1++;
	}
	i1 = n - 1;
	for (i2 = 0; i2 < i1; i2++)
	{
		swap = a[i2];
		a[i2] = a[i1];
		a[i1] = swap;
		i1--;
	}
}
