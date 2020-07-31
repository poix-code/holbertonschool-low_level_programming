#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: contains the number to be converted.
 * Return: Void.
 */
void print_binary(unsigned long int n)
{
	int size = 0, dif = 0, res = 0;

	size = sizeof(n) * 8;
	if (n == 0)
		_putchar('0');
	else
	{
		for (size = size - 1; size >= 0; size--)
		{
			res = n >> size;
			if (res & 1)
			{
				dif = 1;
				_putchar('1');
			}
			else if (dif == 1)
				_putchar('0');
		}
	}
}
