#include <stdio.h>
/**
 * main - THe numbers from 0-9 in base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
