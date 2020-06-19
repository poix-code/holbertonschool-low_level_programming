#include "holberton.h"
#include <stdio.h>
#include <math.h>
/**
 * main - Prints the larguest prime factor of N number.
 *
 * Return: return 0
 */
int main(void)
{
	long lnum = 612852475143;
	long i;

	for (i = 2; i < sqrt(lnum); i++)
		while ((lnum % i) == 0)
			lnum = lnum /  i;
	printf("%ld\n", lnum);

	return (0);
}
