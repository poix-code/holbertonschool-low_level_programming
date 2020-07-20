#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - The function prints the numbers.
 * @separator: Delimiting variable.
 * @n: Nunmber of integers passed to the function.
 * Return: Void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator && !(i == n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
