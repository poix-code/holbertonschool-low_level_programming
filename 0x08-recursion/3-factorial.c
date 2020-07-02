#include "holberton.h"

/**
 * factorial - The functiont return the factorial of a given number.
 * @n: The number given.
 * Return: the factorial number.
 */
int factorial(int n)
{
	int ret;

	ret = 0;
	if (n < 0)
		ret = -1;
	else if (n == 0)
		ret = 1;
	else
		ret = n * factorial(n - 1);
	return (ret);
}
