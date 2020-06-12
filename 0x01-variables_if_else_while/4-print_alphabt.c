#include <stdio.h>
/**
 * main - Alphabet except "e" and "q"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
		{
		putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
