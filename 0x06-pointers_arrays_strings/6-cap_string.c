#include "holberton.h"

/**
 * *cap_string - Capitalizes all words of a string.
 * @s: The variable contains the array.
 * Return: return s.
 */
char *cap_string(char *s)
{
	int i, cd;

	cd = 1;
	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			cd = 0;
		else if (s[i] >= '0' && s[i] <= '9')
			cd = 0;
		else if ((s[i] >= 'a' && s[i] <= 'z') && cd == 1)
		{
			s[i] -= 32;
			cd = 0;
		}

		if (s[i] == '\t' || s[i] == '\n' || s[i] == ' ' ||
		    s[i] == '!' || s[i] == '"' || s[i] == '(' ||
		    s[i] == ')' || s[i] == '{' || s[i] == '}' ||
		    s[i] == '.' || s[i] == ',' || s[i] == ';' ||
		    s[i] == '?')
			cd = 1;
	}
	return (s);
}
