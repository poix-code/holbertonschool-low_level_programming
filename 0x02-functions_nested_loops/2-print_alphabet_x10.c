#include "holberton.h"
/**
 * print_alphabet_x10 - Function to print the alphabet x10 times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int c, s;

	for (s = 0; s <= 9; s++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
