y#include "holberton.h"

/**
 * _pow_recursion - It does the POW function of the math library.
 * @x: Base number.
 * @y: Exponent number.
 * Return: the value of the raised number.
 */
int _pow_recursion(int x, int y)
{
	int ret;

	ret = 0;
	if (y < 0)
		ret = -1;
	else if (y == 0)
		ret = 1;
	else
		ret = x * _pow_recursion(x, y - 1);
	return (ret);
}
