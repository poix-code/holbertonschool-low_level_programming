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
	int p;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	p = (*get_op_func)(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", p);
	return (0);
}
