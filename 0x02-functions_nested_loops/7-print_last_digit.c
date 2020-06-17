#include "holberton.h"
/**
 * print_last_digit - The function prints the last digit of a number.
 * @num: Integer value.
 * Return: Always 0.
 */
int print_last_digit(int num)
{
	int mod;

	mod = num % 10;
	if (num < 0)
		mod = (mod * (-1));
		_putchar(mod + '0');
	return (mod);
}
