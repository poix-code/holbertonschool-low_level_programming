#include "holberton.h"

/**
 * print_chessboard - The function prints the chessboard.
 * @a: Variable to print the strings.
 * Return: Void.
 */
void print_chessboard(char (*a)[8])
{
	int i1, i2;

	for (i1 = 0; i1 < 8; i1++)
	{
		for (i2 = 0; i2 < 8; i2++)
		{
			_putchar(a[i1][i2]);
			if (i2 == 7)
				_putchar('\n');
		}
	}
}
