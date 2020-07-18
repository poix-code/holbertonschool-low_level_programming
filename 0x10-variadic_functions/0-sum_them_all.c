#include "variadic_functions.h"

/**
 * sum_them_all - The function sum all its parameters.
 * @n: Define the amount of the arguments.
 * Return: The sum's result.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		sum = 0;
	else
	{
		va_start(list, n);
		for (i = 0; i < n; i++)
			sum += va_arg(list, int);
		va_end(list);
	}
	return (sum);
}
