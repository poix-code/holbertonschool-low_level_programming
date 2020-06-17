#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints all the natural numbers from n to 98
 * @n: integer value
 * Return: 0 succes
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
