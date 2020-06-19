#include "holberton.h"

/**
 * print_line - Draw lines.
 * @n: Variable of the function.
 * Return: void.
 */
void print_line(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
