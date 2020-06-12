#include <stdio.h>
/**
 * main - Print numbers separeted with comas from 00 to 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num2 = 0; num2 <= 9; num2++)
	{
		for (num1 = 0; num1 <= 9; num1++)
		{
		putchar(num2 + 48);
		putchar(num1 + 48);
		if (num2 <= 9 && num1 <= 9)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
