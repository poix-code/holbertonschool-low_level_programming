#include "holberton.h"

/**
 * more_numbers - Prints 10 times the numbers from o to 14.
 *
 * Return: Void.
 */
void more_numbers(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 14; num2++)
		{
			if (num2 >= 10)
			{
				_putchar(num2 / 10 + '0');
			}
			_putchar(num2 % 10 + '0');
		}
		_putchar('\n');
	}
}
