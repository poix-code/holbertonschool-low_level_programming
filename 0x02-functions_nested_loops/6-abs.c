#include "holberton.h"
/**
 * _abs - The function print the absolute value of a integer.
 * @num: Integer value.
 * Return: "num" is returned to the main.c
 */
int _abs(int num)
{
	if (num < 0)
		num = num * (-1);
	return (num);
}
