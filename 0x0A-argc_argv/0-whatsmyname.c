#include <stdio.h>

/**
 * main - prints its name, followed by new line.
 * @argc: argument count.
 * @argv: one-dimensional array.
 * Return: Return 0 == success.
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
