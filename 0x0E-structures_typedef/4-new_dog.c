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
		return (NULL);
	new_dg->name = name;
	new_dg->age = age;
	new_dg->owner = owner;
	return (new_dg);
}
