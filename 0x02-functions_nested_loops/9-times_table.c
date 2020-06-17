#include "holberton.h"
/**
 * times_table - The function prints the 9 table, estarting with 0.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int column, row, x;

	for (column = 0; column <= 9; column++)
	{
		for (row = 0; row <= 9; row++)
		{
			x = column * row;
			if (row == 0)
			{
				_putchar(x + '0');
			}
			else if (x <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			}
			else if (x >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
