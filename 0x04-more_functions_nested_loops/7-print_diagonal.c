#include "holberton.h"

/**
 * print_diagonal - Print a diagonal line.
 * @n: Variable to print a diagonal.
 * Return: void.
 */
void print_diagonal(int n)
{
	int i, i2;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (i2 = 0; i2 < i; i2++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
