#include <stdio.h>
/**
 * main - Print numbers separeted with comas
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	while (num <= 9)
	{
		putchar(num + 48);
		num++;
		if (num <= 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
