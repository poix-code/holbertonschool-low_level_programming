#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -  intialize a variable of type dog (struct).
 * @d: The struct.
 * @name: The name of the dog.
 * @age: The dog's age.
 * @owner: The name of the dog's owner.
 * Return: Void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
