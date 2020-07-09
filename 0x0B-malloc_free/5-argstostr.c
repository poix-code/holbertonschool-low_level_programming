#include "holberton.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program.
 * @ac: contains the delimiting variable (Argument counter).
 * @av: contains the argument vector.
 * Return: The concatenate of the arguments.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *p;
	
	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	p[k] = '\0';
	return (p);
}
