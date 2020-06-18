#include "holberton.h"

/**
 * print_times_table - Prints the n times table..
 * @n: Conditional variable.
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int num1, num2, res;

	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			for (num2 = 0; num2 <= n; num2++)
			{
				res = num1 * num2;
				if (num2 == 0)
				{
					_putchar(res + '0');
				}
				else if (res <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				}
				else if (res >= 10 && res < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(res / 10 + '0');
					_putchar(res % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(res / 100 + '0');
					_putchar((res / 10) % 10 + '0');
					_putchar(res % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
