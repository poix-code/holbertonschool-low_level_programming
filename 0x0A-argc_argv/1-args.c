#include <stdio.h>

/**
 * main - Print the number of arguments passed into it.
 * @argc: Argument counter.
 * @argv: Argument vector.
 * Return: 0, success.
 */
int main(int argc, char **argv __attribute__((unused)))
{
	int vargc;

	vargc = argc - 1;
	printf("%d\n", vargc);
	return (0);
}
