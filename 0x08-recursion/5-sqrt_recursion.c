#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: Value to use.
 * Return: The square root value.
 */
int _sqrt_recursion(int n)
{
	int base;

	base = 0;
	return (find_sqrt(n, base));
}

/**
 * find_sqrt - find the square root.
 * @num: Value of the root square.
 * @i: Value to be compared.
 * Return: The square root value.
 */
int find_sqrt(int num, int i)
{
	int ret;

	ret = 0;
	if (i * i > num)
		ret = -1;
	else if (i * i == num)
		ret = i;
	else
		ret = find_sqrt(num, i + 1);
	return (ret);
}
