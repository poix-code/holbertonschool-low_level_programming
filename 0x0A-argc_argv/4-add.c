#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the result an add of positive numbers.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 1 if one of the number contains symbols, 0 if not.
 */
int main(int argc, char **argv)
{
	int res, ret, i1, i2;

	res = 0;
	ret = 0;
	for (i1 = 1; i1 < argc; i1++)
	{
		for (i2 = 0; argv[i1][i2]; i2++)
		{
			if (isdigit(argv[i1][i2]) == 0)
			{
				printf("Error\n");
				ret = 1;
			}
		}
	}
	for (i1 = 1; i1 < argc; i1++)
	{
		res += atoi(argv[i1]);
	}
	printf("%d\n", res);
	ret = 0;
	return (ret);
}
