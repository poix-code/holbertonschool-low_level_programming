#include "holberton.h"

/**
 * is_prime_number - check if the integer is a prime number.
 * @n: contain the value to be evaluated.
 * Return: 1 or 0, 1 if is a prime number 0 if isn't.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (checkfactor(n, n - 1));
}

/**
 * checkfactor - checks the number
 * @num1: the number to check
 * @num2: module.
 * Return: 1 if it is prime and 0 if it is not prime
 */
int checkfactor(int num1, int num2)
{
	if (num2 == 1)
		return (num2);
	if (num1 % num2 == 0)
		return (0);
	else
		return (checkfactor(num1, num2 - 1));
}
