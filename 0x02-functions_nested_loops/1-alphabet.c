#include "holberton.h"
/**
 * print_alphabet - Print the alphabet using functions.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int c;

	c = 97;
	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
