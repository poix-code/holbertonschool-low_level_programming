#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of two diagonals of a square matrix.
 * @a: rows of the matrix.
 * @size: columns of the matrix.
 * Return: Void.
 */
void print_diagsums(int *a, int size)
{
	int i1, i2, diag1, diag2, MAX;

	diag1 = 0;
	diag2 = 0;
	MAX = size * size;
	for (i1 = 0; i1 < MAX; i1 += size + 1)
		diag1 += a[i1];
	for (i2 = MAX - size; i2 >= 0; i2 -= size + 1)
		diag2 += a[i2];
	printf("%d, %d", diag1, diag2);
	printf("\n");
}
