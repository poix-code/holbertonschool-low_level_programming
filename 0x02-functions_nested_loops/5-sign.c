#include "holberton.h"
/**
 * print_sign - The function prints the sign of a number or if is 0.
 * @n: Integer value
 * Return: If the number is positive return 1 if not return 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
