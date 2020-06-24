#include <stdio.h>

/**
 * rev_string - The funcion rev a string.
 * @s: The variable contains the string.
 * Return: Void.
 */
void rev_string(char *s)
{
	int tmp;
	int i, j;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	for (j = 0; j < i; j++)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i--;
	}
}
