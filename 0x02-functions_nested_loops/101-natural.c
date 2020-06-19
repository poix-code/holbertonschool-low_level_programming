#include <stdio.h>

/**
 * main - Prin the sum of all the multiples of 2 or 5, below 1024.
 *
 * Return: (0)
 */
int main(void)
{
	int i;
	int process;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			process = process + i;
		}
	}
	printf("%d\n", process);
	return (0);
}
