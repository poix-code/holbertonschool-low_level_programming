#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - The function prints strings.
 * @separator: Delimiting variable.
 * @n: Number of arguments.
 * Return: Void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str = '\0';
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str)
		{
			printf("%s", str);
			if (separator && !(i == n - 1))
				printf("%s", separator);
		}
		else
			printf("(nil)");
	}
	printf("\n");
	va_end(list);
}
