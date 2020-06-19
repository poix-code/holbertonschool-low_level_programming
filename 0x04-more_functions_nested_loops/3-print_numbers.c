#include "holberton.h"

/**
 * print_numbers - Print the numbers from 0 to 9, using _putchar.
 *
 * Return: void
 */
void print_numbers(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		_putchar(i + 0);
		i++;
	}
	_putchar('\n');
}
