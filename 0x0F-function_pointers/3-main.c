#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - print mathematicals operations.
 * @argc: arg counter
 * @argv: array arguments.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int r = 0;

	if (argc == 4)
	{
		r = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", r);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}

	return (0);
}
