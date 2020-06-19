#include "holberton.h"

/**
 * print_square - The function print a square.
 * @size: Variable to print a square.
 * Return: Void.
 */
void print_square(int size)
{
	int i, i2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (i2 = 1; i2 <= size; i2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
