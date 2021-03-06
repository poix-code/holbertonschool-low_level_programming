#include "holberton.h"
/**
 * _atoi - Convert variables.
 * @s: Process variable.
 * Return: value
 */

int _atoi(char *s)
{
	int value, i, neg;

	i = 0;
	value = 0;
	neg = -1;
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			neg *= -1;
		i++;
	}
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
		value = (value * 10) - (s[i++] - '0');
	return (value * neg);
}
