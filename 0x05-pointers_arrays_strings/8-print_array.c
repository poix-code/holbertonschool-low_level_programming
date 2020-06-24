#include "holberton.h"
#include <stdio.h>

/**
 * print_array - The function prints n elements of an array of integers.
 * @a: Process value.
 * @n: Process value.
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", (a[i]));
		if (i < n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
