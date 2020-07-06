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
	int i, mul, ret;

	i = 0;
	mul = 1;
	ret = 0;
	if (argc > 1 && argc < 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		ret = 0;
	}
	else
	{
		printf("Error\n");
		ret = 1;
	}
	return (ret);
}
