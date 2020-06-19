#include "holberton.h"

/**
 * print_triangle - The function prints a triangle.
 * @size: Variable to define the triangle.
 * Return: Void.
 */
void print_triangle(int size)
{
	int i, i2;

	if (size < 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < size)
		{
			i2 = 0;
			while (i2 < size)
			{
				if (i < size -i2 -1)
					_putchar(' ');
				else
					_putchar('#');
				i2++;
			}
			i++;
			_putchar('\n');
		}
	}
}
