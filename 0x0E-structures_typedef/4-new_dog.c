#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - Creates a new entry to the struct.
 * @name: Contains the string of the dog's name.
 * @age: Contains the dog's age.
 * @owner: Contains the name of the dog's owner.
 * Return: pointer to the new entry.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dg;

	new_dg = malloc(sizeof(dog_t));
	if (new_dg == NULL)
	{
		free(new_dg);
		return (NULL);
	}
	if (name)
	{
		new_dg->name = malloc((sizeof(char) * (_strlen(name) + 1)));
		if ((new_dg->name) == NULL)
		{
			free(new_dg);
			return (NULL);
		}
		_strcpy(new_dg->name, name);
	}
	else
		new_dg->name = NULL;
	if (owner)
	{
		new_dg->owner = malloc((sizeof(char) * (_strlen(name) + 1)));
		if ((new_dg->owner) == NULL)
		{
			free(new_dg->name);
			free(new_dg->owner);
			free(new_dg);
			return (NULL);
		}
		_strcpy(new_dg->owner, owner);
	}
	else
		new_dg->owner = NULL;
	new_dg->age = age;
	return (new_dg);
}

/**
 * _strlen - The function returns the length of a string.
 * @s: Variable of the string.
 * Return: integer value.
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *s; length++)
	{
		s++;
	}
	return (length);
}

/**
 * *_strcpy - Redirections with strings.
 * @dest: the variable contains s1.
 * @src: The variable contains the string.
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int c, length;

	length = _strlen(src) + 1;
	for (c = 0; c < length && src[c] != '\0'; c++)
		dest[c] = src[c];
	if (c < length)
		dest[c] = '\0';
	return (dest);
}
