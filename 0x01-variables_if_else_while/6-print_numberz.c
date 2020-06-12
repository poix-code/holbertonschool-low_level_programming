#include <stdio.h>
/**
 * main - Print numbers base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + 48);
	}
	putchar('\n');
	return (0);
}
