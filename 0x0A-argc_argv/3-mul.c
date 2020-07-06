#include <stdlib.h>
#include <stdio.h>

/**
 * main - Multiplies two numbers.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 if argc > 1, 1 if argc < 1.
 */
int main(int argc, char **argv)
{
	int mul, ret;

	mul = 0;
	ret = 0;
	if (argc != 3)
	{
		printf("Error\n");
		ret = 1;
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		ret = 0;
	}
	return (ret);
}
