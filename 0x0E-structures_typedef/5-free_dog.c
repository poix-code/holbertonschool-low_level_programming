#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory of struct.
 * @d: pointer to dog_t (struct).
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
