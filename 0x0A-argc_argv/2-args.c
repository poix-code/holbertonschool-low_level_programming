#include <stdio.h>

/**
 * main - Prints all arguments that it recives.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: Return 0 for success.
 */
int main(int argc, char **argv)
{
	int count;

	count = 0;
	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
