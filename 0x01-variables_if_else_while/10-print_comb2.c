#include <stdio.h>
/**
 * main - Print numbers separeted with comas from 00 to 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + 48);
	}
	putchar('\n');
	return (0);
}
